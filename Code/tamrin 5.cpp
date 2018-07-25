// tamrin 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

long factorial(int n){
	if(n==0) return 1;
	return n*factorial(n-1);
}
int main(){
	const long double PI = 3.14159265358979;
	long double sum;
	int n;
	double x;
	cout<<"Input x :(degree)";
	cin>>x;
	cout<<"\ninput n:";
	cin>>n;
	x=(double)((PI*x)/180);
	sum=x;
	int k=1,p=1;
	for(int i=2;i<=n;i++){
		x*=x*x;
		p+=2;
		k*=-1;
		sum+=((double)x/factorial(p))*k;
		cout<<sum<<endl;
	}
	cout<<sum;


	getch();
	return 0;

	}

