cmake_minimum_required(VERSION 3.22)
project(Marxophone VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 23)

find_package(JUCE CONFIG REQUIRED)

juce_add_plugin(Marxophone
    PRODUCT_NAME "Marxophone"
    COMPANY_NAME "GrokVST"
    PLUGIN_MANUFACTURER_CODE "GRKV"
    PLUGIN_CODE "MRXP"
    IS_SYNTH TRUE
    NEEDS_MIDI_INPUT TRUE
    FORMATS VST3 AU Standalone
)

target_sources(Marxophone PRIVATE
    Source/MarxophonePlugin.cpp
    Source/DSP/Voice.cpp
    Source/DSP/SpringHammer.cpp
    # add all files
)

target_link_libraries(Marxophone PRIVATE
    juce::juce_audio_basics
    juce::juce_audio_processors
    juce::juce_gui_basics
)