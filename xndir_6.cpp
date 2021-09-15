#include <iostream>

int getsize( char* pt) {
    int count = 0;
    while (*pt != '\0') {
        count++;
        pt++;
    }
    return count;
}
void strreverse(char* p)
{
    char* begin_ptr, * end_ptr, ch;
    begin_ptr = p;                          
    end_ptr = &p[getsize(p) - 1];
    for (int i = 0; i < getsize(p) / 2; i++) {
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;
        begin_ptr++;
        end_ptr--;
    }

}

int main()
{

    char text[50];
    std::cout << "Enter your name --> ";
    std::cin.getline(text, 50);
    std::cout << text << std::endl;

    strreverse(text);
    std::cout << text;

    return 0;
}