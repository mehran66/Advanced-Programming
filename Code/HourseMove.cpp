// Mehran Ghandehari
// Hanoy
// HourseMove

#include "stdafx.h"
#include<stdlib.h>
#include<iostream>
#include<math.h>
#include<conio.h>
#include<iomanip>
#include<time.h>

using namespace std;

void point(int point1[8][8],int vertical[8],int horizontal[8],int x,int y);


int main()
{
	int m=1,x,y,h;
	int n[8][8]={0};
	//create a 8*8 matrix like chess board.
	int chess_board[8][8]={0};
	//declare 2 matrix for vertical movement &horizontal movement
	int vertical[8];
	int horizontal[8];
	//each chessman can move with 7 different way but ...
	//We sould check that chessman didnt move to one part more than one time ...
	//or chessman shouldent go out of chess_board
	//right and down movement are positive & left and up movement are negetive
	//declare different movement
	vertical[1]=vertical[2]=horizontal[3]=horizontal[4]=-2;
	vertical[0]=vertical[3]=horizontal[2]=horizontal[5]=-1;
	vertical[4]=vertical[7]=horizontal[1]=horizontal[6]=1;
	vertical[5]=vertical[6]=horizontal[0]=horizontal[7]=2;
	//declare the first place of chessman that is randm
	srand(time(0));
	int currentrow=rand()%8;
	int currentcolumn=rand()%8;
	n[currentrow][currentcolumn]=1;
	chess_board[currentrow][currentcolumn]=1;
	//declare x&y variable that are helper &z is a matrix for help
	//each part in chess_board have a special point
	int point1[8][8]={{2,3,4,4,4,4,3,2},
					 {3,4,6,6,6,6,4,3},
					 {4,6,8,8,8,8,6,4},
					 {4,6,8,8,8,8,6,4},
					 {4,6,8,8,8,8,6,4},
					 {4,6,8,8,8,8,6,4},
					 {3,4,6,6,6,6,4,3},
					 {2,3,4,4,4,4,3,2}};
	int point2[7];
	while(m<64||h==1){
		for(int i=0;i<8;i++)
			point2[i]=0;
	
	for(int i=0;i<8;i++){
		 x=currentrow,y=currentcolumn;
		x+=vertical[i];
		y+=horizontal[i];
		if(x>7||x<0||y>7||y<0||chess_board[x][y]==1)
			point2[i]=0;
		else
		point2[i]=point1[x][y];
	}
	 x=currentrow;
	 y=currentcolumn;
	 h=0;
		for(int i=0;i<8;i++){
			if(point2[i]==1){
				m++;
				cout<<"\n"<<m<<":  ";
				cout<<"Chess man moves from ["<<currentrow<<" ][ "<<currentcolumn<<" ]";
				currentrow+=vertical[i];
				currentcolumn+=horizontal[i];
				chess_board[currentrow][currentcolumn]=1;
				cout<<"   to   [ "<<currentrow<<" ][ "<<currentcolumn<<" ]";
				h=1;
				n[currentrow][currentcolumn]=m;
				break;
			}
		}
				if(h==0){
			for(int i=0;i<8;i++){
			if(point2[i]==2){
				m++;
				cout<<"\n"<<m<<":  ";
				cout<<"Chess man moves from ["<<currentrow<<" ][ "<<currentcolumn<<" ]";
				currentrow+=vertical[i];
				currentcolumn+=horizontal[i];
				chess_board[currentrow][currentcolumn]=1;
				cout<<"   to   [ "<<currentrow<<" ][ "<<currentcolumn<<" ]";
				h=1;
				n[currentrow][currentcolumn]=m;
				break;
			}
		}
		}
		if(h==0){
			for(int i=0;i<8;i++){
			if(point2[i]==3){
				m++;
				cout<<"\n"<<m<<":  ";
				cout<<"Chess man moves from ["<<currentrow<<" ][ "<<currentcolumn<<" ]";
				currentrow+=vertical[i];
				currentcolumn+=horizontal[i];
				chess_board[currentrow][currentcolumn]=1;
				cout<<"   to   [ "<<currentrow<<" ][ "<<currentcolumn<<" ]";
				h=1;
				n[currentrow][currentcolumn]=m;
				break;
			}
		}
		}
			if(h==0){
			for(int i=0;i<8;i++){
			if(point2[i]==4){
				m++;
				cout<<"\n"<<m<<":  ";
				cout<<"Chess man moves from ["<<currentrow<<" ][ "<<currentcolumn<<" ]";
				currentrow+=vertical[i];
				currentcolumn+=horizontal[i];
				chess_board[currentrow][currentcolumn]=1;
				cout<<"   to   [ "<<currentrow<<" ][ "<<currentcolumn<<" ]";
				h=1;
				n[currentrow][currentcolumn]=m;
				break;
			}
		}
		}
					if(h==0){
			for(int i=0;i<8;i++){
			if(point2[i]==5){
				m++;
				cout<<"\n"<<m<<":  ";
				cout<<"Chess man moves from ["<<currentrow<<" ][ "<<currentcolumn<<" ]";
				currentrow+=vertical[i];
				currentcolumn+=horizontal[i];
				chess_board[currentrow][currentcolumn]=1;
				cout<<"   to   [ "<<currentrow<<" ][ "<<currentcolumn<<" ]";
				h=1;
				n[currentrow][currentcolumn]=m;
				break;
			}
		}
		}
				if(h==0){
			for(int i=0;i<8;i++){
			if(point2[i]==6){
				m++;
				cout<<"\n"<<m<<":  ";
				cout<<"Chess man moves from ["<<currentrow<<" ][ "<<currentcolumn<<" ]";
				currentrow+=vertical[i];
				currentcolumn+=horizontal[i];
				chess_board[currentrow][currentcolumn]=1;
				cout<<"   to   [ "<<currentrow<<" ][ "<<currentcolumn<<" ]";
				h=1;
				n[currentrow][currentcolumn]=m;
				break;
			}
		}
		}
						if(h==0){
			for(int i=0;i<8;i++){
			if(point2[i]==7){
				m++;
				cout<<"\n"<<m<<":  ";
				cout<<"Chess man moves from ["<<currentrow<<" ][ "<<currentcolumn<<" ]";
				currentrow+=vertical[i];
				currentcolumn+=horizontal[i];
				chess_board[currentrow][currentcolumn]=1;
				cout<<"   to   [ "<<currentrow<<" ][ "<<currentcolumn<<" ]";
				h=1;
				n[currentrow][currentcolumn]=m;
				break;
			}
		}
		}
					if(h==0){
			for(int i=0;i<8;i++){
			if(point2[i]==8){
				m++;
				cout<<"\n"<<m<<":  ";
				cout<<"Chess man moves from ["<<currentrow<<" ][ "<<currentcolumn<<" ]";
				currentrow+=vertical[i];
				currentcolumn+=horizontal[i];
				chess_board[currentrow][currentcolumn]=1;
				cout<<"   to   [ "<<currentrow<<" ][ "<<currentcolumn<<" ]";
				h=1;
				n[currentrow][currentcolumn]=m;
				break;
			}
		}
		}
		
			

	}


						cout<<endl;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			cout<<n[i][j]<<" ";
	cout<<endl;
	}


	getch();
	return 0;
}
void point(int point1[8][8],int vertical[8],int horizontal[8],int x,int y){
	
for(int i=0;i<8;i++){
	int x1=x,y1=y;
		x1+=vertical[i];
		y1+=horizontal[i];
		if(x1<=7||x1>=0||y1<=7||y1>=0)
			point1[x1][y1]-=1;	
	}
}

