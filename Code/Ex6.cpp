
//mehran ghandhary

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int varoon,digit,num,s=0,n;
	cout<<"Input your number: ";
	cin>>num;
		varoon=0;
		n=num;
		while(n>0){
			digit=n%10;
			n=(int)n/10;
			varoon=(varoon*10)+digit;
			s++;
		}
		cout<<"\nN have "<<s<<" digits";
		cout<<"\nvaroone "<<num<<" = "<<varoon;
		cout<<"\nmajmooe adad va varuneh an = "<<num+varoon;

	getch();
	return 0;
}



