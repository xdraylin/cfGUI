#ifndef SCREEN_H
#define SCREEN_H

#include "Widget.h"

namespace Codingfield {
  namespace UI {
    class Screen : public Widget {
    public:
      Screen(Size size, Color color) : Widget(nullptr, Point(0,0), size), color{color} {}
      void Draw() override;
    private:
      Color color;
    };
  }
}
#endif //SCREEN_H