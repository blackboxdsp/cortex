/**
 * Cortex is a lightweight audio DSP library intended for use
 * in any relevant application e.g. Electrosmith Daisy patches,
 * JUCE plugins, VCV Rack modules.
 *
 * Author: Matthew Maxwell, 2024
 */
#ifndef CORTEX_LIB_H
#define CORTEX_LIB_H

// AUDIO
#include "audio/context.h"
#include "audio/sample.h"

// GENERATORS
#include "generators/oscillator.h"

// PROCESSORS
#include "processors/filter.h"
#include "processors/saturator.h"
#include "processors/wavefolder.h"

// UTILITIES
#include "utilities/arithmetic.h"
#include "utilities/midi.h"

#endif
