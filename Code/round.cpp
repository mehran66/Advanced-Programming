// round.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

double round(double,int);
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	double m;
	cin>>m>>n;
	cout<<round(m,n);
	getch();
	return 0;
}
 double round(double x,int n){
	double y, k=1;
	for(int i=1;i<=n;i++){
		k*=10;
	}
	y=(floor(x*k+.5))/k;
	return y;
}

