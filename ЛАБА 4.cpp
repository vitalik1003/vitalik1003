#include <iostream>
#include <string>
using namespace std;
class CPlane {
public:
	CPlane() {
		setDefault();
	}
	string name;
	int fuel;
	int passenger_c;
	int passenger;
	void setDefault() {
		name = "Unknown";
		fuel = 0;
		passenger_c = 100;
	}
	void setParameters() {

		cout << "Введiть iм'я лiтака: ";
		cin >> name;

		cout << "Введiть кiлькiсть палива: ";
		cin >> fuel;
	}
	void getParameters() {
		cout << "Iм'я - ";
		cout << name << endl;
		cout << "Кiлькiть палива (L) = " << fuel << endl;
		cout << "Кiлькiсть пасажиромiткостi = " << passenger_c << endl;
	}
	void fly()
	{
		if (passenger > passenger_c) {
			cout << "Лiтак не може летiти, через велику кiлькiсть пасажирiв!" << endl;
		}
		else {
			if (fuel < 50) {
				cout << "Лiтак розбився!";
				passenger = 0;
			}
			else {
				fuel = fuel - 50;
				passenger = 0;
				cout << "Лiтак успiшно приземлився, всi пасажири вийшли";
			}
		}
	}
	void addNewPassenger() {
		int new_passenger;
		cout << "Введiть скiльки пасажирiв ви хочете добавити: ";
		cin >> new_passenger;
		passenger = passenger + new_passenger;
	}
};
int main()
{
	setlocale(LC_CTYPE, "ukr");
	CPlane Myplane;
	cout << "Додати пасажирiв (1)" << endl << "Iнформацiя про лiтак (2)" << endl << "Створити лiтак (3)" << endl << "Якщо ви хочете летiти (4)" << endl << "Завершити (0)" << endl;
	while (1) {
		int men;
		std::cin >> men;
		if (men == 1) {
			Myplane.addNewPassenger();
		}
		if (men == 2) {
			Myplane.getParameters();
		}
		if (men == 3) {
			Myplane.setParameters();
		}
		if (men == 4) {
			Myplane.fly();
		}

		if (men == 0) {
			break;
		}
	}
	system("pause");
	return 0;
}

