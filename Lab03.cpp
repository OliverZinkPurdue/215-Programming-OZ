

#include <iostream>
using namespace std;
void printMenu(int& choice) {
	cout << "Welcome to the calculatron!:" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "\nYour Selection: ";
	cin >> choice;
}
void getChoices(float& A,float& B) {
	cout << "enter the first number:";
	cin >> A;
	cout << "enter the second number:";
	cin >> B; 
	
}
void firstChoice(float A,float B, float C) {
	cout << "The answer is " << C << endl;
}
void secondChoice(float A,float B, float C) {
	cout << "The answer is " << C << endl;
}
void thirdChoice(float A,float B, float C) {
	cout << "The answer is " << C << endl;
}
void fourthChoice(float A, float B, float C) {
	cout << "The answer is " << C << endl;
}
int main() {
	int choice;
	float A;
	float B;
	float C;

	printMenu(choice);
	getChoices(A, B);
	if (choice == 1)
	{
		C = A + B;
		{
			firstChoice(A, B, C);
		}
	}
	if (choice == 2)
	{
			C = A - B;
			{
				secondChoice(A, B, C);
			}
	}
	if (choice == 3)
	{
			C = A * B;
		{
			thirdChoice(A, B, C);
		}
	}
	if (choice == 4)
	{
		C = A / B;
		{
			fourthChoice(A, B, C);
		}
	}
		
		return 0;
		}
	
