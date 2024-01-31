#ifndef COLORS_HPP
#define COLORS_HPP

#include "./Common.hpp"

enum class PALETTE {
  Primary,
  Secondary,
  Background,
};

enum class TW_COLORS {
  Slate100,
  Slate200,
  Slate300,
  Slate400,
  Slate500,

  Red100,
  Red200,
  Red300,
  Red400,
  Red500,

  Orange100,
  Orange200,
  Orange300,
  Orange400,
  Orange500,

  Yellow100,
  Yellow200,
  Yellow300,
  Yellow400,
  Yellow500,

  Green100,
  Green200,
  Green300,
  Green400,
  Green500,

  Teal100,
  Teal200,
  Teal300,
  Teal400,
  Teal500,

  Blue100,
  Blue200,
  Blue300,
  Blue400,
  Blue500,

  Violet100,
  Violet200,
  Violet300,
  Violet400,
  Violet500,

  Indigo100,
  Indigo200,
  Indigo300,
  Indigo400,
  Indigo500,

  Pink100,
  Pink200,
  Pink300,
  Pink400,
  Pink500,

  Rose100,
  Rose200,
  Rose300,
  Rose400,
  Rose500,
};

Color get_palette_color(PALETTE x);

Color get_tw_color(TW_COLORS x);

#endif