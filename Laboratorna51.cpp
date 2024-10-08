#include <iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
#include "Windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	vector<int>arr;

	for (int i = 0; i < 10; i++) {
		int randomNum = rand() % 21 - 10;
		arr.push_back(randomNum);
	}

	cout << "Початковий масив:\n"; 
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	vector<int>result; // Вектор для зберігання кубів чисел

	// Підносимо до кубу всі елементи масиву
	for (int i = 0; i < arr.size(); i++) {
		result.push_back(arr[i] * arr[i] * arr[i]);

	}

	cout << "\n\nЧисла піднесені до кубу:\n";
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;
	return 0;
}

