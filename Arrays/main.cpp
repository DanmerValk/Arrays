#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	const int n = 5;
	int arr[n];
    int sum = 0, min, max;
    min = arr[0];
    max = arr[0];

	//arr[3] = { 1 };
	//cout << arr[3] << endl;
	cout << "введите № массива: "<< endl;
    
	for (int i = 0; i < n; i++)
			cin >> arr[i];
    cout << "\nвывод на экран: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
		sum += arr[i];
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
    cout << "\nвывод суммы: " << sum;
	cout << "\nвывод наименьшего: " << min;	
	cout << "\nвывод наибольшего: " << max << endl;
	
			
}