#include <iostream>
#include <string>

#include "Processor.h"
#include "RAM.h"
#include "GraphicsCard.h"
#include "Webcam.h"
#include "Mouse.h"
#include "Printer.h"

using namespace std;

class Laptop {

private:
    string brand;
    string model;

    Processor processor;
    RAM ram;
    GraphicsCard graphicsCard;
    Webcam webcam;
    Mouse* mouse;
    Printer* printer;

public:

    Laptop(const string& brand, const string& model, const string processorName, const int& ramCap,
        const string graphicsCard, const string& webcam,
        Mouse* mouse, Printer* printer);

    void Print() const;

};

