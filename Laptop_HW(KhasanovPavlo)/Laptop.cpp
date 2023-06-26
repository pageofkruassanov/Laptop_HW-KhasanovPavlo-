#include "Laptop.h"

Laptop::Laptop(const string& brand, const string& model, const string processorName, const int& ramCap,
    const string graphicsCard, const string& webcam,
    Mouse* mouse, Printer* printer)
    :
    brand(brand),
    model(model),
    processor(processorName),
    ram(ramCap),
    graphicsCard(graphicsCard),
    webcam(webcam),
    mouse(mouse),
    printer(printer) {}

void Laptop::Print() const {

    cout << "Laptop: " << brand << " " << model << endl;
    processor.Print();
    ram.Print();
    graphicsCard.Print();
    webcam.Print();
    mouse->Print();
    printer->Print();
}
