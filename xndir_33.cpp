#include <iostream>
#include <cmath>
bool parzfoo(long tiv) {
    int i;
    bool parz = true;
    if (tiv == 0 || tiv == 1) {
        parz = false;
    }
    else {
        for (i = 2; i <= sqrt(tiv); ++i) {
            if (tiv % i == 0) {
                parz = false;
                break;
            }
        }
    }
    return parz;
}

int main() {
    int  n;
    std::cout << "enter a number --> ";
    std::cin >> n;
    if (parzfoo(n) == 1) {
        std::cout << "TRUE";
    }
    else {
        std::cout << "FALSE";
    }
    return 0;
}