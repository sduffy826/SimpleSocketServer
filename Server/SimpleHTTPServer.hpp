//
//  SimpleHTTPServer.hpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/14/22.
//

#ifndef SimpleHTTPServer_hpp
#define SimpleHTTPServer_hpp

#include <stdio.h>
#include <unistd.h>
#include "SimpleServer.hpp"

namespace HDE {
  
  #define BUFFSIZE 30000
  
  class SimpleHTTPServer: public SimpleServer {
  private:
    char buffer[BUFFSIZE] = {0};
    int socketForClient;
    void accepter();
    void handler();
    void responder();
  public:
    SimpleHTTPServer();
  };
}


#endif /* SimpleHTTPServer_hpp */
