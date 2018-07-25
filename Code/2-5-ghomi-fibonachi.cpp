// 2-5-ghomi-fibonachi.cpp : Defines the entry point for the console application.
//friday 87/7/12

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int a,b,c,n;
	//n teded jomalate seri fibonachi.
	cout<<"input n:";
	cin>>n;
	a=1;
	b=1;
	if(n==1)
		cout<<a;
	else if(n==2)
		cout<<a<<" "<<b;
	else {
		cout<<a<<" "<<b<<" ";
	for(int i=3;i<=n;i++){
		c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	}
	getch();
		
	return 0;
}

