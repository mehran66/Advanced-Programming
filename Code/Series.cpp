// Mehran Ghandehari
//Calculate 1+(1/2!)+(1/3!)+...+(1/n!)basd on the input n (N is the number of elements in the series)

#include "stdafx.h"
#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	int n;
	cout<<"Input n:";
	cin>>n;
	double sum=1,k;
	for(int i=2;i<=n;i++){
		k=i;
		for(int j=i-1;j>1;j--)
			k*=j;
	    sum+=(1/k);
		cout<<sum<<endl;
	}
	cout<<"sumation of seri ="<<sum;
	getch();
	return 0;
}

