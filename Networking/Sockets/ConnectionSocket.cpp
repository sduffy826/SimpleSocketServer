//
//  ConnectionSocket.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/12/22.
//

#include "ConnectionSocket.hpp"

// Constructor  
HDE::ConnectionSocket::ConnectionSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface) {
  int connection_rc = connect_to_network(get_socket_file_descriptor(),get_address());
  test_connection(connection_rc);
}

// Implement virtual function from parent - will connect to network
int HDE::ConnectionSocket::connect_to_network(int sock, struct sockaddr_in address) {
  return connect(sock, (struct sockaddr *)&address, sizeof(address));
}
