#pragma once
#include <iostream>
#include <string>

using namespace std;

class Processor {

private:
    string brand;
    string model;
    int cores;
    int streams;
    int cache;
    int frequency;

public:

    Processor(const string& brand, const string& model = "none", int cores = 4, int streams = 4, int cache = 8, int frequency = 3);

    void Print() const;
};

