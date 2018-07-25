// tamrin2----1+9+25+.cpp : Defines the entry point for the console application.
//sum of 1+9+25+...+(2n-1)^2
//mehran ghandhary
//87/7/17

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int n;
	long sum=0;
	cout<<"input n:";
	cin>>n;

	for(int i=1;i<=n;i++){
		sum+=(2*i-1)*(2*i-1);
		cout<<(2*i-1)*(2*i-1)<<" + ";
	}

	cout<<" = "<<sum;
	getch();
	return 0;
}

