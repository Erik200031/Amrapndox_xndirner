#include <iostream>
void foo(char* name) {
for (int i = 0; name[i] != '\0'; i++) {
			if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'y' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' || name[i] == 'Y') {
				name[i] = 15;
			}
		}
	std::cout << name;
}

int main() {
	char name[25];
	std::cout << "Enter your name --> " << std::endl;
	std::cin >> name;
	foo(name);
	return 0;
}