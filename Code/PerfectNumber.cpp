// Merhan Ghandehari
// Test to see if a number is perfect

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a,sum=1;
	char ch='y';
	while(ch='y'){
		sum=1;
		cout<<"Inter numebr :\n";
		cin>>a;
		for(int i=2;i<a;i++){
			if(a%i==0)
				sum+=i;
		}
		if(sum==a)
			cout<<"adad kamel ast.\n";
		else
		cout<<"adad kamel nist.\n";
		cout<<"do yo want to continue(y/n)?\n";
		cin>>ch;
	}
	getch();
	return 0;
}

