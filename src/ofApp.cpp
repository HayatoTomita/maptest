#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
  int beforeSize = 5;
  int afterSize = 3;

  std::cout << "=====add " << ofToString(beforeSize)
            << " new users=====" << std::endl;
  for (int i = 0; i < beforeSize; i++) {
    // usermap[i] = user();
    std::cout << "set user Id : " << ofToString(i) << std::endl;
    usermap[i].setUserId(i);
    std::cout << "next" << std::endl;
  }

  std::cout << "======check birth time=====" << std::endl;
  for (int i = 0; i < beforeSize; i++) {
    std::cout << "user " << ofToString(i) << " birth in "
              << ofToString(usermap[i].birth) << std::endl;
  }

  std::cout << "=====remove all user and add new " << ofToString(afterSize)
            << " users=====" << std::endl;
  std::map<int, user> tempuser;
  for (int i = 0; i < afterSize; ++i) {
    tempuser[i] = usermap[i];
  }
  usermap = tempuser;

    std::cout << "======check birth time=====" << std::endl;
    for (int i = 0; i < beforeSize; i++) {
        std::cout << "user " << ofToString(i) << " birth in "
        << ofToString(usermap[i].birth) << std::endl;
    }
}

//--------------------------------------------------------------
void ofApp::update() {}

//--------------------------------------------------------------
void ofApp::draw() {}
