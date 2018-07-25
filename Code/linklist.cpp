/	/ binarysearch.cpp : Defines the entry point for the console application.
//mehran ghandehary
//1387/8/

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<time.h>

struct LinkList{
	int a;
	LinkList *next;
};

using namespace std;

LinkList *insert(LinkList *l,int i,int n,int m);

LinkList *sort(LinkList *l,int m);
LinkList *delet(LinkList *l,int n,int m);
void search(LinkList *l,int m,int n);
void print(LinkList *l,int);

int main()
{
	LinkList *l;
	l=new LinkList;
	
	int num;
	cin>>num;
	l->a=num;
	l->next=NULL;
	
	char ch;
	cout<<"\nDo you want to conyinue?(y/n)";
	cin>>ch;
	int p,n=1;
	while(ch=='y'){
		
		n++;
		cout<<"\nInsert your number:";
		cin>>num;
		cout<<"\nDo you want to add a number in top or low?";
		cout<<"\nif top insert 1,else if low insert 2 or else:";
		cin>>p;
		cout<<"\n"<<n;
		l=insert(l,num,p,n);
	cout<<"\nDo you want to conyinue?(y/n)";
	cin>>ch;
	}
int m;
cout<<"\ndelet:Which one:";
cin>>m;



	l=delet(l,n,m);
	n--;


	cout<<"search";
	int mgh;
	cin>>mgh;
	search(l,mgh,n);
	
		
	
	print(l,n);
	l=sort(l,n);
	cout<<endl;
	print(l,n);

	getch();
	return 0;
}




void print(LinkList *l,int n)
{
	cout<<"\n";
	while(l){
		cout<<(l->a)<<" ";
		l=l->next;
	}
}

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

//-----------------------------------------------------------
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

//------------------------------------------------------------
void search(LinkList *l,int m,int n){
	int k=0,s;
	s=l->a;
	for(int i=1;i<n;i++){
		if((s)==m){
			cout<<"\n"<<m<<" exist in "<<i<<"th";
			k=1;
		}
		l=l->next;
		s=l->a;
	}
	if(k==0)
		cout<<"\n"<<m<<" dos'nt exist in linklist.";



}


	
	



