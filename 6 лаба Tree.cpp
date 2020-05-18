#include "pch.h"
#include "Tree.h"
#include <iostream>

Tree::Tree() : Plant() // ����������� �� ������������
{
	height = 0;
	stemRadius = 0;
	age = 0;
}

Tree::Tree(int height, int stemRadius, int age, string Name) : Plant(Name)   // ����������� � 3 �����������
{
	this->height = height;
	this->stemRadius = stemRadius;
	this->age = age;
}

Tree::Tree(Tree & newTree) : Plant(Name) // ����������� ���������
{
	this->age = newTree.age;
	this->height = newTree.height;
	this->lifeCycleAge = newTree.lifeCycleAge;
	this->population = newTree.population;
	this->stemRadius = newTree.stemRadius;
}

Tree::~Tree()
{
	// ���������� �� ������ ����� ��� �� ���� �������� ������� ����� ��� ������� ���������
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
	cout << endl << ">��� �� �������� ������: " << lifeCycleAge - age << endl;
}

void Tree::GetTreeVolume()
{
	cout << endl << ">���i�� ������: " << (double)stemRadius*height*3.14*3.14 << endl;
	cout << endl << "--------------------------" << endl;
}