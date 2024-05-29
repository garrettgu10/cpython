
static OPCODE_FUNC_PTR_TYPE opcode_funcs[256] = {
    FUNC_CACHE,
    FUNC_BEFORE_ASYNC_WITH,
    FUNC_BEFORE_WITH,
    FUNC_BINARY_OP_INPLACE_ADD_UNICODE,
    FUNC_BINARY_SLICE,
    FUNC_BINARY_SUBSCR,
    FUNC_CHECK_EG_MATCH,
    FUNC_CHECK_EXC_MATCH,
    FUNC_CLEANUP_THROW,
    FUNC_DELETE_SUBSCR,
    FUNC_END_ASYNC_FOR,
    FUNC_END_FOR,
    FUNC_END_SEND,
    FUNC_EXIT_INIT_CHECK,
    FUNC_FORMAT_SIMPLE,
    FUNC_FORMAT_WITH_SPEC,
    FUNC_GET_AITER,
    FUNC_RESERVED,
    FUNC_GET_ANEXT,
    FUNC_GET_ITER,
    FUNC_GET_LEN,
    FUNC_GET_YIELD_FROM_ITER,
    FUNC_INTERPRETER_EXIT,
    FUNC_LOAD_ASSERTION_ERROR,
    FUNC_LOAD_BUILD_CLASS,
    FUNC_LOAD_LOCALS,
    FUNC_MAKE_FUNCTION,
    FUNC_MATCH_KEYS,
    FUNC_MATCH_MAPPING,
    FUNC_MATCH_SEQUENCE,
    FUNC_NOP,
    FUNC_POP_EXCEPT,
    FUNC_POP_TOP,
    FUNC_PUSH_EXC_INFO,
    FUNC_PUSH_NULL,
    FUNC_RETURN_GENERATOR,
    FUNC_RETURN_VALUE,
    FUNC_SETUP_ANNOTATIONS,
    FUNC_STORE_SLICE,
    FUNC_STORE_SUBSCR,
    FUNC_TO_BOOL,
    FUNC_UNARY_INVERT,
    FUNC_UNARY_NEGATIVE,
    FUNC_UNARY_NOT,
    FUNC_WITH_EXCEPT_START,
    FUNC_BINARY_OP,
    FUNC_BUILD_CONST_KEY_MAP,
    FUNC_BUILD_LIST,
    FUNC_BUILD_MAP,
    FUNC_BUILD_SET,
    FUNC_BUILD_SLICE,
    FUNC_BUILD_STRING,
    FUNC_BUILD_TUPLE,
    FUNC_CALL,
    FUNC_CALL_FUNCTION_EX,
    FUNC_CALL_INTRINSIC_1,
    FUNC_CALL_INTRINSIC_2,
    FUNC_CALL_KW,
    FUNC_COMPARE_OP,
    FUNC_CONTAINS_OP,
    FUNC_CONVERT_VALUE,
    FUNC_COPY,
    FUNC_COPY_FREE_VARS,
    FUNC_DELETE_ATTR,
    FUNC_DELETE_DEREF,
    FUNC_DELETE_FAST,
    FUNC_DELETE_GLOBAL,
    FUNC_DELETE_NAME,
    FUNC_DICT_MERGE,
    FUNC_DICT_UPDATE,
    FUNC_ENTER_EXECUTOR,
    FUNC_EXTENDED_ARG,
    FUNC_FOR_ITER,
    FUNC_GET_AWAITABLE,
    FUNC_IMPORT_FROM,
    FUNC_IMPORT_NAME,
    FUNC_IS_OP,
    FUNC_JUMP_BACKWARD,
    FUNC_JUMP_BACKWARD_NO_INTERRUPT,
    FUNC_JUMP_FORWARD,
    FUNC_LIST_APPEND,
    FUNC_LIST_EXTEND,
    FUNC_LOAD_ATTR,
    FUNC_LOAD_CONST,
    FUNC_LOAD_DEREF,
    FUNC_LOAD_FAST,
    FUNC_LOAD_FAST_AND_CLEAR,
    FUNC_LOAD_FAST_CHECK,
    FUNC_LOAD_FAST_LOAD_FAST,
    FUNC_LOAD_FROM_DICT_OR_DEREF,
    FUNC_LOAD_FROM_DICT_OR_GLOBALS,
    FUNC_LOAD_GLOBAL,
    FUNC_LOAD_NAME,
    FUNC_LOAD_SUPER_ATTR,
    FUNC_MAKE_CELL,
    FUNC_MAP_ADD,
    FUNC_MATCH_CLASS,
    FUNC_POP_JUMP_IF_FALSE,
    FUNC_POP_JUMP_IF_NONE,
    FUNC_POP_JUMP_IF_NOT_NONE,
    FUNC_POP_JUMP_IF_TRUE,
    FUNC_RAISE_VARARGS,
    FUNC_RERAISE,
    FUNC_RETURN_CONST,
    FUNC_SEND,
    FUNC_SET_ADD,
    FUNC_SET_FUNCTION_ATTRIBUTE,
    FUNC_SET_UPDATE,
    FUNC_STORE_ATTR,
    FUNC_STORE_DEREF,
    FUNC_STORE_FAST,
    FUNC_STORE_FAST_LOAD_FAST,
    FUNC_STORE_FAST_STORE_FAST,
    FUNC_STORE_GLOBAL,
    FUNC_STORE_NAME,
    FUNC_SWAP,
    FUNC_UNPACK_EX,
    FUNC_UNPACK_SEQUENCE,
    FUNC_YIELD_VALUE,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_RESUME,
    FUNC_BINARY_OP_ADD_FLOAT,
    FUNC_BINARY_OP_ADD_INT,
    FUNC_BINARY_OP_ADD_UNICODE,
    FUNC_BINARY_OP_MULTIPLY_FLOAT,
    FUNC_BINARY_OP_MULTIPLY_INT,
    FUNC_BINARY_OP_SUBTRACT_FLOAT,
    FUNC_BINARY_OP_SUBTRACT_INT,
    FUNC_BINARY_SUBSCR_DICT,
    FUNC_BINARY_SUBSCR_GETITEM,
    FUNC_BINARY_SUBSCR_LIST_INT,
    FUNC_BINARY_SUBSCR_STR_INT,
    FUNC_BINARY_SUBSCR_TUPLE_INT,
    FUNC_CALL_ALLOC_AND_ENTER_INIT,
    FUNC_CALL_BOUND_METHOD_EXACT_ARGS,
    FUNC_CALL_BOUND_METHOD_GENERAL,
    FUNC_CALL_BUILTIN_CLASS,
    FUNC_CALL_BUILTIN_FAST,
    FUNC_CALL_BUILTIN_FAST_WITH_KEYWORDS,
    FUNC_CALL_BUILTIN_O,
    FUNC_CALL_ISINSTANCE,
    FUNC_CALL_LEN,
    FUNC_CALL_LIST_APPEND,
    FUNC_CALL_METHOD_DESCRIPTOR_FAST,
    FUNC_CALL_METHOD_DESCRIPTOR_FAST_WITH_KEYWORDS,
    FUNC_CALL_METHOD_DESCRIPTOR_NOARGS,
    FUNC_CALL_METHOD_DESCRIPTOR_O,
    FUNC_CALL_NON_PY_GENERAL,
    FUNC_CALL_PY_EXACT_ARGS,
    FUNC_CALL_PY_GENERAL,
    FUNC_CALL_STR_1,
    FUNC_CALL_TUPLE_1,
    FUNC_CALL_TYPE_1,
    FUNC_COMPARE_OP_FLOAT,
    FUNC_COMPARE_OP_INT,
    FUNC_COMPARE_OP_STR,
    FUNC_CONTAINS_OP_DICT,
    FUNC_CONTAINS_OP_SET,
    FUNC_FOR_ITER_GEN,
    FUNC_FOR_ITER_LIST,
    FUNC_FOR_ITER_RANGE,
    FUNC_FOR_ITER_TUPLE,
    FUNC_LOAD_ATTR_CLASS,
    FUNC_LOAD_ATTR_GETATTRIBUTE_OVERRIDDEN,
    FUNC_LOAD_ATTR_INSTANCE_VALUE,
    FUNC_LOAD_ATTR_METHOD_LAZY_DICT,
    FUNC_LOAD_ATTR_METHOD_NO_DICT,
    FUNC_LOAD_ATTR_METHOD_WITH_VALUES,
    FUNC_LOAD_ATTR_MODULE,
    FUNC_LOAD_ATTR_NONDESCRIPTOR_NO_DICT,
    FUNC_LOAD_ATTR_NONDESCRIPTOR_WITH_VALUES,
    FUNC_LOAD_ATTR_PROPERTY,
    FUNC_LOAD_ATTR_SLOT,
    FUNC_LOAD_ATTR_WITH_HINT,
    FUNC_LOAD_GLOBAL_BUILTIN,
    FUNC_LOAD_GLOBAL_MODULE,
    FUNC_LOAD_SUPER_ATTR_ATTR,
    FUNC_LOAD_SUPER_ATTR_METHOD,
    FUNC_RESUME_CHECK,
    FUNC_SEND_GEN,
    FUNC_STORE_ATTR_INSTANCE_VALUE,
    FUNC_STORE_ATTR_SLOT,
    FUNC_STORE_ATTR_WITH_HINT,
    FUNC_STORE_SUBSCR_DICT,
    FUNC_STORE_SUBSCR_LIST_INT,
    FUNC_TO_BOOL_ALWAYS_TRUE,
    FUNC_TO_BOOL_BOOL,
    FUNC_TO_BOOL_INT,
    FUNC_TO_BOOL_LIST,
    FUNC_TO_BOOL_NONE,
    FUNC_TO_BOOL_STR,
    FUNC_UNPACK_SEQUENCE_LIST,
    FUNC_UNPACK_SEQUENCE_TUPLE,
    FUNC_UNPACK_SEQUENCE_TWO_TUPLE,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_unknown_opcode,
    FUNC_INSTRUMENTED_RESUME,
    FUNC_INSTRUMENTED_END_FOR,
    FUNC_INSTRUMENTED_END_SEND,
    FUNC_INSTRUMENTED_RETURN_VALUE,
    FUNC_INSTRUMENTED_RETURN_CONST,
    FUNC_INSTRUMENTED_YIELD_VALUE,
    FUNC_INSTRUMENTED_LOAD_SUPER_ATTR,
    FUNC_INSTRUMENTED_FOR_ITER,
    FUNC_INSTRUMENTED_CALL,
    FUNC_INSTRUMENTED_CALL_KW,
    FUNC_INSTRUMENTED_CALL_FUNCTION_EX,
    FUNC_INSTRUMENTED_INSTRUCTION,
    FUNC_INSTRUMENTED_JUMP_FORWARD,
    FUNC_INSTRUMENTED_JUMP_BACKWARD,
    FUNC_INSTRUMENTED_POP_JUMP_IF_TRUE,
    FUNC_INSTRUMENTED_POP_JUMP_IF_FALSE,
    FUNC_INSTRUMENTED_POP_JUMP_IF_NONE,
    FUNC_INSTRUMENTED_POP_JUMP_IF_NOT_NONE,
    FUNC_INSTRUMENTED_LINE,
    FUNC_unknown_opcode,
};
