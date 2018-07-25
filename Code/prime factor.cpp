// list the common prime factors
///87/8/24

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<iomanip>
#include<math.h>

using namespace std;

int prime(int a);
void primefactors(int num);
//**************************************************
void main()
{ 
	int num;
	cout<<"input any positive int :";
	cin>>num;
	primefactors(num);
	getch();
}

//****************************************************
int prime(int a)
{
	int s=1;
	for(int i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			s=0;
			break;
		}
	}
	return s;
}

//*****************************************************

void primefactors(int num)
{
	int m=2;
	cout<<num<<" = "<<1;
	do
	{
		if(prime(m))
		{
			if(num%m==0)
			{
				cout<<" * "<<m;
				num/=m;
			}
			else m++;
		}
		else m++;
	}while(num!=1);
}
	






