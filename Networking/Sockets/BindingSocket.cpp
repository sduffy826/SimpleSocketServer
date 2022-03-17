//
//  BindingSocket.cpp
//  WebServerDemo
//
//  Created by Sean Regular on 3/12/22.
//

#include "BindingSocket.hpp"

// Constructor for binding socket
HDE::BindingSocket::BindingSocket(int domain, int service, int protocol, int port, u_long interface) : SimpleSocket(domain, service, protocol, port, interface) {
  int connection_rc = connect_to_network(get_socket_file_descriptor(),get_address());
  test_connection(connection_rc);
}

// Implement virtual function from parent - will bind to network
int HDE::BindingSocket::connect_to_network(int socket_fd, struct sockaddr_in address) {
  return bind(socket_fd, (struct sockaddr *)&address, sizeof(address));
}
