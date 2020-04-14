#include<iostream>
#include<fstream>
#include<clocale>
#include<iomanip>
#include<string>
#include<math.h>


using namespace std;


int main()
{
	setlocale(LC_CTYPE, "ukr");
	while (true)
	{
		cout << "Write  - press 1" << endl;
		cout << "Show  - press 2" << endl;
		cout << "Exit - press 3" << endl;

		int choice;
		cin >> choice;

		if (choice == 1)
		{
			string name;
			string surname;
			double depmooney;
			cout << "Enter your name: ";
			cin >> name;
			cout << "Enter your surname: ";
			cin >> surname;
			cout << "Enter your deposit: ";
			cin >> depmooney;
			double mon1 = depmooney + depmooney * 0.04;
			double mon3 = depmooney + depmooney * 0.04 * 3;
			double mon6 = depmooney + depmooney * 0.04 * 6;
			double mon12 = depmooney + depmooney * 0.04 * 12;

			cout.width(10);
			cout << "Name and Surname" << "| " << setw(10) << "Deposit" << "| " << setw(10) << "Profit after 1 month" << "| " << setw(10) << "Profit after 3 month" << "| " << setw(10) << "Profit after 6 month" << "| " << setw(10) << "Profit after 12 month" << "| " << ";" << endl;
			cout << setw(5) << name << setw(8) << surname << setw(11) << depmooney << setw(20) << mon1 << setw(20) << mon3 << setw(20) << mon6 << setw(20) << mon12 << setw(10) << ";" << endl;

			ofstream file;
			file.open("File.txt", ios::app);
			if (!file.is_open())
				cout << "Помилка! Файл не знайдений" << endl;
			file << setw(5) << name << setw(8) << surname << setw(11) << depmooney << setw(20) << mon1 << setw(20) << mon3 << setw(20) << mon6 << setw(20) << mon12 << setw(10) << ";" << endl;
			file.close();
		}


		if (choice == 2)
		{


			ifstream file;
			file.open("File.txt");
			if (!file.is_open()) {
				cout << "Cannot open file" << endl;
			}
			cout << "Name and Surname" << "| " << setw(10) << "Deposit" << "| " << setw(10) << "Profit after 1 month" << "| " << setw(10) << "Profit after 3 month" << "| " << setw(10) << "Profit after 6 month" << "| " << setw(10) << "Profit after 12 month" << "| " << endl;

			while (!file.eof()) {

				string buff;
				getline(file, buff);
				cout << buff;
				cout << endl;

			}
		}
		if (choice == 3)
		{
			break;
		}
	}
	return 0;
}
