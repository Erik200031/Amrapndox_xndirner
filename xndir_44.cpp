#include <iostream>

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    std::cout << "Input number --> _\b";
    std::cin >> n;
    std::cout << fib(n);
    
    return 0;
}
 /*
                               fib(5)
                         /                \
                    fib(4)                fib(3)
                    /    \               /      \
              fib(3)      fib(2)       fib(2)   fib(1)
             /   \          / \           / \
      fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
       / \
  fib(1) fib(0)
  */