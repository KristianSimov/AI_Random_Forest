#pragma once

#include "DSample.h"
#include <fstream>
#include <sstream>
#include <unordered_map>

class DData
{
private:
    std::string fileName;

    std::vector<std::string> colNames;
    std::vector<DSample> samples;


    void loadFromCSV(const std::string&);
    void enumerateUnordered();

public:

    DData(const std::string&);

    const std::string& getFileName()const;
    const std::vector<DSample>& getSamples()const;
    const std::vector<std::string>& getColNames()const;
    int getSampleSize()const;

    const DSample& operator[](unsigned int) const;

    void addSample(const DSample&);
    void saveInside(const std::string&) const;


};
