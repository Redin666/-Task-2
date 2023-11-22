#include <iostream>
#include <string>
using namespace std;


void chek(string inputString, int* arr)
{
	for(char e : inputString) {
		if (isalpha(e) && islower(e)) {
			arr[e - 'a']++;
		}
		else if (isalpha(e) && isupper(e)) {
			arr[e - 'A']++;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	
	string inputString;

	int size = 26;
	int number = 97;

	cout << "Ведите любой текст ";
	getline(cin, inputString);

	int arr[26] = {0};

	chek(inputString, arr);

	cout << "В вашемс слове " << inputString << " всего букв" << endl;
	/*вывод всех букв*/
	for (int i = 0; i < size; i++)
	{
		cout << (char)number << " - " << arr[i] << endl;
		number++;
	}

	cout << (char)50 << endl;

	return 0;
}