// Mehran Ghandehari
// Class Rectangle


#include "stdafx.h"
#include<conio.h>
#include<iostream>
using namespace std;
void introduction();
//************************************************************************
class Rectangle{
private:
	int x;
	int y;
public:
	Rectangle();
	Rectangle(int,int);
	int getx();
	int gety();
	void set(int,int);
	long area();
	long perimeter();
	void display();
	
};
Rectangle::Rectangle(){
	x=y=0;
}
Rectangle::Rectangle(int m,int n){
	set(m,n);
}
int Rectangle::getx(){
return x;	
}
int Rectangle::gety(){
return y;	
}
void Rectangle::set(int m,int n){
	x=m;
	y=n;
}
long Rectangle::area(){
	
	return x*y;
}
long Rectangle::perimeter(){
	return (x+y)*2;
}
void Rectangle::display(){
	cout<<"Length = "<<x;
	cout<<"\nWidth = "<<y;
	cout<<"\narea = "<<area();
	cout<<"\nperimeter = "<<perimeter();
	cout<<endl;
	if(x>=1&&y>=1){
	for(int i=1;i<=x;i++)
		cout<<"+ ";
	cout<<endl;
	for(int j=2;j<y;j++){
		cout<<"+ ";
		for(int k=2;k<x;k++)
			cout<<"  ";
		if(x>1)
		cout<<"+ ";
		cout<<endl;
	}

	if(x>1&&y>1)
	for(int i=1;i<=x;i++)
		cout<<"+ ";
	if(x==1)
		cout<<"+ ";
	}
}
//************************************************************************
int main(){
	introduction();
	int m, n;
	cout<<"\nInput length and width of rectangle:(x,y)";
	cin>>m>>n;
	Rectangle r;
	r.set(m,n);
	r.display();

	getch();
	return 0;
}
//************************************************************************
void introduction()
{
	 cout<<"-----------------------------------"
     << "\n  |                                       |"                   
     << "\n  |project by :      mehran ghandehary    |"                  
     << "\n  |no : 851921326                         |"                   
     << "\n  |********Surveying Engineering**********|"                
     << "\n  |********Isfahan University*************|" 
	 <<"\n----------------------------------------------------------";
}
//**************************************************************************



