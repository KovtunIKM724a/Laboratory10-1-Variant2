#include <iostream>
#include <string>
using namespace std;


const int MEMBER_NUMBER = 3;

struct Member {
	int number;
	string surname;
	string birthmonth;
};

int main()
{
	Member listofmembers[MEMBER_NUMBER];

	for (int i = 0; i < MEMBER_NUMBER; i++) {
		cout << "Enter the employee's last name: " << endl;
		cin >> listofmembers[i].surname;
		cout << "Enter the serial number of this employee: " << endl;
		cin >> listofmembers[i].number;
		cout << "Enter this employee's month of birth: " << endl;
		cin >> listofmembers[i].birthmonth;
	}

	Member temp;
	for (int i = 0; i < MEMBER_NUMBER - 1; i++)
	{
		for (int j = 0; j < MEMBER_NUMBER - i - 1; j++)
		{
			if (listofmembers[j].number > listofmembers[j + 1].number)
			{
				temp = listofmembers[j];
				listofmembers[j] = listofmembers[j + 1];
				listofmembers[j + 1] = temp;
			}
		}
	}

	cout << "List: " << endl;
	for (int i = 0; i < MEMBER_NUMBER; i++) {
		cout << listofmembers[i].number << ", " << listofmembers[i].surname << ", " << listofmembers[i].birthmonth << endl;
	}

	string month;
	cout << "Enter the month: " << endl;
	cin >> month;

	cout << "Information about employees born this month: " << endl;
	for (int i = 0; i < MEMBER_NUMBER; i++) {
		if (listofmembers[i].birthmonth == month) {
			cout << listofmembers[i].surname << ", " << listofmembers[i].number << ", " << listofmembers[i].birthmonth << endl;
		}
	}
}