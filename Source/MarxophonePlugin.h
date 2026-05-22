#pragma once
#include <JuceHeader.h>
#include "DSP/Synthesiser.h"

class MarxophoneProcessor : public juce::AudioProcessor {
public:
    MarxophoneProcessor();
    void prepareToPlay(double, int) override;
    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) override;
private:
    juce::AudioProcessorValueTreeState parameters;
    MarxophoneSynthesiser synth;
};