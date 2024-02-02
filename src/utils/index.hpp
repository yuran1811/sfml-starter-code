#ifndef UTILS_INDEX_H
#define UTILS_INDEX_H

#include <chrono>
#include <ctime>
#include <thread>

#include "../shared/Common.hpp"

bool is_out_range(float x, float l, float r);
bool is_in_range(float x, float l, float r);

float rand_in_range(int l, int r);

void simulateResourceLoading(int64_t duration);

string getResourcePath(ASSET_FOLDER assetType, string resource,
                       ASSET_TYPE fileType);

#endif