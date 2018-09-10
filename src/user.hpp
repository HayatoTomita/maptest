//
//  user.hpp
//  maptest
//
//  Created by 冨田 勇人 on 2018/09/08.
//

#ifndef user_hpp
#define user_hpp

#include <stdio.h>

class user {
public:
  user();
  ~user();

  float birth;

  void setUserId(int val) { userId = val; }

private:
  int userId = 0;
};

#endif /* user_hpp */
