#include "tcp_interface.h"
#include "tls.h"

#include <thread>

constexpr const int SERVER_PORT = 8080;
constexpr const bool active = true;

constexpr const TlsVersion VERSION = kTLS1_3;
constexpr const TlsCiphersuite CIPHERSUITE = kAES256_GCM_SHA384;
constexpr const bool is_server = true;

int main(void) {
  TCP_Interface server(SERVER_PORT, active);
  TLS tls_processor(VERSION, CIPHERSUITE, is_server);

  auto io_thread = std::thread(&TCP_Interface::run, &server);
  auto tls_thread = std::thread(&TLS::run, &tls_processor);

  io_thread.join();
  tls_thread.join();

  return -1;
}
