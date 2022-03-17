//
//  ListeningSocket.hpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/12/22.
//

#ifndef ListeningSocket_hpp
#define ListeningSocket_hpp

#include <stdio.h>
#include "BindingSocket.hpp"

namespace HDE {
  // Class for binding socket
  class ListeningSocket: public BindingSocket {
  private:
    int backlog;
    int start_listening();
    
  public:
    // Constructor
    ListeningSocket(int domain, int service, int protocol, int port, u_long interface, int backlog);
  };
}

#endif /* ListeningSocket_hpp */
