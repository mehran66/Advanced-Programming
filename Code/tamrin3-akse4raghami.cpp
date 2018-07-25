// tamrin3-akse4raghami.cpp : Defines the entry point for the console application.
//sum of 1+9+25+...+(2n-1)^2
//mehran ghandhary
//87/7/17

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int i,sum,digit,num;
	for(int i=1000;i<=9999;i++){
		sum=0;
		num=i;
		while(num>0){
			digit=num%10;
			num=(int)num/10;
			sum=(sum*10)+digit;

		}
		if(sum%i==0)
			cout<<i<<endl;
	}

	getch();
	return 0;
}

