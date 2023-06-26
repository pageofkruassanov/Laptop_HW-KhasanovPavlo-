#include "Processor.h"

Processor::Processor(const string& brand, const string& model, const int cores, const int streams, const int cache, const int frequency)
    :
    brand(brand),
    model(model),
    cores(cores),
    streams(streams),
    cache(cache),
    frequency(frequency) {}

void Processor::Print() const {

    cout << "Processor: " << brand << " " << model << ":\n" << cores << " cores/" << streams << " streams, " << cache << "MB, " << frequency << "HHz" << endl;
}