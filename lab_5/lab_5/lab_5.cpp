// Створення вказівника, виділення пам'яті для змінної a,
// розіменування і присвоєння змінній a значення, присвоєння 
// b значення а, знищення пам'яті виділеної під покажчик b

#include <iostream>
#include <windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int *a;

	a = new int;

	*a = 25;

	int b = *a;

	delete a;

	cout << b;
}
