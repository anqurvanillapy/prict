#pragma once

namespace prict {

/**
 *  Asynchronous I/O service that wraps several mechanisms.
 */

class io_service {
public:
  io_service() { /* nop */ }
  ~io_service() { /* nop */ }

  // No copy and move.
  io_service(const io_service&) = delete
  io_service& operator=(const io_service&) = delete
  io_service(io_service&&) = delete
  io_service& operator=(io_service&&) = delete
private:
};

} /* namespace prict */
