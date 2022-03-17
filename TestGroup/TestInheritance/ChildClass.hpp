//
//  ChildClass.hpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/13/22.
//

#ifndef ChildClass_hpp
#define ChildClass_hpp

#include <stdio.h>
#include <iostream>
#include "BaseClass.hpp"

namespace TEST {
  class ChildClass: public BaseClass {
  private:
    int somevar;
    void purefunc();
    void nonpurefunc();
  public:
    ChildClass();
  };
}
#endif /* ChildClass_hpp */
