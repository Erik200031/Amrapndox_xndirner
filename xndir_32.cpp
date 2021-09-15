#include <iostream>
#include <string>
char maxs(std::string str)
{
    int count[256] = { 0 }; //ASCII size(256)
    int len = str.size();
    int max = 0;  
    char result=NULL;
    for (int i = 0; i < len; i++) {
        if(str[i]==str[i+1])
        count[str[i]]++;
        
            
            if (max < count[str[i]]) {
                max = count[str[i]];
                result = str[i];
            }
        
    }
    std::cout << max+1;
    return result;
}

int main()
{
    std::string togh;
    std::getline(std::cin, togh);
    std::cout << "\n"  << maxs(togh);
    return 0;
}