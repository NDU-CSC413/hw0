#define CATCH_CONFIG_MAIN 
#define CATCH_CONFIG_NOSTDOUT
#include "catch.hpp"

namespace Catch {
    std::ostream& cout() {
        return std::cerr;
    }
    std::ostream& clog() {
        return std::cerr;
    }
    std::ostream& cerr() {
        return std::cerr;
    }
}
