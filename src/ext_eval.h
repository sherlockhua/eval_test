/*===========================================
*   Copyright (C) 2014 All rights reserved.
*   
*   company      : xiaomi
*   author       : root
*   email        : root@xiaomi.com
*   date         ：2014-12-13 11:11:10
*   description  ：
*
=============================================*/
#ifndef _EXT_EVAL_TEST_H_
#define _EXT_EVAL_TEST_H_

#include <string>
#include "hphp/runtime/base/base-includes.h"
#include "hphp/runtime/ext/extension.h"


namespace HPHP {


class EvalTestExtension : public Extension {
public:
    EvalTestExtension():Extension("eval_test"){}
    virtual void moduleInit();
    //void moduleLoad(Hdf config);
    //void moduleLoad(const IniSetting::Map& ini, Hdf config);

};

}

#endif //_EXT_EXAMPLE_H

