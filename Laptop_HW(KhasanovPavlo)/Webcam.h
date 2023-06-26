#pragma once
#include <iostream>
#include <string>

using namespace std;

class Webcam {

private:
    string resolution;

public:

    Webcam(const string& resolution);

    void Print() const;
};

