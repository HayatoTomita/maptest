#pragma once

#include "ofMain.h"
#include "user.hpp"

class ofApp : public ofBaseApp {

public:
  void setup();
  void update();
  void draw();

  std::map<int, user> usermap;
};
