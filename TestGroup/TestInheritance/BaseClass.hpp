//
//  BaseClass.hpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/13/22.
//

#ifndef BaseClass_hpp
#define BaseClass_hpp

#include <stdio.h>
#include <iostream>

namespace TEST {
  class BaseClass {
  private:
    int somevar;
    virtual void purefunc() = 0;
    virtual void nonpurefunc();
  public:
    BaseClass();
    void callme();
  };
}
#endif /* BaseClass_hpp */
