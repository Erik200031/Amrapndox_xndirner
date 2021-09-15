#include <iostream>
void foo(int num) {
    if (num == -1) {
        return;
    }
    else {
        std::cout << num<<" ";
        foo(num - 1);
    }
}

int main()
{
    std::cout << "Input number --> _\b";
    int tiv;
    std::cin >> tiv;
    std::cout << "The result is --> ";
    foo(tiv);
 
    return 0;
}