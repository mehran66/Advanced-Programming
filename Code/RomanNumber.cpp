// Roman Number
//Mehran Ghandehari

#include "stdafx.h"
#include<iostream>
#include<conio.h>

using namespace std;

void roman(int m,char ch1,char ch2,char ch3);

int main()
{
	int m;
	cout<<"Input a int number between 1 and 3999 :";
    cin>>m;
	char ch1='I',ch2='V',ch3='X';
	roman(m,ch1,ch2,ch3);


	getch();
	return 0;
}


void roman(int m,char ch1,char ch2,char ch3)
{
	int k;
	if(m>=1&&m<=9)
	{
		if(m==1)
		cout<<ch1;
		else if(m==2)
		cout<<ch1<<ch1;
		else if(m==3)
		cout<<ch1<<ch1<<ch1;
		else if(m==4)
		cout<<ch1<<ch2;
		else if(m==5)
		cout<<ch2;
		else if(m==6)
		cout<<ch2<<ch1;
		else if(m==7)
		cout<<ch2<<ch1<<ch1;
		else if(m==8)
		cout<<ch2<<ch1<<ch1<<ch1;
		else if(m==9)
		cout<<ch1<<ch3;
	}
	if(m>=10)
	{
		if(m>=1000){
			 k=m/1000;
		    roman(k,ch1='M',ch2,ch3);
			m=m%1000;
		}
		if(m>=100){
			k=m/100;
			roman(k,ch1='C',ch2='D',ch3='M');
			m=m%100;
		}
		if(m>=10){
			k=m/10;
			roman(k,ch1='X',ch2='L',ch3='C');
			m=m%10;
			roman(m,ch1='I',ch2='V',ch3='X');
		}
	}
	

}
		

