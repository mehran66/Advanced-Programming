// Mehran Ghandehari
// LINKLIST structure

#include "stdafx.h"
#include<conio.h>
#include<iostream>
using namespace std;
//***********************************************************************
struct LinkList{
	int a;
	LinkList *next;
};
//**********************************************************************
void introduction();
LinkList *insert(LinkList *l,int i,int n,int m);
LinkList *replace(LinkList *l,int num,int m,int n);
LinkList *sort(LinkList *l,int m);
LinkList *delet(LinkList *l,int n,int m);
int search(LinkList *l,int m,int n);
void print(LinkList *l,int);

//************************************************************************
int main(){
	introduction();
	int num,choice,n=1,p,m,h,g;
	char ch;
	LinkList *l;
	l=new LinkList;
	cout<<"\nInsert the first number to make the first linklist:";
	cin>>num;
	l->a=num;
	l->next=NULL;
	while(1){
	cout<<"\n*********************************************************************";
	cout<<"\nWhat do you want to do?";
	cout<<"\n1)Add a number to LinkList.";
	cout<<"\n2)delet a number from LinkList.";
	cout<<"\n3)Replace a part in LinkList.";
	cout<<"\n4)Search a number in LinkList.";
	cout<<"\n5)Sort the LinkList(Warning:linklist change(sort).";
	cout<<"\n6)Display LinkList.";
	cout<<"\n7)Exit.";
	cout<<"\nInput yuor choice:";
	cin>>choice;
	cout<<"\n*********************************************************************";
	if(choice==1){
	 ch='y';
	while(ch=='y'){
		n++;
		cout<<"\nInsert your number:";
		cin>>num;
		cout<<"\nLinkList have "<<n<<" part. ";
		cout<<"\nWhich part you want to add your number:";
		cout<<"\n(1->first part,"<<n<<"->last part,or beetween first and last)";
		cin>>p;
		l=insert(l,num,p,n);
	cout<<"\nDo you want to conyinue?(y/n)";
	cin>>ch;
	}
	}
	cout<<"\n*********************************************************************";
	if(choice==2){
		cout<<"\nWhich part do you want to delete:";
		cin>>m;
		if(m>=1&&m<=n){
		l=delet(l,n,m);
		
		n--;
		cout<<"\nPart "<<m<<" Delete from LinkList.";
		}
	}
	cout<<"\n*********************************************************************";
	if(choice==3){
		cout<<"\nWhich part do you want to reaplace:";
		cin>>m;
		cout<<"\nInsert your new number:";
		cin>>num;
		replace(l,num,m,n);
	}
	cout<<"\n*********************************************************************";
	if(choice==4){
	cout<<"\nsearch";
	cout<<"\nInput your number:";
	cin>>g;
	search(l,g,n);
	}
	cout<<"\n*********************************************************************";
	if(choice==5){
		l=sort(l,n);
	}
	cout<<"\n*********************************************************************";
	if(choice==6){
		print(l,n);
	}
	cout<<"\n*********************************************************************";
	if(choice==7){
		break;
	}
	}

	getch();
	return 0;
}
//************************************************************************
void introduction()
{
	 cout<<"--------------------------------------------------"
     << "\n  |                                       |"                   
     << "\n  |project by :      mehran ghandehary    |"                  
     << "\n  |no : 851921326                         |"                   
     << "\n  |********Surveying Engineering**********|"                
     << "\n  |********Isfahan University*************|" 
	 <<"\n----------------------------------------------------------";
}
//**************************************************************************
LinkList *insert(LinkList *l,int i,int m,int n)
{
	LinkList *temp=new LinkList;
	temp->a=i;
	temp->next=NULL;
	LinkList *last;
	LinkList *adrres=l;

	if(m==1){
		temp->next=l;
	return temp;
	}
	 if(m==n){
	
	do{
		last=l;
		
		l=l->next;
	}while(l);
	
	
	last->next=temp;
	return adrres;
	}
	if(m>1&&m<n){
		for(int i=1;i<m-1;i++){
			l=l->next;
		}
		last=l->next;
		l->next=temp;
		temp->next=last;
		return adrres;
	}

}
//***************************************************************************
LinkList *replace(LinkList *l,int num,int m,int n){
		
	LinkList *temp1=new LinkList;
	temp1=l;

	if(m==1){
		l->a=num;;
		return l;
	}
	if(m>1&&m<n){
		for(int i=1;i<=m-1;i++){
			temp1=temp1->next;
		}
		temp1->a=num;
		return l;
	}
	if(m==n){
		for(int i=1;i<=m-1;i++){
			temp1=temp1->next;
	}
		temp1->a=num;
		return l;
	}
	}
//*************************************************************************

LinkList *delet(LinkList *l,int n,int m){

	LinkList *temp1=new LinkList;
	temp1=l;
	LinkList *temp2=new LinkList;
	LinkList *temp3=new LinkList;
	if(m==1){
		l=l->next;
		 return l;
	}
	if(m>1&&m<n){
		for(int i=1;i<=m-2;i++){
			temp1=temp1->next;
		}
		temp2=temp1;
		temp3=temp1->next->next;
		temp2->next=temp3;
		return l;
	}
	if(m==n){
		for(int i=1;i<=m-2;i++){
			temp1=temp1->next;
		}
		temp1->next=NULL;
		return l;
	}
	}
//***************************************************************************
int search(LinkList *l,int m,int n){
	int k=0,s;
	s=l->a;
	for(int i=1;i<n;i++){
		if(s==m){
			cout<<"\n"<<m<<" exist in "<<i<<"th";
			k=1;
		}
		l=l->next;
		s=l->a;
	}
	if(k==1) return 1;
	if(k==0){
		cout<<"\n"<<m<<" dos'nt exist in linklist.";
		return 0;
	}
}
//***************************************************************************
LinkList *sort(LinkList *l,int m){
	LinkList *temp1=new LinkList;
	temp1=l;
	LinkList *temp2=new LinkList;
	temp2=l;
	int *a=new int[m];
	for(int i=0;i<m;i++){
		a[i]=temp1->a;
		temp1=temp1->next;
	}
	
	int h;
	for(int i=0;i<m-1;i++){
		for(int j=i+1;j<m;j++){
			if(a[i]>a[j]){
				h=a[i];
				a[i]=a[j];
				a[j]=h;
			}
		}
	}
	
	for(int i=0;i<m;i++){
		temp2->a=a[i];
		temp2=temp2->next;
	}
	return l;
}
//***************************************************************************
void print(LinkList *l,int n)
{
	cout<<"\n";
	while(l){
		cout<<(l->a)<<" ";
		l=l->next;
	}
}
//**********************************************************************








