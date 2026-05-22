#pragma once
#include <JuceHeader.h>
#include "SpringHammer.h"

class MarxophoneVoice : public juce::SynthesiserVoice {
public:
    bool canPlaySound(juce::SynthesiserSound*) override { return true; }
    void startNote(int midiNote, float velocity, juce::SynthesiserSound*, int) override;
    void renderNextBlock(juce::AudioBuffer<float>&, int, int) override;
private:
    SpringHammer hammer;
};