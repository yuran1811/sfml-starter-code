#pragma once

#ifndef COLORS_HPP
#define COLORS_HPP

#include <map>

#include "../App.hpp"

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

Color get_palette_color(PALETTE x) {
  switch (x) {
    case PALETTE::Background:
      return Color(36, 37, 38);  // dim dark

    case PALETTE::Primary:
      return Color(0, 0, 0);

    case PALETTE::Secondary:
      return Color(228, 230, 235);

    default:
      return Color::Transparent;
  }
}

Color get_tw_color(TW_COLORS x) {
  switch (x) {
    case TW_COLORS::Violet100:
      return Color(221, 214, 254);
    case TW_COLORS::Violet200:
      return Color(167, 139, 250);
    case TW_COLORS::Violet300:
      return Color(124, 58, 237);
    case TW_COLORS::Violet400:
      return Color(91, 33, 182);
    case TW_COLORS::Violet500:
      return Color(46, 16, 101);

    default:
      return Color::Transparent;
  }
}

#endif