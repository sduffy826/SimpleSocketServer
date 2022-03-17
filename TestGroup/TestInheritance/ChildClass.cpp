//
//  ChildClass.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/13/22.
//

#include "ChildClass.hpp"

TEST::ChildClass::ChildClass() : TEST::BaseClass::BaseClass() {
  somevar = 10;
}

void TEST::ChildClass::nonpurefunc() {
  std::cout << "childclass: nonpurefunc" << std::endl;
  std::cout << "somevar: " << somevar << std::endl;
}

void TEST::ChildClass::purefunc() {
  std::cout << "childclass: purefunc" << std::endl;
  std::cout << "somevar: " << somevar << std::endl;
}
