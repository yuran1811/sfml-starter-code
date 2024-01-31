#ifndef COMMON_HPP
#define COMMON_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "./ScreenSize.hpp"

using namespace sf;
using namespace std;

const string APP_TITLE("SFML Starter Demo");

const int NUM_COLOR_LEVELS = 5;
const int NUM_COLORS = NUM_COLOR_LEVELS * 11;

const int NUM_BALLS(NUM_COLORS);

const ScreenSize SCREEN_SIZE(640);

#endif