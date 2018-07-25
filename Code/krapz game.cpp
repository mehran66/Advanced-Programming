// krapz game.cpp : Defines the entry point for the console applicati

//

#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>
#include<time.h>
using namespace std;
void point(int sum){
	int x,y,s=0,d=1;
	while(d==1){
	
	x=rand()%6+1;
	y=rand()%6+1;
	s=x+y;
	cout<<"\nplayer rolled "<<x<<" + "<<y<<" = "<<s;
	if(s==7){
		cout<<"\nplayers losses";
		d=0;
	}
	else if(s==sum){
		cout<<"\nplayers wins";
		d=0;
	}
	}
}

int main()
{
	int a,b,sum;
	srand(time(0));
	a=rand()%6+1;
	b=rand()%6+1;
	if(a+b==11||a+b==7){
		cout<<"\nplayer rolled "<<a<<" + "<<b<<" = "<<a+b;
		cout<<"\nplayers wins";
	}
	else if(a+b==2||a+b==3||a+b==12){
		cout<<"\nplayer rolled "<<a<<" + "<<b<<" = "<<a+b;
		cout<<"\nplayers losses";
	}
	else{
		sum=a+b;
		cout<<"\nplayer rolled "<<a<<" + "<<b<<" = "<<a+b;
		cout<<"\n point is "<<sum;
		point(sum);
	}

	
	
	getch();
	return 0;
}

