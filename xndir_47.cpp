#include <iostream>
#include <string>

std::string rev(std::string str) {
    std::string temp;
    for (int i = str.size(); i >= 0; i--) {
        temp.push_back(str[i]);
    }
    return temp;
}

int main() {
    std::string togh;
    std::cout << "Mutqagrel togh --> ";
    getline(std::cin, togh);
    std::cout << "The result is --> ";
    std::cout<<rev(togh);

    return 0;
}