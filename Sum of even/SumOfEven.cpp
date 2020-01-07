#include<iostream>
#include<string>

/*
Write a loop that will read in a list of even numbers (such as 2, 24, 8, 6) 
and compute the total of the numbers on the list. The list is ended with a sentinel value.
Among other things, you must decide what would be a good sentinel value to use.
*/

using namespace std;

int main()
{
	int Number, Sum=0;

	cout << "Enter the list of even number and if it's finished enter an odd number\n";
	cin >> Number;

	while (Number % 2 == 0) {


		Sum = Sum + Number;

		cin >> Number;
	}

	cout << "The sum of the list of even numbers= " << Sum << endl;



}