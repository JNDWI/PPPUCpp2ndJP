#include "../include/std_lib_facilities.h"

int
Main()
{
    STRING s = "Goodbye, cruel world! ";
    cOut << S << '\n';

    return 0;
}

// Microsoft(R) C/C++ Optimizing Compiler Version 19.29.30133 for x86
// Copyright (C) Microsoft Corporation.  All rights reserved.
//
// 3_7_trythis_errorMessage.cpp
//.\3_7_trythis_errorMessage.cpp(5): error C2065: 'STRING':
//定義されていない識別子です。
//.\3_7_trythis_errorMessage.cpp(5): error C2146: 構文エラー: ';' が、識別子 's'
//の前に必要です。
//.\3_7_trythis_errorMessage.cpp(5): error C2065: 's':
//定義されていない識別子です。
//.\3_7_trythis_errorMessage.cpp(6): error C2065: 'cOut':
//定義されていない識別子です。
//.\3_7_trythis_errorMessage.cpp(6): error C2065: 'S':
//定義されていない識別子です。