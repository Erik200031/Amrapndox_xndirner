
#include <iostream>
#include <time.h>

int main()
{
    srand(time(0));
    int size;
    std::cout << "mutqagrel zangvaci chapy --> ";
    std::cin >> size;
    int count = 0;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
        if (arr[i] % 2 != 0) {
            count++;
        }
        std::cout << arr[i]<<" ";
    }
    std::cout << "\nkent tveri qanaky --> " << count;
    delete[]arr;
    arr = nullptr;
    return 0;
}