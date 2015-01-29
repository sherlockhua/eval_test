/*===========================================
*   Copyright (C) 2014 All rights reserved.
*   
*   company      : xiaomi
*   author       : root
*   email        : root@xiaomi.com
*   date         ：2014-12-13 09:48:47
*   description  ：
*
=============================================*/
#include "hphp/runtime/base/base-includes.h"
#include "hphp/runtime/ext/std/ext_std_classobj.h"
#include "hphp/runtime/ext/extension.h"
#include "hphp/runtime/vm/runtime.h"
#include "ext_eval.h"

namespace HPHP { 

static Variant HHVM_FUNCTION(eval_test, const String& str)
{
    if (!str.length()) {
        return false;
    }

    Unit* unit = compile_string(str.data(), str.length());

    Variant v;
    g_context->invokeFunc((TypedValue*)&v, unit->getMain(),                                                                                                             
                          init_null_variant, nullptr, nullptr, nullptr, nullptr,
                          ExecutionContext::InvokePseudoMain);
    return v;
}

void EvalTestExtension::moduleInit() 
{
    HHVM_FE(eval_test);

    loadSystemlib();
}



EvalTestExtension s_eval_test_extension;
HHVM_GET_MODULE(eval_test);

}
