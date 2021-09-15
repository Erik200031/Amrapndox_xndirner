#include <iostream>
#include <time.h>
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
    
    Line* gic = new Line[size];
    Line* gic1 = new Line[size];

    std::cout << "Line(1) (\n";
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
    std::cout << ")\n";
    std::cout << "Line(2) (\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Point (" << i << ") --> ";
        std::cout << "x = ";
        gic1->arr[i].x = rand() % 10;
        std::cout << gic1->arr[i].x;
        std::cout << " y = ";
        gic1->arr[i].y = i;
        std::cout << gic1->arr[i].y;
        std::cout << std::endl;
    }
    std::cout << ")";
    for (int j = 0; j < size; ++j) {
        if (gic->arr[j].x == gic1->arr[j].x && gic->arr[j].y==gic1->arr[j].y) {
            std::cout << "hatvum en "<<j<<" ketum ";
            break;
        }
        else {
            std::cout << " chen hatvum ";
            break;
        }
    }
    delete []gic;
    delete []gic1;
    
    return 0;
}