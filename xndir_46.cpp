#include <iostream>
#include <time.h>
#include <vector>

void print(std::vector<int>vec,int i = 0) {
    
    if( i < vec.size() ){
        vec[i] = rand() % 50;
        std::cout << vec[i]<<" ";
        i++;
        print(vec,i);
    }   
}

int main() {
    int size;
    srand(time(0));
    std::cout << "Input size --> ";
    std::cin >> size;
    std::vector<int>vect(size);
    std::cout << "The result is -->";
    print(vect);

    return 0;
}