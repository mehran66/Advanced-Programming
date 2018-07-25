// 2-1ghomi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	long int studentnumber,n1,n2;
	float average,a1,a2;
	int n;
	cout<<"how many student there are?\n";
	cin>>n;
	cout<<"inter student number 1 :\n";
	cin>>studentnumber;
	cout<<"inter average :\n";
	cin>>average;
	n1=n2=studentnumber;
	a1=a2=average;
	for(int i=2;i<=n;i++){
		cout<<"inter student number "<<i<<" :5\n";
		cin>>studentnumber;
		cout<<"inter average :\n";
		cin>>average;
		if(average>a1){
			a2=a1;
			n2=n1;
			n1=studentnumber;
			a1=average;
		}
	}
	cout<<"The second student is : "<<n2<<" with "<<a2<<" average.";
	getch();


	return 0;
}

