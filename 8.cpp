#include <iostream> 
#include <iomanip> 
#include "matrix.h" 
using namespace std;
int main(void)
{

	Matrix<int> m;
	m.init_matrix();
	m.res();
	
	system("pause");
	return 0;
}