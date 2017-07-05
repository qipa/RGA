//=================================================================
// Copyright 2017 Advanced Micro Devices, Inc. All rights reserved.
//=================================================================

#ifndef KAUtils_Files_H
#define KAUtils_Files_H

// C++.
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

// Local.
#include <RadeonGPUAnalyzerCLI/src/kcDataTypes.h>

using namespace std;

class KAUtils
{

public:
    /// read named file into a string.
    /// \param[in]  inputFile     name of file.
    /// \param[out] programSource content of file.
    /// \returns                  success.
    static bool ReadProgramSource(const std::string& inputFile, std::string& programSource);

    /// Write a binary file.
    /// \param[in]  fileName   the name of the file to be created
    /// \param[in]  content    the contents
    /// \param[in]  pCallback  callback for logging
    static bool WriteBinaryFile(const std::string& fileName, const std::vector<char>& content, LoggingCallBackFunc_t pCallback);

    /// Write a text file.
    /// \param[in]  fileName   the name of the file to be created
    /// \param[in]  content    the contents
    /// \param[in]  pCallback  callback for logging
    static bool WriteTextFile(const std::string& fileName, const std::string& content, LoggingCallBackFunc_t pCallback);

private:
    KAUtils(const KAUtils&);
    KAUtils() {}
    ~KAUtils() {}
};

#endif //  KAUtils_Files_H
