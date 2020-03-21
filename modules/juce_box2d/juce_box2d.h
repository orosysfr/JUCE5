/*
  ==============================================================================

   This file is part of the JUCE 6 technical preview.
   Copyright (c) 2017 - ROLI Ltd.

   You may use this code under the terms of the GPL v3
   (see www.gnu.org/licenses).

   For this technical preview, this file is not subject to commercial licensing.

   JUCE IS PROVIDED "AS IS" WITHOUT ANY WARRANTY, AND ALL WARRANTIES, WHETHER
   EXPRESSED OR IMPLIED, INCLUDING MERCHANTABILITY AND FITNESS FOR PURPOSE, ARE
   DISCLAIMED.

  ==============================================================================
*/


/*******************************************************************************
 The block below describes the properties of this module, and is read by
 the Projucer to automatically generate project code that uses it.
 For details about the syntax and how to create or use a module, see the
 JUCE Module Format.txt file.


 BEGIN_JUCE_MODULE_DECLARATION

  ID:                 juce_box2d
  vendor:             juce
  version:            6.0.0
  name:               JUCE wrapper for the Box2D physics engine
  description:        The Box2D physics engine and some utility classes.
  website:            http://www.juce.com/juce
  license:            GPL/Commercial

  dependencies:       juce_graphics

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/


#pragma once
#define JUCE_BOX2D_H_INCLUDED

//==============================================================================
#include <juce_graphics/juce_graphics.h>

JUCE_BEGIN_IGNORE_WARNINGS_GCC_LIKE ("-Wconversion",
                                     "-Wshadow-field",
                                     "-Wzero-as-null-pointer-constant",
                                     "-Wsign-conversion")

#include <climits>
#include <cfloat>

#include "box2d/Box2D.h"

JUCE_END_IGNORE_WARNINGS_GCC_LIKE

#ifndef DOXYGEN // for some reason, Doxygen sees this as a re-definition of Box2DRenderer
 #include "utils/juce_Box2DRenderer.h"
#endif // DOXYGEN
