#include <iostream>
#include <string>
struct Student
{
    std::string anun;
    std::string azganun;
    int tariq;
    std::string ararkaner;
};

int main() {
    Student usanox;
    std::cout<<"anun -->";
    std::getline(std::cin, usanox.anun);
    std::cout<<"azganun -->";
    std::getline(std::cin, usanox.azganun);
    std::cout<<"ararkaner -->";
    std::getline(std::cin, usanox.ararkaner);
    std::cout<<"tariq -->";
    std::cin >> usanox.tariq;
    return 0;
}