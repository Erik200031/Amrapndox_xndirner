#include <iostream>
void foo(int* arr) {
int result;
	
	int max;
	for (int i = 0; i < 5; ++i) {
		std::cin >> arr[i];
		if (i == 0) {
			max = arr[i];
			continue;
		}
		if (max < arr[i]) {
			max = arr[i];
			result = i;
		}
	}
	std::cout << result;
}
int main()
{
	int arr[5];
	std::cout << "mutqagrel zangvaci elementnery -->";
	foo(arr);

	return 0;
}