#include "pch.h"
#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	cout << endl << "" << endl;
	cout << "       ����� ��������";
	cout << endl << "--------------------------" << endl;
	Tree tree(25, 6, 4, "����"); // ������������ ������������
	tree.SetlifeCycleAge(6); // ������������ lifeCycleAge
	tree.ShowInfo(); // �������� ����������
	tree.FindTimeToDying();
	tree.GetTreeVolume();

	system("pause");
	return 0;


}


