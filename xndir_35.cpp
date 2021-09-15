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
    std::cout << "anun -->";
    std::getline(std::cin, usanox.anun);
    std::cout << "azganun -->";
    std::getline(std::cin, usanox.azganun);
    std::cout << "ararkaner -->";
    std::getline(std::cin, usanox.ararkaner);
    std::cout << "tariq -->";
    std::cin>>usanox.tariq;
    std::cin.get();
    Student usanox1;
    std::cout << "anun -->";
    std::getline(std::cin, usanox1.anun);
    std::cout << "azganun -->";
    std::getline(std::cin, usanox1.azganun);
    std::cout << "ararkaner -->";
    std::getline(std::cin, usanox1.ararkaner);
    std::cout << "tariq -->";
    std::cin >> usanox1.tariq;
    if (usanox.tariq > usanox1.tariq) {
        std::cout << usanox.anun;
    }
    else if (usanox.tariq < usanox1.tariq) {
        std::cout << usanox1.anun;
    }
    else {
        std::cout << "unen nuyn tariqy";
    }
    return 0;
}