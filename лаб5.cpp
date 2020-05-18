#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
class CPlane	 {
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

	// �������������� ���������
	CPlane operator+(const CPlane &secondPlane) { // �������������� ��������� '+'
		//�������������� ��������� '+' ������� �������� ����� , �������� ���� int ���� ����� ��������� �� �����
		// ���� ���� string ����������

		CPlane planeForReturn; // ���������� ����

		planeForReturn.fuel = this->fuel + secondPlane.fuel;
		planeForReturn.name = this->name + ", " + secondPlane.name;
		planeForReturn.passenger = this->passenger + secondPlane.passenger;
		planeForReturn.passenger_c = this->passenger_c + secondPlane.passenger_c;

		return planeForReturn;
	}

	CPlane operator-(const CPlane &secondPlane) { // �������������� ��������� '-'
		//�������������� ��������� '-' ������� �������� ����� , �������� ���� int ���� ����� ���������� �� �����
		// ���� ���� string ��� undefined 

		CPlane planeForReturn; // ���������� ����

		planeForReturn.fuel = this->fuel + secondPlane.fuel;
		planeForReturn.name = "undefined"; // ����������� ���
		planeForReturn.passenger = this->passenger + secondPlane.passenger;
		planeForReturn.passenger_c = this->passenger_c + secondPlane.passenger_c;

		return planeForReturn;
	}

	bool operator>(CPlane secondPlane) { // �������������� ��������� '>' , '�����'

		// �������������� ��������� '>' , ������� �������� ����� - 
		// ���� ���� ���� int ������� �������� ����� �� ���� ���� int 2 �������� �� ��������� true ������ flase

		if (this->fuel > secondPlane.fuel && this->passenger > secondPlane.passenger && this->passenger_c > secondPlane.passenger_c) {
			return true;
		}
		else return false;
	}

	CPlane& operator= (const CPlane &secondPlane) { // �������������� ��������� ������������
		if (&secondPlane == this) { // ���� �������� ��� ��������� ������� ��� ���
			return *this;
		}
		else { // ���� �������� ��� ������� �������� ����������� ��������
			this->fuel = secondPlane.fuel;
			this->name = secondPlane.name;
			this->passenger = this->passenger;
			this->passenger_c = this->passenger_c;

			return *this;
		}
	}

	operator int() // �������������� ��������� '()' , ��������� ���������� �� ���� int
	{
		return fuel;
	}

	operator string() // �������������� ��������� '()' , ��������� ���������� �� ���� string
	{
		return name;
	}

};

ostream& operator <<(ostream& output, const CPlane& obj) // �������������� ��������� '<<' ���������� ������
{
	cout << "I�'� - ";
	cout << obj.name << endl;
	cout << "�i���i�� ������ (L) = " << obj.fuel << endl;
	cout << "�i���i��� ���������i�����i = " << obj.passenger_c << endl;
	return output;
}

istream& operator >> (istream &s, CPlane &obj) // �������������� ��������� '>>' ���������� �����
{
	cout << "Input I�'� - ";
	cin >> obj.name;
	cout << "Input �i���i�� ������ (L) = ";
	cin >> obj.fuel;
	cout << "Input �i���i��� ���������i�����i = ";
	cin >> obj.passenger_c;
	return s;
}

int main()
{
	setlocale(LC_CTYPE, "ukr");
	CPlane Myplane;
	CPlane Myplane1;

	//������������ ������ �������������
	cout << endl << "����������i� �������������� ��������� '>>' : " << endl;
	cin >> Myplane;
	cout << "-------------------------" << endl;

	cout << endl << "����������i� �������������� ��������� '<<' : " << endl;
	cout << Myplane;
	cout << "-------------------------" << endl;

	cout << endl << "����������i� �������������� ��������� '=' : " << endl;
	Myplane1 = Myplane;
	cout << "Myplane1 is the same as MyPlane\n" << Myplane1;
	cout << "-------------------------" << endl;

	cout << endl << "����������i� �������������� ��������� '>' : " << endl;
	cout << (Myplane > Myplane1);
    cout << "" << endl;
	cout << "-------------------------" << endl;

	cout << endl << "����������i� �������������� ��������� '+' i '-' : " << endl;

	Myplane = Myplane + Myplane1;
	cout << Myplane;
	cout << "-------------------------" << endl;

	cout << endl << "����������i� �������������� ��������� '()' : " << endl;
	

	int tempFuel = (int)Myplane;
	cout << tempFuel << endl;
	string tempName = (string)Myplane;
	cout << "-------------------------" << endl;
	cout << "    " <<endl;

	system("pause");
	return 0;
}