#include <iostream>
using namespace std;

int arr[20]; //array to be searched
int n;		 //number of elements in the array
int i;		 //index of array element

void LinearSearch()
{

	char ch;
	int ctr; //number of comparisons
	int item;

	do
	{
		//accept the number to be searched
		cout << "\nEnter the element you want to search: ";//step 1
		cin >> item;

		ctr = 0;
		i = 0;// step 2
		while (i < n) // step 3
		{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << item " found at position " << (i + 1) << endl; //step 6
				break;
			}
			i++;//Step 4
		}
		if (i == n) //step 5
			cout << "\n" << item << " not found in the array\n";
		cout << "\nNumber of comparisons: " << ctr << endl;

		cout << "\nContinue search(y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y'));
}