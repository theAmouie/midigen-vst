/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class MidigenAudioProcessorEditor  : public AudioProcessorEditor, private Slider::Listener // I added this
{
public:
    MidigenAudioProcessorEditor (MidigenAudioProcessor&);
    ~MidigenAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // I added this:
    void sliderValueChanged(Slider* slider) override; // [3]

    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    MidigenAudioProcessor& processor;

    // I added these:
    Slider midiVolume; // [1]
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MidigenAudioProcessorEditor)
};
