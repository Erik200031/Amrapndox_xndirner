
#include <iostream>
#include <time.h>

int main()
{
    srand(time(0));
    int n, m, i, j;
    std::cout << "mutqagrel matrici toxeri(n) u syuneri(m) qanaky \n";
    std::cout << "n = _\b";
    std::cin >> n;
    std::cout << "m = _\b";
    std::cin>> m;
    if (n <= 0 || m <= 0) {
        std::cout << "sxal mutqagrvac tvyal! \a";
    }
    int** arr = new int* [n];
    for (i = 0; i < n; ++i) {
        arr[i] = new int[m];
    }
    std::cout << "matrix n*m \n";
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            arr[i][j]=rand()%10;
            std::cout << arr[i][j]<<" ";
                if (j == m-1) {
                std::cout << std::endl;
                }    
        }
    }
    std::cout << "array --> ";
    int size = n * m;
    int* arr1 = new int[size];
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            int tmpidx=0;
                 arr1[tmpidx] = arr[i][j];
                 std::cout << arr1[tmpidx]<<" ";
        }
    }
    for (int x = 0; x < n; ++x) {
        delete[]arr[x];    
    }
    delete[]arr;
    delete[]arr1;
    arr = nullptr;
    arr1 = nullptr;
    return 0;
}