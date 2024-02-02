#include "./index.hpp"

bool is_out_range(float x, float l, float r) { return l > x || x > r; }

bool is_in_range(float x, float l, float r) { return l <= x && x <= r; }

float rand_in_range(int l, int r) { return rand() % (r - l + 1) + l; }

void simulateResourceLoading(int64_t duration) {
  this_thread::sleep_for(chrono::seconds(duration));
}

string getResourcePath(ASSET_FOLDER assetType, string resource,
                       ASSET_TYPE fileType = ASSET_TYPE::NO_EXT) {
  const string assetFolder = ASSET_FOLDERS[static_cast<int>(assetType)];
  return ASSETS_PATH + assetFolder + resource +
         ASSET_FILE_TYPES[static_cast<int>(fileType)];
}