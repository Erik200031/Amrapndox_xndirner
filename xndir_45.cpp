#include <iostream>

int fib(int num) {
    int x = 0, y = 1, z = 0;
    if (num <= 1) {
        return num;
    }
    else if (num > 1)
    {
        for (int i = 1; i < num; i++) 
        {
            z = x + y;
            x = y;
            y = z;
        }
    return z;
    }  
}
int main() {
    int num;
    std::cout << "Input number --> _\b";
    std::cin >> num;
    std::cout <<fib(num);
    
    return 0;
}