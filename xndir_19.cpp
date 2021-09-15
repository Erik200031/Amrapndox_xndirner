#include <iostream>
void rev(int* arr) {
int i;
	std::cout << "mutqagrel zangvaci elementnery -->";
	for (i = 0; i < 5; ++i) {
		std::cin >> arr[i];
	}
	std::cout << "reverse result is --> ";
	for (i = 4; i >= 0; --i) {
		std::cout << arr[i] << " ";
	}
}
int main()
{
	int arr[5];
	rev(arr);
	return 0;
}