#include <iostream>

using namespace std;

int main()
{
	int size;
	
	cout << "Enter the size of an array: " << endl;
	
	cin >> size;									// enter the size of an array
	
	cout << endl;
	
	int *a = new int[size];

	cout << "Enter " << size << " numbers: " << endl;

	for(int i = 0; i < size; i++)					// fill the array, enter the numbers
		cin >> a[i];
	
	cout << endl;

	cout << "The initial array: " << endl;

	for(int i = 0; i < size; i++)					// show the initial look, appearance of this array
		cout << a[i] << " ";

	cout << endl << endl;

	for(int i = 0; i < (size / 2); i++)				// reverse the array, put the first element into the last cell
	{
		a[i] += a[size - i - 1];					// in a[i] there is a sum of two elements a[i] and a[SIZE - i - 1]
		a[size - i - 1] = a[i] - a[size - i - 1];	// put in a[SIZE - i - 1] initial value of a[i] 
		a[i] -= a[size - i - 1];					// put in a[i] initial value of a[SIZE - i - 1]
	}
	
	cout << "The reversed array: " << endl;
	
	for(int i = 0; i < size; i++)					// show the reversed array
		cout << a[i] << " ";
	
	cout << endl;	
		
	return 0;
}
