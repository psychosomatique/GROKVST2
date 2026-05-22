#pragma once
#include <JuceHeader.h>

class SpringHammer {
public:
    void prepare(double sr);
    void noteOn(float vel, float rate);
    void process(double* out, int numSamples, bool held);
private:
    double position = 0.0, velocity = 0.0;
    double springK = 1200.0;
    double damping = 0.985;
    juce::SmoothedValue<double> smoothedRate;
};