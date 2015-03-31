#include<iostream>

using namespace std;


void print2d(int [][2], int);
int main()
{
	int twod[2][2]={{1,2},{3,4}};
	
	print2d(twod, 2);

	return 0;
}
void print2d(int array[][2], int size)
{
	int a;
	for (int i=0; i < size; ++i)
	{
		a = 0;
		for(a ; a<size ; ++a)
			cout<<"\t"<<array[i][a];
		cout<<endl;
	}
	
	
}