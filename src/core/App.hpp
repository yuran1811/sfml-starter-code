#ifndef APP_HPP
#define APP_HPP

#include "../shared/Common.hpp"
#include "../utils/index.hpp"
#include "../components/index.hpp"
#include "../interface/index.hpp"
#include "./index.hpp"

class App {
 public:
  App();
  ~App();
  void run();

 private:
  RenderWindow window;
  vector<Ball*> balls;

  void loadingScreen();
  void openWindow();

  void moveView(Point position);

  void mouseHandler(Event& event);
  void keyboardHandler(Event& event);
  void windowHandler(Event& event);
  void eventsHandles();

  void update();
  void render();
};

#endif