// CPP Program to demonstrate errors in double sqrt()
#include <cmath>
#include <iostream>
using namespace std;

// Driver Code
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
	double answer;

	// no value is passed as parameter
	answer = sqrt(a);
	cout << "Square root of " << a << " is " << answer
		<< endl;

	return 0;
}
