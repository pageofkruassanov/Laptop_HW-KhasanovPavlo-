#include "RAM.h"

RAM::RAM(int capacity) : capacity(capacity) {}

void RAM::Print() const {

    cout << "RAM: " << capacity << "GB" << endl;
}