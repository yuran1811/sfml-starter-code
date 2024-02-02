#ifndef COMMON_HPP
#define COMMON_HPP

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "./ScreenSize.hpp"

using namespace sf;
using namespace std;

enum class ASSET_FOLDER { FONTS, ICONS, IMAGES, SOUNDS, TEXTURES, LOGS };

enum class ASSET_TYPE { NO_EXT, TTF, PNG, JPG, WAV, MP3, TXT };

const string APP_TITLE("SFML Starter Demo");

const string ASSETS_PATH("./public");

const string ASSET_FOLDERS[] = {"/fonts/",  "/icons/",    "/images/",
                                "/sounds/", "/textures/", "/logs/"};

const string ASSET_FILE_TYPES[] = {
    "", ".ttf", ".png", ".jpg", ".wav", ".mp3", ".txt",
};

const int NUM_COLOR_LEVELS = 5;
const int NUM_COLORS = NUM_COLOR_LEVELS * 11;

const int NUM_BALLS(NUM_COLORS);

static ScreenSize SCREEN_SIZE(640);

#endif