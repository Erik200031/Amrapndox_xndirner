#include <iostream>
#include <cmath>
void foo( int & a, int & b, int & c) {
    int x;
    int x1;
    x = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    x1= (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    std::cout << "ax^2 + bx + c = 0\n" << "x1 = " << x << "\nx2 = " << x1;
    
}

int main()
{
    int a1, b1, c1;
    std::cin >> a1 >> b1 >> c1;
    foo(a1, b1, c1);
    return 0;
}