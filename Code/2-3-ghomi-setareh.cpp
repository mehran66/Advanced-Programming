// 2-3-ghomi-setareh.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main()

{
	char ch='*';
	for(int i=1;i<=6;i++){
		for(int j=1;j<=i;j++){
			cout<<ch<<" ";
		}
		cout<<"\n";
	}


   getch();
   return 0;


}
