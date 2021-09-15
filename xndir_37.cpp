#include <iostream>

struct Point
{
    int x;
    int y;
};

int main() {
    Point ket;
    std::cout << "x = _\b";
    std::cin >> ket.x;
    std::cout << "y = _\b";
    std::cin >> ket.y;
    
    return 0;
}