
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> intVector{ 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J', 'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S', 'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E' };
	std::string text;
	cout << "enter a sentence!:" << endl;
	getline(cin, text);


	for (std::string::size_type i = 0; i < text.size(); i++) {

		char Ntext = text[i];

		if (65 < text[i] && text[i] < 90){ //is a capital letter
			cout << char(intVector[text[i] - 65]);
		}
		else if (97 < text[i] && text[i] < 122) { // is lower case letter
			char Ntext = (text[i] - 97);
			cout << char(intVector[Ntext] + 32);
		}
		else {
			cout << char(text[i]);
		}
		

	}
}