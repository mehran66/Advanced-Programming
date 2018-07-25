// class Rational.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include<conio.h>
#include<iostream>
using namespace std;
void introduction();
//************************************************************************
class Rational{
	
private:
	int a;
	int b;
public:
	Rational(int=0,int=0);
	int geta();
	int getb();
	void set(int,int);
	Rational add(Rational);
	Rational multiple(Rational);
	Rational substraction(Rational);
	Rational divide(Rational);
	void print1();
	void print2();
};
Rational::Rational(int,int){
	a=b=0;
}
int Rational::geta(){
return a;

}
int Rational::getb(){
return b;

}
void Rational::set(int m,int n){
	a=m;
	b=n;
}
Rational Rational::add(Rational R1){
	Rational R3;
	R3.a=(a)*(R1.b)+(R1.a)*(b);
	R3.b=(b)*(R1.b);
	return R3;
}
Rational Rational::substraction(Rational R1){
	Rational R3;
	R3.a=(a)*(R1.b)-(R1.a)*(b);
	R3.b=(b)*(R1.b);
	return R3;
}
Rational Rational::multiple(Rational R1){
	Rational R3;
	R3.a=(a)*(R1.a);
	R3.b=(b)*(R1.b);
	return R3;
}
Rational Rational::divide(Rational R1){
	Rational R3;
	R3.a=(a)*(R1.b);
	R3.b=(b)*(R1.a);
	return R3;
}
void Rational::print1(){
	cout<<" ( "<<a<<" / "<<b<<" ) ";

}
void Rational::print2(){
	cout<<" ( "<<a<<" / "<<b<<" ) "<<" = "<<(double)(a)/b;

}
//************************************************************************
int main(){
	introduction();
	Rational r3,r1,r2;
	int x1,x2;
	cout<<"\nInsert numerator and denuminator of fraction (x=x1/x2):";
	cout<<"\nx1 = ";
	cin>>x1;
	cout<<"x2 = ";
	cin>>x2;
	r1.set(x1,x2);

	int y1,y2;
	cout<<"\nInsert numerator and denuminator of fraction (y=y1/y2):";
	cout<<"\ny1 = ";
	cin>>y1;
	cout<<"y2 = ";
	cin>>y2;
	r2.set(y1,y2);
	
	r3=r1.add(r2);
	r1.print1();cout<<" + ";r2.print1();cout<<" = ";r3.print2();
	cout<<endl;
	r3=r1.substraction(r2);
	r1.print1();cout<<" - ";r2.print1();cout<<" = ";r3.print2();
	cout<<endl;
	r3=r1.multiple(r2);
	r1.print1();cout<<" * ";r2.print1();cout<<" = ";r3.print2();
	cout<<endl;
	r3=r1.divide(r2);
	r1.print1();cout<<" / ";r2.print1();cout<<" = ";r3.print2();
	cout<<endl;
	
	getch();
	return 0;
}
//************************************************************************
void introduction()
{
	 cout<<"-----------IN THE NAME OF GOD----------------------------"
     << "\n  |                                       |"                   
     << "\n  |project by :      mehran ghandehary    |"                  
     << "\n  |no : 851921326                         |"                   
     << "\n  |********Surveying Engineering**********|"                
     << "\n  |********Isfahan University*************|" 
	 <<"\n----------------------------------------------------------";
}
//**************************************************************************





