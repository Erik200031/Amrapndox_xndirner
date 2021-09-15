#include <iostream>

void uppercase(char* strf)
{
    for (; *strf; strf++)
    {
        if ((*strf >= 97) && (*strf <= 122))
            *strf = *strf - 32;
    }
}

int main()
{
   char str[70]  ;
   std::cin.getline(str, 70);
   uppercase(str);
   std::cout << str ;
   return 0;
}