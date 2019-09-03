#include "iostream"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int* arr; //выделение памяти под динамический массив
	int size; //размер массива
	int key;//переменная для хранения номера минимального элемента
	int min;//переменная для хранения минимального значения
	cout << "Введите размер массива\t";
	cin >> size;
	if (size <= 0)
	{
		cerr << "Неверный размер. Введите положительное число!/n";
		return 1;
	}
	arr = new int[size]; //объявление массива размером size
	for (int i = 0; i < size; i++)
	{
		cout << "Введите " << i << " элемент массива\t";
		cin >> arr[i];
	}
	for (int i = 0; i < size - 1; i++)
	{
		min = arr[i];
		key = i;
		for (int j = i+1; j < size; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				key = j;
			}
		}
		if (key != i) swap(arr[key], arr[i]);
	}
	cout << "\nОтсортированный массив:\n\n";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}