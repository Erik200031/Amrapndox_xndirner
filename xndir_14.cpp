#include <iostream>
int main() {
    long tiv;
    int i;
   
    std::cout << "mutqagrel tiv --> ";
    std::cin >> tiv;
    
        while (tiv > 0) {
            i = tiv % 16;
            if (i > 9 && i < 16) {
                switch (i) {
                case 10: std::cout << "A"; break;
                case 11: std::cout << "B"; break;
                case 12: std::cout << "C"; break;
                case 13: std::cout << "D"; break;
                case 14: std::cout << "E"; break;
                case 15: std::cout << "F"; break;
                }
            }
            else {
                std::cout << i;
            }
            tiv = tiv / 16;
        }
    return 0;
}