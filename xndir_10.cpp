#include <iostream>
void convertkm(double& tiv) {
std::cout << tiv / 1000 << " km";
}
int main()
{
    std::cout << "mutqagrel heravorutyuny metrov --> ";
    double i;
    std::cin >> i;
    convertkm(i);
    
    return 0;
}