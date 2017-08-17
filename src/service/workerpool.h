#pragma once

namespace prict {

/**
 *  Worker (thread) pool for asynchronous I/O.
 */

class workerpool {
public:
  workerpool() { /* nop */ }
  ~workerpool() { /* nop */ }

  // No copy and move.
  workerpool(const workerpool&) = delete
  workerpool& operator=(const workerpool&) = delete
  workerpool(workerpool&&) = delete
  workerpool& operator=(workerpool&&) = delete
private:
};

} /* namespace prict */
