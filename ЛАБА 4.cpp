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

		cout << "����i�� i�'� �i����: ";
		cin >> name;

		cout << "����i�� �i���i��� ������: ";
		cin >> fuel;
	}
	void getParameters() {
		cout << "I�'� - ";
		cout << name << endl;
		cout << "�i���i�� ������ (L) = " << fuel << endl;
		cout << "�i���i��� ���������i�����i = " << passenger_c << endl;
	}
	void fly()
	{
		if (passenger > passenger_c) {
			cout << "�i��� �� ���� ���i��, ����� ������ �i���i��� �������i�!" << endl;
		}
		else {
			if (fuel < 50) {
				cout << "�i��� ��������!";
				passenger = 0;
			}
			else {
				fuel = fuel - 50;
				passenger = 0;
				cout << "�i��� ���i��� �����������, ��i �������� ������";
			}
		}
	}
	void addNewPassenger() {
		int new_passenger;
		cout << "����i�� ��i���� �������i� �� ������ ��������: ";
		cin >> new_passenger;
		passenger = passenger + new_passenger;
	}
};
int main()
{
	setlocale(LC_CTYPE, "ukr");
	CPlane Myplane;
	cout << "������ �������i� (1)" << endl << "I�������i� ��� �i��� (2)" << endl << "�������� �i��� (3)" << endl << "���� �� ������ ���i�� (4)" << endl << "��������� (0)" << endl;
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

