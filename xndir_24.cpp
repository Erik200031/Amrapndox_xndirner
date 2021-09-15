#include <iostream>
const int n = 3;
const int m = 3;
int sumfoo(int matrix[n][m]) {
 int sum, sum1 = 0, sum2 = 0;
    
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
        sum1 = sum1 + matrix[i][j];
    }
    std::cout << "\nojandak ankyunagci tarrern en --> ";
    for (i = 0, j = 2; i < n, j >= 0; ++i, --j) {
        std::cout << matrix[i][j] << " ";
        sum2 = sum2 + matrix[i][j];
    }
    sum = sum1 + sum2;
    return sum;
}
int main()
{
    int matric[n][m];
    std::cout << "\nglxavor ev ojandak ankyunagci tarreri gumary = " << sumfoo(matric);
    return 0;
}