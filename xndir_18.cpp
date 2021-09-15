#include <iostream>
int sum(int* arr) {
int result;	
	int max, min;
	for (int i = 0; i < 5; ++i) {
		std::cin >> arr[i];
		if (i == 0) {
			max = arr[i];
			min = arr[i];
			continue;
		}
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			max = arr[i];
		}
	}
	result = min + max;
	return result;
}
int main()
{
	int arr[5];
	std::cout<<sum(arr);
	return 0;
}