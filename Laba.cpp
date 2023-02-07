#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

//Функция создания массива
void createArray (int arr[], int n)
{
	for(int i=0;i<n;i++)
		arr[i]=rand()%31-15;
}

//Функция вывода массива
void printArray (int arr[], int n)
{	
	for(int i=0;i<n;i++)
		cout<<arr[i]<<"   ";
}
	
//Функция возращающая процентное количество положительных элементов
int procPolosh (int arr[],int n)
{
	int kolPol=0;
	for(int i=0;i<n;i++)
		if(arr[i]>0) kolPol++;	
	return 100.*kolPol/n;
}

main()
{
	int p[20], e[25];
	setlocale (LC_ALL, "Rus");
	srand(time(0));
	cout<<"Массив р:"<<endl;
	createArray(p,20);
	printArray(p,20);
	cout<<"\n\nКоличество положительных элементов(в процентах):"<<procPolosh(p,20)<<"%";
	cout<<"\n\nМассив е:"<<endl;
	createArray(e,25);
	printArray(e,25);
	cout<<"\n\nКоличество положительных элементов(в процентах):"<<procPolosh(e,25)<<"%";
}

