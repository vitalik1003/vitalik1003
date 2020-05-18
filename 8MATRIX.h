#ifndef matrix_h__ 
#define matrix_h__ 
#include <iostream> 
#include <iomanip> 
using namespace std;
template<class T>
class Matrix
{
private:
	T **m_iArr;
	int size_row;
	int size_col;
public:
	Matrix();
	~Matrix();
	void init_matrix();
	void res();
};
template <class T>
Matrix<T>::Matrix()
{
	size_col = 0;
	size_row = 0;
	m_iArr = new T *[size_row];
	for (int i = 0; i < size_row; i++)
	{
	m_iArr[i] = new T[size_col];
		for (int j = 0; j < size_col; j++)
		{
			m_iArr[i][j] = 0;
		}
	}
}
template<class T>
Matrix<T>::~Matrix()
{
	for (int j = 0; j < size_row; j++)
	{
		delete m_iArr[j];
	}
	delete[] m_iArr;
}

template<class T>
void Matrix<T>::init_matrix()
{
	if (&m_iArr != 0)
	{
		for (int j = 0; j < size_row; j++)
		{
			delete m_iArr[j];
		}
		delete[] m_iArr;
	}

	cout << "Введіть Кількість Рядків:";
	cin >> size_row;
	cout << "Введіть Кількість Стовпців:";
	cin >> size_col;

	m_iArr = new T *[size_row];

	for (int i = 0; i < size_row; i++)
	{
		m_iArr[i] = new T[size_col];
		for (int j = 0; j < size_col; j++)
		{
			m_iArr[i][j] = 0;

		}
	}

	cout << "Введіть Вашу Матрицю:" << endl;
	for (int i = 0; i < size_row; i++)
		for (int j = 0; j < size_col; j++)
		{
			cout << "a[" << i << "]" << "[" << j << "]" << "=";
			cin >> m_iArr[i][j];
		}

}


template<class T>
void Matrix<T>::res()
{
	int res,count;
	int i = 0, j = 0;
	int k[size_row];
	cout<<"Ваша Матриця:\n";
	for (i = 0; i<size_row; i++)
	{
		k[i]=0;
	for (j = 0; j<size_col; j++)
		{
			cout<<setw(5)<<m_iArr[i][j];
		}
		cout<<endl;
	}

	for (i = 0; i<size_row; i++)
	{
	for (j = 0; j<size_col; j++)
		{
			if (m_iArr[i][j]>0)
				k[i]+=m_iArr[i][j];
		}
	}
	count=k[0];
		for(i=1;i<size_row;i++){
			if(k[i]>count){
				count=k[i];
				res=i+1;
			}
	}
	cout<<"Найбільша Сумма додатніх Елементів є в Рядку №"<<res<<endl;
	cout<<"Примітка: Нумерація Починається з Одиниці\n";
}
#endif 
