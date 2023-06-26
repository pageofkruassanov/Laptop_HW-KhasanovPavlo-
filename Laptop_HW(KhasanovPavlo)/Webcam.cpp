#include "Webcam.h"

Webcam::Webcam(const string& resolution) : resolution(resolution) {}

void Webcam::Print() const {

    cout << "Webcam: " << resolution << endl;
}