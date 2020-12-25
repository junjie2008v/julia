// Pointers that are exposed through the public libjulia
#define JL_EXPORTED_DATA_POINTERS(XX) \
    XX(jl_abstractarray_type) \
    XX(jl_abstractslot_type) \
    XX(jl_abstractstring_type) \
    XX(jl_an_empty_string) \
    XX(jl_an_empty_vec_any) \
    XX(jl_any_type) \
    XX(jl_anytuple_type) \
    XX(jl_anytuple_type_type) \
    XX(jl_argument_type) \
    XX(jl_argumenterror_type) \
    XX(jl_array_any_type) \
    XX(jl_array_int32_type) \
    XX(jl_array_symbol_type) \
    XX(jl_array_type) \
    XX(jl_array_typename) \
    XX(jl_array_uint8_type) \
    XX(jl_base_module) \
    XX(jl_bool_type) \
    XX(jl_bottom_type) \
    XX(jl_boundserror_type) \
    XX(jl_builtin_type) \
    XX(jl_char_type) \
    XX(jl_code_info_type) \
    XX(jl_code_instance_type) \
    XX(jl_core_module) \
    XX(jl_const_type) \
    XX(jl_datatype_type) \
    XX(jl_densearray_type) \
    XX(jl_diverror_exception) \
    XX(jl_emptysvec) \
    XX(jl_emptytuple) \
    XX(jl_emptytuple_type) \
    XX(jl_errorexception_type) \
    XX(jl_expr_type) \
    XX(jl_false) \
    XX(jl_float16_type) \
    XX(jl_float32_type) \
    XX(jl_float64_type) \
    XX(jl_floatingpoint_type) \
    XX(jl_function_type) \
    XX(jl_globalref_type) \
    XX(jl_gotoifnot_type) \
    XX(jl_gotonode_type) \
    XX(jl_initerror_type) \
    XX(jl_int16_type) \
    XX(jl_int32_type) \
    XX(jl_int64_type) \
    XX(jl_int8_type) \
    XX(jl_interrupt_exception) \
    XX(jl_intrinsic_type) \
    XX(jl_lineinfonode_type) \
    XX(jl_linenumbernode_type) \
    XX(jl_llvmpointer_type) \
    XX(jl_llvmpointer_typename) \
    XX(jl_loaderror_type) \
    XX(jl_main_module) \
    XX(jl_memory_exception) \
    XX(jl_method_instance_type) \
    XX(jl_method_match_type) \
    XX(jl_method_type) \
    XX(jl_methoderror_type) \
    XX(jl_methtable_type) \
    XX(jl_module_type) \
    XX(jl_namedtuple_type) \
    XX(jl_namedtuple_typename) \
    XX(jl_newvarnode_type) \
    XX(jl_nonfunction_mt) \
    XX(jl_nothing) \
    XX(jl_nothing_type) \
    XX(jl_number_type) \
    XX(jl_partial_struct_type) \
    XX(jl_phicnode_type) \
    XX(jl_phinode_type) \
    XX(jl_pinode_type) \
    XX(jl_pointer_type) \
    XX(jl_pointer_typename) \
    XX(jl_quotenode_type) \
    XX(jl_readonlymemory_exception) \
    XX(jl_ref_type) \
    XX(jl_returnnode_type) \
    XX(jl_signed_type) \
    XX(jl_simplevector_type) \
    XX(jl_slotnumber_type) \
    XX(jl_ssavalue_type) \
    XX(jl_stackovf_exception) \
    XX(jl_string_type) \
    XX(jl_symbol_type) \
    XX(jl_task_type) \
    XX(jl_top_module) \
    XX(jl_true) \
    XX(jl_tuple_typename) \
    XX(jl_tvar_type) \
    XX(jl_type_type) \
    XX(jl_type_type_mt) \
    XX(jl_type_typename) \
    XX(jl_typedslot_type) \
    XX(jl_typeerror_type) \
    XX(jl_typemap_entry_type) \
    XX(jl_typemap_level_type) \
    XX(jl_typename_type) \
    XX(jl_typeofbottom_type) \
    XX(jl_uint16_type) \
    XX(jl_uint32_type) \
    XX(jl_uint64_type) \
    XX(jl_uint8_type) \
    XX(jl_uint8pointer_type) \
    XX(jl_undefref_exception) \
    XX(jl_undefvarerror_type) \
    XX(jl_unionall_type) \
    XX(jl_uniontype_type) \
    XX(jl_upsilonnode_type) \
    XX(jl_vararg_type) \
    XX(jl_vecelement_typename) \
    XX(jl_void_type) \
    XX(jl_voidpointer_type) \
    XX(jl_weakref_type)


// Data symbols that are defined inside the public libjulia
#define JL_EXPORTED_DATA_SYMBOLS(XX) \
    XX(jl_n_threads, int)