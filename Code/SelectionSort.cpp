// Selection sort
//mehran ghandehary


#include "stdafx.h"
#include<iostream>
#include<conio.h>

using namespace std;

void selectionsort(int a[],int arraysize){
	int h;
	if(arraysize>0){
	for(int i=1;i<arraysize;i++){
		if(a[i]<a[0]){
			h=a[0];
			a[0]=a[i];
			a[i]=h;
		}
	}
	selectionsort(&a[1],arraysize-1);
	}
}


int main()
{
	const int arraysize=10;
	int a[arraysize]={9,8,7,6,5,4,4,3,6,8};
	selectionsort(a,arraysize);
	for(int i=0;i<arraysize;i++)
		cout<<a[i]<<" ";
	
	getch();
	return 0;
}




