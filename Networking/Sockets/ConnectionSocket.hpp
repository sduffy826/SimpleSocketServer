//
//  ConnectionSocket.hpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/12/22.
//

#ifndef ConnectionSocket_hpp
#define ConnectionSocket_hpp

#include <stdio.h>
#include "SimpleSocket.hpp"

namespace HDE {
  // Class for connecting to a socket
  class ConnectionSocket: public SimpleSocket {
  public:
    // Constructor
    ConnectionSocket(int domain, int service, int protocol, int port, u_long interface);
    
    // Funtion to connect
    int connect_to_network(int sock, struct sockaddr_in address);
  };
}

#endif /* ConnectionSocket_hpp */
