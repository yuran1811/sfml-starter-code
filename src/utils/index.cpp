#include "./index.hpp"

bool is_out_range(float x, float l, float r) { return l > x || x > r; }

bool is_in_range(float x, float l, float r) { return l <= x && x <= r; }

float rand_in_range(int l, int r) { return rand() % (r - l + 1) + l; }