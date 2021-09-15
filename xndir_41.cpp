#include <iostream>

int main()
{
    int n;
    unsigned factorial = 1 ;
    std::cout << "Input number --> ";
    std::cin >> n;
    int i = n;
    while (n != 1) {

        factorial *= n;
        n--;
    }
    
    std::cout <<"\nFactorial of " << i << " is " << factorial<< std::endl;
    return 0;
}