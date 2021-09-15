#include <iostream>
#include <vector>

void delindex(std::vector <int> & vec,int i) {
    vec.erase(vec.begin() + i);
}

int main() {
    std::vector <int> arr{10, 11, 42, 55, 77};
    std::cout << "Input index -->";
    int index ;
    std::cin >> index;
    std::cout << "The result is -->";
    delindex(arr, index);
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i]<<" ";
    }
    return 0;
}