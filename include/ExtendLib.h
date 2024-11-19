//
// Created by yunti on 24-11-19.
//
#ifndef EXTENDLIB_H
#define EXTENDLIB_H

#include <iostream>

#ifdef _WIN32
    #ifdef EXTENTLIB_EXPORT
        #define EXTENTLIB_API __declspec(dllexport)
    #else
        #define EXTENTLIB_API __declspec(dllimport)
    #endif
#else
    #define EXTENTLIB_API
#endif

namespace ExtendLib {

    // 使用KernelLib中的函数并添加一些逻辑
    EXTENTLIB_API std::string processFile(const std::string& filename);

} // namespace ExtendLib

#endif // EXTENDLIB_H
