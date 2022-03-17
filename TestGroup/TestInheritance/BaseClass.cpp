//
//  BaseClass.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/13/22.
//

#include "BaseClass.hpp"


TEST::BaseClass::BaseClass() {
  somevar = 1;
}

void TEST::BaseClass::nonpurefunc() {
  std::cout << std::endl << "baseclass-nonpurefunc()" << std::endl;
  std::cout << "baseclass-nonpurefunc()-somevar: " << somevar << std::endl;
}

void TEST::BaseClass::callme() {
  std::cout << "baseclass-callme(): Before purefunc call" << std::endl;
  std::cout << "baseclass-callme()-somevar: " << somevar << std::endl << std::endl;
  
  purefunc();
  
  std::cout << std::endl << "baseclass-callme(): Before nonpurefunc call" << std::endl << std::endl;
  nonpurefunc();
  
  std::cout << std::endl << "baseclass-callme(): leaving callme" << std::endl << std::endl;
}
