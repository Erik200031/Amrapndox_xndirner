#include <iostream>
const int m = 3;
const int n = 3;
void foo(int matrix[n][m]) {
    
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            std::cin >> matrix[i][j];

            std::cout << matrix[i][j] << " ";
            if (j == 2) {
                std::cout << std::endl;

            }
        }
    }
    std::cout << "glxavor ankyunagci tarrern en --> ";
    for (i = 0, j = 0; i < n, j < m; ++i, ++j) {
        std::cout << matrix[i][j] << " ";
    }
}
int main()
{
    int matrix[n][m];
    foo(matrix);
    return 0;
}