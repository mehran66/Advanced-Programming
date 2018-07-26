// MatrixMultiplication
//mehran ghandehary

***************************************************************************

#include "stdafx.h"
#include<conio.h>
#include<iostream>

using namespace std;




int main()
{
	int **mat1;
	int **mat2;
	cout<<"input the dimention of matrix1 (m,n)and matrix2 is(n,p):";
	cout<<"\ninput m,n,p:";
	int m,n,p;
	cin>>m>>n>>p;
	
	mat1=new int *[m];
	mat2=new int *[n];
	for(int i=0;i<m;i++)
		mat1[i]=new int[n];
	for(int i=0;i<n;i++)
		mat2[i]=new int[p];
	cout<<"\n\n******************* matrix1 *****************************";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"\nInput matrix1[ "<<i<<" ][ "<<j<<" ]:";
			cin>>mat1[i][j];
		}
	}
	cout<<"\n\n******************* matrix2 *****************************";
		for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			cout<<"\nInput matrix2[ "<<i<<" ][ "<<j<<" ]:";
			cin>>mat2[i][j];
		}
	}
	int **mul;
		mul=new int *[m];
	for(int i=0;i<m;i++)
		mul[i]=new int[p];
	
	for(int i=0;i<m;i++)
		for(int j=0;j<p;j++)
			mul[i][j]=0;
	
	
	 for(int i=0;i<m;i++)
		for(int j=0;j<p;j++)
			for(int k=0;k<n;k++)
				mul[i][j]+=(mat1[i][k]*mat2[k][j]);
				
	cout<<"\n\n************************* matrix1 ***********************************\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			cout<<mat1[i][j]<<" ";
		cout<<endl;
	}
	cout<<"\n\n************************* matrix2 ***********************************\n";
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++)
			cout<<mat2[i][j]<<" ";
		cout<<endl;
	}
	cout<<"\n\n************************* multiple ***********************************\n";
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++)
			cout<<mul[i][j]<<" ";
		cout<<endl;
	}

	getch();
	return 0;
}


//***************************************************************************


