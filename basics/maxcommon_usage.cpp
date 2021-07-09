#include "maxcommon.hpp"
#include <iostream>

int main() {
    std::cout << "max(1, 2.1): " << ::max(1, 2.1) << '\n'; // 2.1
    std::cout << "max(1.5, 99): " << ::max(1.5, 99) << '\n'; // 99
}