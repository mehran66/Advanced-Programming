// class Complex.cpp : Defines the entry point for the console application.
/**
  *A program to illustrate the use of Complex numbers.
 **/


#include "stdafx.h"
#include<conio.h>
#include<iostream>
using namespace std;
void introduction();
//************************************************************************
class Complex{
private:
	double x;
	double y;

public:
	Complex();
	Complex(double,double);
	double getx();
	double gety();
	void set(double,double);
	Complex sum(Complex);
	Complex substraction(Complex);
	Complex multiple(Complex);
	Complex divide(Complex);
	void print();
};
Complex::Complex(){
	x=0;
	y=0;
}
double Complex::getx(){
	return x;
}
double Complex::gety(){
	return y;
}
Complex::Complex(double s,double t){
	set(s,t);
}
void Complex::set(double m,double n){
	x=m;
	y=n;
}
Complex Complex::sum(Complex t){
	Complex temp;
	temp.x=x+t.x;
	temp.y=y+t.y;
	return temp;
	
}
Complex Complex::substraction(Complex t){
	Complex temp;
	temp.x=x-t.x;
	temp.y=y-t.y;
	return temp;
	
}
Complex Complex::multiple(Complex t){
	Complex temp;
	temp.x=(x*t.x)-(y*t.y);
	temp.y=(y*t.x)+(x*t.y);
	return temp;

}
Complex Complex::divide(Complex t){
	Complex temp;
	temp.x=((x*t.x)+(y*t.y))/((t.x*t.x)+(t.y*t.y));
	temp.y=((y*t.x)-(x*t.y))/((t.x*t.x)+(t.y*t.y));
	return temp;

}
void  Complex::print(){
	cout<<"( "<<x<<" , "<<y<<" )";
}

	 
//************************************************************************
int main(){
		introduction();
		Complex Z,m,n;
		double m1,m2;
		cout<<"\n Z1 : ";
		cout<<"\nInsert the real part of z =";
		cin>>m1;
		cout<<" Insert the imaginary part of z =";
		cin>>m2;
		m.set(m1,m2);
		
		double n1,n2;
		cout<<"\n Z2 : ";
		cout<<"\nInsert the real part of z =";
		cin>>n1;
		cout<<" Insert the imaginary part of z =";
		cin>>n2;
		n.set(n1,n2);

		  
		Z=m.sum(n);
		cout<<"\nz1+z2 = ";
		Z.print();
		Z=m.substraction(n);
		cout<<"\nz1-z2 = ";
		Z.print();
		Z=m.multiple(n);
		cout<<"\nz1*z2 = ";
		Z.print();
		Z=m.divide(n);
		cout<<"\nz1/z2 = ";
		Z.print();
		
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



