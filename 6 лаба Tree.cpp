#include "pch.h"
#include "Tree.h"
#include <iostream>

Tree::Tree() : Plant() // Конструктор по замовчуванню
{
	height = 0;
	stemRadius = 0;
	age = 0;
}

Tree::Tree(int height, int stemRadius, int age, string Name) : Plant(Name)   // Конструктор з 3 параметрами
{
	this->height = height;
	this->stemRadius = stemRadius;
	this->age = age;
}

Tree::Tree(Tree & newTree) : Plant(Name) // Конструктор копіювання
{
	this->age = newTree.age;
	this->height = newTree.height;
	this->lifeCycleAge = newTree.lifeCycleAge;
	this->population = newTree.population;
	this->stemRadius = newTree.stemRadius;
}

Tree::~Tree()
{
	// деструктор не робить нічого так як немає динамічно виділеної памяті яку потрібно вивільняти
}

void Tree::setHeight(int height)
{
	this->height = height;
}

void Tree::setStemRadius(int stemRadius)
{
	this->stemRadius = stemRadius;
}

void Tree::setAge(int age)
{
	this->age = age;
}

void Tree::FindTimeToDying()
{
	cout << endl << ">Час до вмирання дерева: " << lifeCycleAge - age << endl;
}

void Tree::GetTreeVolume()
{
	cout << endl << ">Радiус дерева: " << (double)stemRadius*height*3.14*3.14 << endl;
	cout << endl << "--------------------------" << endl;
}