#include "./Colors.hpp"

Color get_palette_color(PALETTE x) {
  switch (x) {
    case PALETTE::Background:
      return Color(36, 37, 38);

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
    case TW_COLORS::Slate100:  // 200
      return Color(226, 232, 240);
    case TW_COLORS::Slate200:  // 400
      return Color(148, 163, 184);
    case TW_COLORS::Slate300:  // 600
      return Color(71, 85, 105);
    case TW_COLORS::Slate400:  // 800
      return Color(30, 41, 59);
    case TW_COLORS::Slate500:  // 950
      return Color(2, 6, 23);

    case TW_COLORS::Red100:
      return Color(254, 202, 202);
    case TW_COLORS::Red200:
      return Color(248, 113, 113);
    case TW_COLORS::Red300:
      return Color(220, 38, 38);
    case TW_COLORS::Red400:
      return Color(153, 27, 27);
    case TW_COLORS::Red500:
      return Color(69, 10, 10);

    case TW_COLORS::Orange100:
      return Color(254, 215, 170);
    case TW_COLORS::Orange200:
      return Color(251, 146, 60);
    case TW_COLORS::Orange300:
      return Color(234, 88, 12);
    case TW_COLORS::Orange400:
      return Color(154, 52, 18);
    case TW_COLORS::Orange500:
      return Color(67, 20, 7);

    case TW_COLORS::Yellow100:
      return Color(254, 240, 138);
    case TW_COLORS::Yellow200:
      return Color(250, 204, 21);
    case TW_COLORS::Yellow300:
      return Color(202, 138, 4);
    case TW_COLORS::Yellow400:
      return Color(133, 77, 14);
    case TW_COLORS::Yellow500:
      return Color(66, 32, 6);

    case TW_COLORS::Green100:
      return Color(187, 247, 208);
    case TW_COLORS::Green200:
      return Color(74, 222, 128);
    case TW_COLORS::Green300:
      return Color(22, 163, 74);
    case TW_COLORS::Green400:
      return Color(22, 101, 52);
    case TW_COLORS::Green500:
      return Color(5, 46, 22);

    case TW_COLORS::Teal100:
      return Color(153, 246, 228);
    case TW_COLORS::Teal200:
      return Color(45, 212, 191);
    case TW_COLORS::Teal300:
      return Color(13, 148, 136);
    case TW_COLORS::Teal400:
      return Color(17, 94, 89);
    case TW_COLORS::Teal500:
      return Color(4, 47, 46);

    case TW_COLORS::Blue100:
      return Color(191, 219, 254);
    case TW_COLORS::Blue200:
      return Color(96, 165, 250);
    case TW_COLORS::Blue300:
      return Color(37, 99, 235);
    case TW_COLORS::Blue400:
      return Color(30, 64, 175);
    case TW_COLORS::Blue500:
      return Color(23, 37, 84);

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

    case TW_COLORS::Indigo100:
      return Color(199, 210, 254);
    case TW_COLORS::Indigo200:
      return Color(129, 140, 248);
    case TW_COLORS::Indigo300:
      return Color(79, 70, 229);
    case TW_COLORS::Indigo400:
      return Color(55, 48, 163);
    case TW_COLORS::Indigo500:
      return Color(30, 27, 75);

    case TW_COLORS::Pink100:
      return Color(251, 207, 232);
    case TW_COLORS::Pink200:
      return Color(244, 114, 182);
    case TW_COLORS::Pink300:
      return Color(219, 39, 119);
    case TW_COLORS::Pink400:
      return Color(157, 23, 77);
    case TW_COLORS::Pink500:
      return Color(80, 7, 36);

    case TW_COLORS::Rose100:
      return Color(254, 205, 211);
    case TW_COLORS::Rose200:
      return Color(251, 113, 133);
    case TW_COLORS::Rose300:
      return Color(225, 29, 72);
    case TW_COLORS::Rose400:
      return Color(159, 18, 57);
    case TW_COLORS::Rose500:
      return Color(76, 5, 25);

    default:
      return Color::Transparent;
  }
}
