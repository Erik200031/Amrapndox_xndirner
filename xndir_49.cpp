#include <iostream>
#include <vector>
#include <algorithm>

void delindex(int& num,int& kk ) {

    std::vector <int> vec (20);
    int i = 0;
    while (num != 0) {
        vec[i] = num % 10;
        num /= 10;
        i++;
    }
    vec.erase(vec.begin()+i,vec.end());
    reverse(vec.begin(), vec.end());
    vec.erase(vec.begin() + kk, vec.end());
    std::cout << "The first " << kk << " digits are --> ";
    for (int q = 0; q < vec.size(); ++q) {
        std::cout<<vec[q];
   }
}

int main() {
    int num, k;
    std::cout << "Input number --> ";
    std::cin >> num;
    std::cout << "Input k --> _\b";
    std::cin >> k;
    delindex(num,k);
   
    return 0;
}