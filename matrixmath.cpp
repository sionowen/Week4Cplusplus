#include<iostream>
#include<math.h>
using namespace std;

void printarray(int [][3], int);
void matrixadd(int [][3], int [][3]);

int main()
{
	int arr1[3][3]={{1,1,1},{2,2,2},{3,3,3}};
	int arr2[3][3]={{1,1,1},{2,2,2},{3,3,3}};



	return 0;
}

void printarray(int array[][3], int size)
{
	int a;
	for (int i = 0; i < size ; ++i)
		{
			int a = 0;

			for (int a = 0; a< size; ++a)
				cout<<array[i][a];	
			cout<<endl;
		}
}
int[][] matrixadd(int arrone[][3], int arrtwo[][3])
{






}


