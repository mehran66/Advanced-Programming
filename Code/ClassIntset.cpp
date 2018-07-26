// Mehran Ghandehari
// ClassIntset

#include "stdafx.h"
#include<conio.h>
#include<iostream>
using namespace std;
void introduction();
//************************************************************************
class Integerset{
public:
	Integerset();
	void add(int);
	void delet(int);
	bool search(int);
	Integerset unions(Integerset);
	Integerset intersect(Integerset);
	Integerset minus(Integerset);
	void print();
private:
	int s[100];
};
Integerset::Integerset(){
	for(int i=0;i<100;i++)
		s[i]=0;
}


void Integerset::add(int a){
	s[a]=1;
}

void Integerset::delet(int a){
	if(search(a)) s[a]=0;
	if(!search(a))
		cout<<"\nThis number dose'nt exist in integerset.";
}

bool Integerset::search(int a){
	if(s[a]==0) return 0;
	else if(s[a]==1) return 1;
}

Integerset Integerset::unions(Integerset m){
	Integerset temp;
	for(int i=0;i<100;i++){
		if(s[i]==1||m.s[i]==1)
			temp.s[i]=1;
	}
	return temp;
}

Integerset Integerset::intersect(Integerset m){
	Integerset temp;
	for(int i=0;i<100;i++){
		if(s[i]==1&&m.s[i]==1)
			temp.s[i]=1;
	}
	return temp;
}

Integerset Integerset::minus(Integerset m){
	Integerset temp;
	for(int i=0;i<100;i++){
		if(s[i]==1&&m.s[i]==0)
			temp.s[i]=1;
	}
	return temp;
}


void Integerset::print(){
	for(int i=0;i<100;i++){
			if(s[i]==1)
				cout<<i<<" ";
			
		}
}


//*************************************************************************
int main(){
	introduction();
	int choice,num,member,temp;
	Integerset s1,s2,s3;
	while(1){
	temp=0;
	cout<<"\nWhat do you want to do?";
	cout<<"\n1)Add a numder.";
	cout<<"\n2)Delete a numder.";
	cout<<"\n3)Search a numder.";
	cout<<"\n4)Union of two integerset.";
	cout<<"\n5)Intersect of two integerset.";
	cout<<"\n6)Minus of two integerset.";
	cout<<"\n7)Print the result.";
	cout<<"\n8)END.";
	cout<<"\nInput your choice:";
	cin>>choice;
	

	if(choice==7){
		cout<<"\nFirst integerset:";
		s1.print();
		cout<<"\nSecond integerset:";
		s2.print();
		temp=1;
	}

	if(choice==1){
		cout<<"\nwhich integerset ?(first-->1 or second-->2)";
		cin>>num;
		cout<<"\nInput your number:";
		cin>>member;
		if(num==1){
			s1.add(member);
		cout<<"\n"<<member<<" add to first integerset.";
		}
		else if(num==2){
			s2.add(member);
		cout<<"\n"<<member<<" add to second integerset.";
		}

		cout<<"\n***********************************************************";
	}


	if(choice==2){
		cout<<"\nwhich integerset ?(first-->1 or second-->2)";
		cin>>num;
		cout<<"\nInput your number:";
		cin>>member;
		if(num==1){
			s1.delet(member);
		    cout<<"\n"<<member<<" delete from first integerset.";
		}
		else if(num==2){
			s2.delet(member);
		    cout<<"\n"<<member<<" delete from second integerset.";
		}
		cout<<"\n***********************************************************";
	}

	if(choice==3){
		cout<<"\nwhich integerset ?(first-->1 or second-->2)";
		cin>>num;
		cout<<"\nInput your number:";
		cin>>member;
		if(num==1){
			if(s1.search(member))
				cout<<"\n"<<member<<" exist in first integerset.";
			 if(!s1.search(member))
				cout<<"\n"<<member<<" dos'nt exist in first integerset.";
		}
		else if(num==2){
			if(s2.search(member))
				cout<<"\n"<<member<<" exist in second integerset.";
			 if(!s2.search(member))
				cout<<"\n"<<member<<" dos'nt exist in second integerset.";
		}
		cout<<"\n***********************************************************";
	}

	if(choice==4||choice==7){
		s3=s1.unions(s2);

			cout<<"\nUNION:";
			s3.print();
		

	}

	if(choice==5||choice==7){
		s3=s1.intersect(s2);
		
			cout<<"\nINTERSECT:";
			s3.print();
		

	}

	if(choice==6||choice==7){
		s3=s1.minus(s2);
		
			cout<<"\MINUS:";
			s3.print();
		

	}

	if(choice==8){
		break;

	}

	}
	


	getch();
	return 0;
}
//************************************************************************
void introduction()
{
	 cout<<"------------------------------------"
     << "\n  |                                       |"                   
     << "\n  |project by :      mehran ghandehary    |"                  
     << "\n  |no : 851921326                         |"                   
     << "\n  |********Surveying Engineering**********|"                
     << "\n  |********Isfahan University*************|" 
	 <<"\n----------------------------------------------------------";
}
//**************************************************************************



