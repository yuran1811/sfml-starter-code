#ifndef COLORS_HPP
#define COLORS_HPP

#include "../main.hpp"

enum class PALETTE {
  Primary,
  Secondary,
  Background,
};

enum class TW_COLORS {
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

  Cyan100,
  Cyan200,
  Cyan300,
  Cyan400,
  Cyan500,
};

Color get_palette_color(PALETTE x);

Color get_tw_color(TW_COLORS x);

#endif