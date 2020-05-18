#include "pch.h"
#include "Plant.h"
#include <iostream>

using namespace std;

Plant::Plant() { // Конструктор по замовчуванню
	Name = "undefined";
	population = 0;
	lifeCycleAge = 0;
}

Plant::Plant(string name) { // Конструктор з одним параметром
	this->Name = name;
	population = 1;
	lifeCycleAge = 0;
}

Plant::Plant(Plant &newPlant) { // Конструктор копіюваня
	this->Name = newPlant.Name;
	this->population = newPlant.population;
	this->lifeCycleAge = newPlant.lifeCycleAge;
}

Plant::~Plant() {
	// Деструктор не робить нічого так як немає динамічно виділених обєктів які потрібно видалити
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
		<< ">Назва рослини: " << Name << endl << "--------------------------" << endl << ">Популяцiя рослини: " << population <<
		endl << ">Життєвий цикл рослини: " << lifeCycleAge << endl << "--------------------------" << endl;
}