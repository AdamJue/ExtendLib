//
// Created by yunti on 24-11-19.
//

#include "ExtendLib.h"
#include <iostream>
#include <KernelLib.h>

namespace ExtendLib {

    std::string processFile(const std::string& filename) {
        // 使用KernelLib中的函数读取文件
        std::string fileContent = KernelLib::readFile(filename);
        if (fileContent.empty()) {
            std::cerr << "Failed to read file: " << filename << std::endl;
            return "";
        }

        // 添加一些处理逻辑
        std::string processedContent = "Processed: " + fileContent;
        return processedContent;
    }

} // namespace ExtendLib
