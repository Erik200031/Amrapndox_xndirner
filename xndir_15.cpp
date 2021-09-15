#include <iostream>
void foo(int& n) {
    long long a[10], i;
for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i - 1; i >= 0; i--)
    {
        std::cout << a[i];
    }
}
int main()
{
    int num;
    std::cout << "mutqagrel tiv --> ";
    std::cin >> num;
    foo(num);
    return 0;
}