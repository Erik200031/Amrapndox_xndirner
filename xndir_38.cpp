#include <iostream>

struct Point
{
    int x;
    int y;
};  
struct Line 
{
Point arr[1];
};

int main() {
    
    int size;
    std::cout << "Input size = _\b";
    std::cin >> size;
    
    Line* gic=new Line[size];
    std::cout << "Line (\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Point (" << i << ") --> ";
        std::cout << "x = ";
        gic->arr[i].x = i;
        std::cout << gic->arr[i].x;
        std::cout << " y = ";
        gic->arr[i].y = -i;
        std::cout << gic->arr[i].y;
        std::cout << std::endl;
    }
    std::cout << ")";
    delete []gic;
    
    return 0;
}