// CoordinateSystem
//mehran ghandehary


#include "stdafx.h"
#include <iostream>
#include<conio.h>
using namespace std;


int main()
{
	while(1){
	int x=0,y=0;
	int t=0,s=0,k,n=0;
	int x1,y1;
	cout<<"Insert your cordinates (x,y):";
	cin>>x1>>y1;
	
	do{
		k=t+1;
		for(int i=1;i<=k;i++){
			x+=1;
			n++;
			if(x==x1&&y==y1){
				cout<<"\nthe number of steps = "<<n;
				s=1;
			}
		}
		for(int i=1;i<=k;i++){
			y+=1;
			n++;
			if(x==x1&&y==y1){
				cout<<"\nthe number of steps = "<<n;
				s=1;
			}
		}
		for(int i=1;i<=k+1;i++){
			x-=1;
			n++;
			if(x==x1&&y==y1){
				cout<<"\nthe number of steps = "<<n;
				s=1;
			}
		}
		for(int i=1;i<=k+1;i++){
			y-=1;
			n++;
			if(x==x1&&y==y1){
				cout<<"\nthe number of steps = "<<n;
				s=1;
			}
		}
		t=k+1;
	}while(s!=1);
	cout<<endl;
	}
	

  getch();
   return 0;


}







