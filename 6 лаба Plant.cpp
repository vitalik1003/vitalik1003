#include "pch.h"
#include "Plant.h"
#include <iostream>

using namespace std;

Plant::Plant() { // ����������� �� ������������
	Name = "undefined";
	population = 0;
	lifeCycleAge = 0;
}

Plant::Plant(string name) { // ����������� � ����� ����������
	this->Name = name;
	population = 1;
	lifeCycleAge = 0;
}

Plant::Plant(Plant &newPlant) { // ����������� ��������
	this->Name = newPlant.Name;
	this->population = newPlant.population;
	this->lifeCycleAge = newPlant.lifeCycleAge;
}

Plant::~Plant() {
	// ���������� �� ������ ����� ��� �� ���� �������� �������� ����� �� ������� ��������
}

void Plant::SetPopulation(int population) {
	this->population = population;
}

void Plant::SetlifeCycleAge(int lifeCycleAge) {
	this->lifeCycleAge = lifeCycleAge;
}

int Plant::getPopulation()
{
	return this->population;
}

int Plant::getLifeCycleAge()
{
	return this->lifeCycleAge;
}

void Plant::ShowInfo() {
	cout << endl << ""
		<< ">����� �������: " << Name << endl << "--------------------------" << endl << ">�������i� �������: " << population <<
		endl << ">������� ���� �������: " << lifeCycleAge << endl << "--------------------------" << endl;
}