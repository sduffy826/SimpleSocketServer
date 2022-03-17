//
//  TestGroupMain.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/13/22.
//

#include "ChildClass.hpp"

#include <iostream>

int main(int argc, const char * argv[]) {
  // insert code here...
  std::cout << "TestGroupMain - main()" << std::endl << std::endl;
  
  TEST::ChildClass *childClass = new TEST::ChildClass();
  childClass->callme();
  
  delete childClass;
  return 0;
}
