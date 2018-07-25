// gharbale eratostan.cpp : Defines the entry point for the console application.
//mehran ghandehary
//1387/8/8
//programing project
#include "stdafx.h"
#include<iostream>
#include<conio.h>

using namespace std;

void eratostan(int n[],int m[],int k);
int main()
{
//prime number that is less or equal than k
int k;
	cout<<"           *********** gharbale eratostan ************\n";
	cout<<"\nInput your number: ";
	cin>>k;
//n=[1 1 1 1 . . . 1]
int *n;
	n=new int[k+1];
//m=[0 1 2 3 . . . k-1 k]
int  *m;
	m=new int[k+1];
	for(int i=0;i<=k;i++)
		n[i]=1;
	for(int i=0;i<=k;i++)
		m[i]=i;
	eratostan(n,m,k);

	getch();
	return 0;
}
void eratostan(int n[],int m[],int k){
//if m[i] was not a prime n[i]=0
	for(int i=2;i<=k;i++){
		for(int j=2;j<=k;j++){
			if(i!=j){
				if(m[j]%i==0)
					n[j]=0;
			}
		}
	}
	for(int i=2;i<=k;i++)
		if(n[i]==1)
			cout<<m[i]<<"  ";
}


