#include<iostream>
void minmax(int& tiv) {
  int  i, min = 9, max = 0;
  while (tiv > 0) {
        i = tiv % 10;
        if (min > i) {
            min = i;
        }
        if (max < i) {
            max = i;
        }
        tiv = tiv / 10;
    }
    std::cout << "max --> " << max;
    std::cout << "\nmin --> " << min;
}
int main() {
    int num;
    std::cout << "mutqagrel tiv --> ";
    std::cin >> num;
    minmax(num);
  
    return 0;
}