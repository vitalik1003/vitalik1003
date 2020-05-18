#include "pch.h"
#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	cout << endl << "" << endl;
	cout << "       Показ програми";
	cout << endl << "--------------------------" << endl;
	Tree tree(25, 6, 4, "Липа"); // Використання конструктора
	tree.SetlifeCycleAge(6); // Встановлення lifeCycleAge
	tree.ShowInfo(); // Показати інформацію
	tree.FindTimeToDying();
	tree.GetTreeVolume();

	system("pause");
	return 0;


}


