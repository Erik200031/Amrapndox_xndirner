#include <iostream>

long sum(int& refx, int& refy) {
	return refx + refy;
}
long sub(int& refx, int& refy) {
	return refx - refy;
}
long mul(int& refx, int& refy) {
	return refx * refy;
}
float dv(float x, float y) {
	return x / y;
}
int dvtok(int& refx, int& refy) {
	return refx % refy;
}

int main()
{
	std::string com{ "type another action --> " };
	std::cout << "Enter action --> ";
	int a, b;
	char gorcch;
	for (;;) {
		std::cin >> a >> b >> gorcch;
		

		if (gorcch != '+' && gorcch != '-' && gorcch != '/' && gorcch != '*' && gorcch != '%') {
			std::cout << "The symbol does not represent an action! \a\tBye\n";
			break;
		}

		if (gorcch == '+') {
			std::cout << a << "+" << b << "=" << sum(a, b) << std::endl;
			std::cout << com;
		}
		else if (gorcch == '-') {
			std::cout << a << "-" << b << "=" << sub(a, b) << std::endl;
			std::cout << com;
		}
		else if (gorcch == '*') {
			std::cout << a << "*" << b << "=" << mul(a, b) << std::endl;
			std::cout << com;
		}
		else if (gorcch == '/') {
			std::cout << a << "/" << b << "=" << dv(a, b) << std::endl;
			std::cout << com;
		}
		else if (gorcch == '%') {
			std::cout << a << "%" << b << "=" << dvtok(a, b) << std::endl;
			std::cout << com;
		}

	}
	return 0;
}