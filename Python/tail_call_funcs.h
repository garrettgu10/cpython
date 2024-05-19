#include "ceval_macros.h"

#define TARGET(X) uintptr_t FUNC_##X(PyThreadState *tstate, _PyInterpreterFrame *frame, PyObject **stack_pointer, _Py_CODEUNIT *next_instr, int opcode, int oparg, _PyCFrame *cframe, PyObject *kwnames, ret_state *state)
#define DISPATCH_GOTO() OPCODE_FUNC_PTR_TYPE next = opcode_funcs[opcode]; \
                        return next(tstate, frame, stack_pointer, next_instr, opcode, oparg, cframe, kwnames, state)


const uintptr_t pop_1_error = 1;
const uintptr_t pop_2_error = 2;
const uintptr_t pop_3_error = 3;
const uintptr_t pop_4_error = 4;
const uintptr_t error = 5;
const uintptr_t unbound_local_error = 6;
const uintptr_t exception_unwind = 7;
const uintptr_t exit_unwind = 8;
const uintptr_t resume_with_error = 9;
const uintptr_t handle_eval_breaker = 10;
const uintptr_t resume_frame = 11;
const uintptr_t start_frame = 12;

#define STORE_RET_STATE {\
    state->tstate = tstate;\
    state->frame = frame;\
    state->stack_pointer = stack_pointer;\
    state->next_instr = next_instr;\
    state->opcode = opcode;\
    state->oparg = oparg;\
    state->kwnames = kwnames;\
}

#define RESTORE_RET_STATE {\
    tstate = s.tstate;\
    frame = s.frame;\
    stack_pointer = s.stack_pointer;\
    next_instr = s.next_instr;\
    opcode = s.opcode;\
    oparg = s.oparg;\
    kwnames = s.kwnames;\
}

#define CEVAL_GOTO(X) STORE_RET_STATE return X
#define return return (uintptr_t)

#include "generated_cases.c.h"

uintptr_t FUNC_unknown_opcode(PyThreadState *tstate, _PyInterpreterFrame *frame, PyObject **stack_pointer, _Py_CODEUNIT *next_instr, int opcode, int oparg, _PyCFrame *cframe, PyObject *kwnames, ret_state *state) {
    opcode = next_instr->op.code;
    _PyErr_Format(tstate, PyExc_SystemError,
                    "%U:%d: unknown opcode %d",
                    frame->f_code->co_filename,
                    PyUnstable_InterpreterFrame_GetLine(frame),
                    opcode);
    CEVAL_GOTO(error);
}

uintptr_t FUNC_INSTRUMENTED_LINE(PyThreadState *tstate, _PyInterpreterFrame *frame, PyObject **stack_pointer, _Py_CODEUNIT *next_instr, int opcode, int oparg, _PyCFrame *cframe, PyObject *kwnames, ret_state *state) {
    _Py_CODEUNIT *prev = frame->prev_instr;
    _Py_CODEUNIT *here = frame->prev_instr = next_instr;
    _PyFrame_SetStackPointer(frame, stack_pointer);
    int original_opcode = _Py_call_instrumentation_line(
            tstate, frame, here, prev);
    stack_pointer = _PyFrame_GetStackPointer(frame);
    if (original_opcode < 0) {
        next_instr = here+1;
        CEVAL_GOTO(error);
    }
    next_instr = frame->prev_instr;
    if (next_instr != here) {
        DISPATCH();
    }
    if (_PyOpcode_Caches[original_opcode]) {
        _PyBinaryOpCache *cache = (_PyBinaryOpCache *)(next_instr+1);
        /* Prevent the underlying instruction from specializing
            * and overwriting the instrumentation. */
        INCREMENT_ADAPTIVE_COUNTER(cache->counter);
    }
    opcode = original_opcode;
    DISPATCH_GOTO();
}

#undef goto
#undef return
#undef TARGET

#undef DISPATCH_GOTO
#define DISPATCH_GOTO() OPCODE_FUNC_PTR_TYPE next = opcode_funcs[opcode]; \
                        uintptr_t res = next(tstate, frame, stack_pointer, next_instr, opcode, oparg, &cframe, kwnames, &s); \
                        printf("Top level returned %d\n", res);\
                        RESTORE_RET_STATE;\
                        switch(res) {\
                        case pop_1_error: goto pop_1_error;\
                        case pop_2_error: goto pop_2_error;\
                        case pop_3_error: goto pop_3_error;\
                        case pop_4_error: goto pop_4_error;\
                        case error: goto error;\
                        case unbound_local_error: goto unbound_local_error;\
                        case exception_unwind: goto exception_unwind;\
                        case exit_unwind: goto exit_unwind;\
                        case resume_with_error: goto resume_with_error;\
                        case handle_eval_breaker: goto handle_eval_breaker;\
                        case resume_frame: goto resume_frame;\
                        case start_frame: goto start_frame;\
                        default: return (PyObject*)res;\
                        }
