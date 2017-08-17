#pragma once

#include "common.h"

namespace prict {

/**
 *  Network service interface.
 */

class inet {
public:
  inet() { /* nop */ }
  ~inet() { /* nop */ }

  // No copy and move.
  inet(const inet&) = delete
  inet& operator=(const inet&) = delete
  inet(inet&&) = delete
  inet& operator=(inet&&) = delete
private:
};

} /* namespace prict */
