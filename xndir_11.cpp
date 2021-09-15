#include <iostream>

void tun(char ch) {
    std::cout << "\t\t\t\t\t\t" << ch << std::endl;
    std::cout << "\t\t\t\t\t       " << ch << " " << ch << std::endl;
    std::cout << "\t\t\t\t\t      " << ch << "   " << ch << std::endl;
    std::cout << "\t\t\t\t\t     " << ch << "     " << ch << std::endl;
    std::cout << "\t\t\t\t\t    " << ch << " " << ch << " " << ch << " " << ch << " " << ch << std::endl;
    std::cout << "\t\t\t\t\t    " << ch << "       " << ch << std::endl;
    std::cout << "\t\t\t\t\t    " << ch << "   " << ch << ch << "  " << ch << std::endl;
    std::cout << "\t\t\t\t\t    " << ch << "   " << ch << ch << "  " << ch << std::endl;
    std::cout << "\t\t\t\t\t    " << ch << " " << ch << " " << ch << ch << "  " << ch << std::endl;
}
int main()
{
    std::cout << "enter a character --> _\b";
    char ch;
    std::cin >> ch;
    tun(ch);

    return 0;
}