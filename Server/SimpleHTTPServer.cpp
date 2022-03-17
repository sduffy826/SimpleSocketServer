//
//  SimpleHTTPServer.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/14/22.
//

#include "SimpleHTTPServer.hpp"

// Constructor, call constructor of simple server and pass values
HDE::SimpleHTTPServer::SimpleHTTPServer() : SimpleServer(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10) {
  launch();  
}

// Accept connection from client and read request
void HDE::SimpleHTTPServer::accepter() {
  
  // Define some local vars for the accept call
  struct sockaddr_in address = get_socket()->get_address();
  int addressLen = sizeof(address);
  
  socketForClient = accept(get_socket()->get_socket_file_descriptor(),(struct sockaddr *)&address,(socklen_t *)&addressLen);

  // Make sure got a valid connection
  get_socket()->test_connection(socketForClient);
  
  // Read from the socket
  read(socketForClient, buffer, BUFFSIZE);
}

// Handle the request
void HDE::SimpleHTTPServer::handler() {
  std::cout << buffer << std::endl;
}

// Generate response
void HDE::SimpleHTTPServer::responder() {
  char *rtnString = "Hello from the server";
  write(socketForClient,rtnString,strlen(rtnString));
  close(socketForClient);
}
