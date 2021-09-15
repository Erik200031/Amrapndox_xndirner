#include <iostream>
void foo(char ch) {
    std::cout << "\t\t\t\t\t\t" << ch << std::endl;
    std::cout << "\t\t\t\t\t       " << ch << " " << ch << std::endl;
    std::cout << "\t\t\t\t\t      " << ch << "   " << ch << std::endl;
    std::cout << "\t\t\t\t\t     " << ch << "     " << ch << std::endl;
    std::cout << "\t\t\t\t\t    " << ch << " " << ch << " " << ch << " " << ch << " " << ch << std::endl;

}

int main()
{
    const char ch = '*';
    foo(ch);
   
    return 0;
}