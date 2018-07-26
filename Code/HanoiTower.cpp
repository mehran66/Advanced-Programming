//Mehran Ghandehari
//HanoiTower
#include "stdafx.h"
#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

void f( int n, char a='a',char b='b',char c='c'){
	
	if(n==1)
		cout<<"\nmove "<<n<<" from "<<a<<" to "<< b;
	

	if(n>=2){
		f(n-1,a,c,b);

		
		cout<<"\nmove "<<n<<" from "<<a<<" to "<< b;
	
		f(n-1,c,b,a);
	}
	
	
	
}
int main(){
	 int n;
	cout<<"Enter your number:";
	cin>>n;
	f(n);
	getch();
	return 0;
}

