#include <iostream>

unsigned long long factorial(int n) {
    while (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n;
    std::cout << "Input number --> ";
    std::cin >> n;
    std::cout <<"\nFactorial of " << n << " is " << factorial(n) << std::endl;
    return 0;
}