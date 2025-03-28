#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	cout << "введите массив: " << endl;
	const int size = 10;
	int arr[size]{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}

}