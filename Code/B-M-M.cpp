// B-M-M.cpp : Defines the entry point for the console application.
//gereftane 2 adad va mohasebeieh b m m 
//tamrine barnameh nevisi
//mehran ghandehary
//87/7/16

#include "stdafx.h"
#include <iostream>
#include<conio.h>
using namespace std;


int main()
{
	int m,n,r;
	char ans='y';
	
	do{
		cout<<"enter m,n:";
		cin>>m>>n;

			while(1){
				r=m%n;
				if(r==0){
					cout<<"\nb-m-m = "<<n;
					break;
				}
				else{
					m=n;
					n=r;
					continue;
				}
			}

		cout<<"\nDo you want to continue?(y,n)";
		cin>>ans;
	}while(ans=='y');

  getch();
   return 0;


}





