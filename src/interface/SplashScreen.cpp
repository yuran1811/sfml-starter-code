#include "./SplashScreen.hpp"

void openSplashScreen(int timeToLive, bool withAnimation) {
  const int FRAME_RATE = 30;

  RenderWindow window(VideoMode(640, 360), "Splash Screen", Style::None);
  window.setFramerateLimit(FRAME_RATE);

  Font font;
  if (!font.loadFromFile(
          getResourcePath(ASSET_FOLDER::FONTS, "honk", ASSET_TYPE::TTF))) {
    system("pwd");
    return;
  }

  Text loadingText("Loading...", font, 72);
  loadingText.setPosition(170, 100);
  loadingText.setFillColor(Color::White);
  loadingText.setStyle(Text::Bold);

  if (!withAnimation) {
    window.draw(loadingText);
    window.display();
    simulateResourceLoading(timeToLive);
    window.close();
    return;
  }

  ProgressBar progressBar(Point(170, 200), Size(300, 20), 3, FRAME_RATE);

  while (window.isOpen()) {
    window.clear(get_palette_color(PALETTE::Background));

    progressBar.update();
    RectangleShape* shapes = progressBar.getShapes();
    for (int i = 0; i < 2; i++) window.draw(shapes[i]);

    window.draw(loadingText);

    window.display();

    if (progressBar.isDone()) window.close();
  }
}