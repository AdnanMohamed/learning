// This change is from another-branch
// before stash
#include<iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	cout<<"Before Stash" << endl;
	int Number, Sum=0;

	cout << "Enter the list of even number and if it's finished enter an odd number\n";
	cin >> Number;

	while (Number % 2 == 0) {


		Sum = Sum + Number;

		cin >> Number;
	}

	cout << "The sum of the list of even numbers= " << Sum << endl;
	cout << "This change is from master branch" <<endl;
	cout << "This change is after the first draft demo" <<endl;

}