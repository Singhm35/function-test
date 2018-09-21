#include <iostream>
using namespace std;

int getValue();
int main()
{
	int value;
	int factorial=0;
	value = getValue();// function call
	cout << "the value you entered is" << value << endl;

	//call the function to get factorial
	factorial = calculateFactorial(value);
	cout << "the factorial of" << value << "is" << factorial << endl;
	system("pause");
	return 0;

}
// function defination :serves to get a value from the suer and returns the value 
int getValue()
{
	int userInput;
	cout << "please enter an integer number.";
	cin >> userInput;
	return userInput;

}


int calculateFactorial(int myValue)
{
	int factorial=1;
	int i;

	for (i = 1; i = myValue; i++)
	{
		factorial = factorial * i;
	}

		return factorial;


}