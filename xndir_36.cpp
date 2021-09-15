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
    std::cin.get();
   Student usanox2;
    std::cout << "anun -->";
    usanox2.anun = usanox.anun;
    std::cout << usanox2.anun;
    std::cout << "\nazganun -->";
    usanox2.azganun = usanox1.azganun;
    std::cout << usanox2.azganun;
    std::cout << "\nararkaner -->";
    std::getline(std::cin, usanox1.ararkaner);
    std::cout << "tariq -->";
    usanox2.tariq=(usanox1.tariq+usanox.tariq)/2;
    std::cout << usanox2.tariq;
    return 0;
}