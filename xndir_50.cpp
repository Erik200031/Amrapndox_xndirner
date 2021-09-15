#include <iostream>
#include <vector>
#include <time.h>

int main() {
    srand(time(0));
    int size;
    std::cout << "Input size --> _\b";
    std::cin >> size;
    std::vector <int> vec(size);
    int sum = 0;
    int mul = 1;
    int mij;
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = rand() % 50;
        std::cout << vec[i]<<' ';
        sum += vec[i];
        mul *= vec[i];
       
    }
        mij = (sum + mul) / 2;
        std::cout << "\nGumar --> " << sum << "\n" << "Artadryal --> " << mul << "\n" << "Mijin tvabanakan --> " << mij;
    return 0;
}