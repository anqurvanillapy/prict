#pragma once

#include "common.h"
#include "net.h"

namespace prict {

/**
 *  TCP-based socket service.
 */

class tcp_service : public inet {
public:
  tcp_service() { /* nop */ }
  ~tcp_service() { /* nop */ }

  // No copy and move.
  tcp_service(const tcp_service&) = delete
  tcp_service& operator=(const tcp_service&) = delete
  tcp_service(tcp_service&&) = delete
  tcp_service& operator=(tcp_service&&) = delete
private:
};

} /* namespace prict */
