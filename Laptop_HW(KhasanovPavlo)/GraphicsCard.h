#pragma once
#include <iostream>
#include <string>

using namespace std;

class GraphicsCard {

private:

    string brand;
    string model;

public:

    GraphicsCard(const string& brand, const string& model = "none");

    void Print() const;
};

