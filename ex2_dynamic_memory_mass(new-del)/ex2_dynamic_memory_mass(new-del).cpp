#include "pch.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void funcShow(int *array, int s)
{
	for (int i = 0; i < s; ++i)
	{
		cout << array[i] << "   ";
	}
	cout << "\n";
}
int main()
{
	setlocale(LC_ALL, "ru");
	int num, size = 0;
	int *arr = NULL;

	/* закомментирован альтернативный вариант с выделением 
	динамической памяти для первого элемента arr[0]

	arr = (int*)malloc(sizeof(int));
	cin >> num;
	if (num > 0)
	{
		arr[0] = num;
	}*/

	cout << "Введите целое число >0 : " << endl;
	cin >> num;
	for (int i = 0; num; ++i)
	{
		if (num > 0)
		{
			arr = (int*)realloc(arr, (i + 1) * sizeof(int));
			arr[i] = num;
			size++;
			funcShow(arr, size);
		}
		else
		{
			cout << "\nПопытка ввести число <=0\n\n";
			break;
		}
		cout << "Введите целое число >0 : " << endl;
		cin >> num;
	}
	funcShow(arr, size);
	free(arr);
	system("pause");
	return 0;
}
