#include <iostream>

int main() {
    static int count = 0; // static variable to keep track of count across runs
    for (int i = 0; i <= count; ++i) {
        std::cout << i << " "; // output current number with a space
    std::cout << std::endl; // end the line
    ++count; // increment count for the next run
    }
    if (count > 9) count = 0; // reset count after reaching 9
    return 0; // return success status
}
