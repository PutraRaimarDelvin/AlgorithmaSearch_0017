#include <iostream>
using namespace std;

int arr[20]; //array to be searched
int n;		 //number of elements in the array
int i;		 //index of array element

void display()
{
	cout << " array element are: ";
	for (1 = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

}


int main()
{
	input();
	LinearSearch();
	display();
}





