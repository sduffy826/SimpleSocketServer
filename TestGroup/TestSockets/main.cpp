//
//  main.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/13/22.
//

// #include <stdio.h>

#include "../../Networking/Sockets/ListeningSocket.hpp"

int main() {
  std::cout << "Starting..." << std::endl;
  
  std::cout << "Binding Socket..." << std::endl;
  HDE::BindingSocket bs = HDE::BindingSocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY);
  
  std::cout << "Listening Socket..." << std::endl;
  HDE::ListeningSocket ls = HDE::ListeningSocket(AF_INET, SOCK_STREAM, 0, 3002, INADDR_ANY, 10);
  
  std::cout << "Success" << std::endl;
}
