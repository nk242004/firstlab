#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int min;
    
	cin >> a >> b >> c;		// Enter the numbers 

	if(a < b && a < c)		// check if the first number is the smallest one
		min = a;
	else if(b < a && b < c)	// if not check if the b is
		min = b;
	else 					// otherwise it's c
		min = c;	      
	
	cout << "The minimal number is: " << min << endl;		// Show the results

	return 0;
}
