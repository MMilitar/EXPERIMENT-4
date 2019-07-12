#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int size, arr[100], i, j, t;
	cout << "SELECTION SORTING\n\n";
	cout << "ENTER ARRAY SIZE: \n";
	cin >> size;
	cout << "ENTER THE " << size << " ELEMENTS: \n";
	for(i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nYOUR DATA: ";
	for(i = 0; i < size; i++)
	{
			cout << arr[i] << " ";
	}
	cout << "\n\nAFTER USING SELECTION SORT...\n\n";

	for(i = 0; i < size; i++)
	{
		for(j = i; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}	
		}	
	}
	
	cout << "SORTED DATA: ";
	for(i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	getch();
	return 0;
}
