#include "GraphicsCard.h"

GraphicsCard::GraphicsCard(const string& brand, const string& model)
    : brand(brand), model(model) {}

void GraphicsCard::Print() const {

    cout << "Graphics Card: " << brand << " " << model << endl;
}