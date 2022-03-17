//
//  TestServerMain.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/14/22.
//
#include <iostream>

#include "../../Server/SimpleHTTPServer.hpp"

using namespace HDE;

int main(int argc, const char * argv[]) {
  // insert code here...
  std::cout << "Hello from mainline\n";
  
  SimpleHTTPServer *simpleHTTPServer = new SimpleHTTPServer();
  
  std::cout << "Exiting mainline\n";
  
  delete simpleHTTPServer;
  return 0;
}
