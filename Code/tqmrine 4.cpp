// tqmrine 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	float x1,y1,x2,y2,x,y;
	cout<<"input x1,y1: ";
	cin>>x1>>y1;
	cout<<"\ninput x2,y2: ";
	cin>>x2>>y2;
	
	while(1){
		cout<<"\ninput x,y: ";
		cin>>x>>y;
			if(y-y1==((y2-y1)/(x2-x1))*(x-x1))
				cout<<"\nnoghteh roieh khat hast.";
			else 
				cout<<"\nnoghteh roieh khat nist!";
	}
	getch();
	return 0;
}

