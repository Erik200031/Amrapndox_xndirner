#include <iostream>
void foo(int* arr) {
int result=0;
		int min;
	for (int i = 0; i < 5; ++i) {
		std::cin >> arr[i];
		if (i == 0) {
			min = arr[i];
			continue;
		}
		if (min > arr[i]) {
			min = arr[i];
			result = i;
		}
	}
	std::cout << result;
}

int main()
{
	int arr[5];
	foo(arr);
	return 0;
}