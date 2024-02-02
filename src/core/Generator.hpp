#ifndef GENERATOR_HPP
#define GENERATOR_HPP

#include <math.h>

#include "../shared/Common.hpp"
#include "../utils/index.hpp"
#include "../components/index.hpp"

void generateBalls(vector<Ball*>& balls, int ballSize);
void generateColorPalette(vector<Ball*>& colors, int colorSize);

#endif