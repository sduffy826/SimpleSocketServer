//
//  SimpleServer.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/13/22.
//

#include "SimpleServer.hpp"

// Constructor
HDE::SimpleServer::SimpleServer(int domain, int service, int protocol, int port, u_long interface, int backlog) {
  
  keeprunning = true;
  
  listeningSocket = new ListeningSocket(domain, service, protocol, port, interface, backlog);
}

// Destructor
HDE::SimpleServer::~SimpleServer() {
  delete listeningSocket;
}

// Setter to be able to control keeprunning flag
void HDE::SimpleServer::setKeeprunning(bool keeprunning) {
  this->keeprunning = keeprunning;
}

HDE::ListeningSocket * HDE::SimpleServer::get_socket() {
  return listeningSocket;
};

// Launch server
void HDE::SimpleServer::launch() {
  while(keeprunning) {
    accepter();
    handler();
    responder();
  }
}
