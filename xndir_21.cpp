#include <iostream>
void sumarr(int* arr1, int* arr2) {
int i, j;
    std::cout << "enter elements of 1-st array --> ";
    for (i = 0; i < 5; ++i) {
        std::cin >> arr1[i];
    }
    std::cout << "enter elements of 2-nd array --> ";
    for (j = 0; j < 5; ++j) {
        std::cin >> arr2[j];
    }
    std::cout << "the result is --> ";
    for (i = 0; i < 5; i++) {
        std::cout << arr1[i] + arr2[i] << " ";
    }
}
int main()
{
    int arr1[5];
    int arr2[5];
    sumarr(arr1, arr2);
    return 0;
}