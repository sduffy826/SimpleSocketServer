//
//  SimpleServer.hpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/13/22.
//

#ifndef SimpleServer_hpp
#define SimpleServer_hpp

#include <stdio.h>
#include "../Networking/Sockets/ListeningSocket.hpp"

namespace HDE {

  class SimpleServer {
  private:
    ListeningSocket *listeningSocket;
    bool keeprunning;
    
    // Define pure virtual functions, which makes this class abstract
    virtual void accepter() = 0;
    virtual void handler() = 0;
    virtual void responder() = 0;
    
  public:
    SimpleServer(int domain, int service, int protocol, int port, u_long interface, int backlog);
    ~SimpleServer();
    
    virtual void launch();
    void setKeeprunning(bool keeprunning);
    ListeningSocket * get_socket();
  };
  
}

#endif /* SimpleServer_hpp */
