//
//  user.cpp
//  maptest
//
//  Created by 冨田 勇人 on 2018/09/08.
//

#include "user.hpp"
#include <iostream>
#include <ofUtils.h>

user::user() {
  std::cout << "init user class" << std::endl;
  birth = ofGetElapsedTimef();
}

user::~user() {
    std::cout << "destract user id" << ofToString(userId) << std::endl;
    
}
