#include <iostream>
void foo(int num) {
    while (num >= 0) {
        std::cout << num << " ";
        num--;
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