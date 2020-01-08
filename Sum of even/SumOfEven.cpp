// This change is from another-branch

#include<iostream>

using std::cout; using std::cin; using std::endl;

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