// gcd1.cpp : Defines the entry point for the console application.

//

#include "stdafx.h"
 #include <iostream>
#include<conio.h>
 using namespace std;

long gcd(long a, long b) {
// Make sure a and b are both nonnegative
if (a<0) a = -a;
if (b<0) b = -b;
 // if a and b are both zero, print an error and return 0
 if ( (a==0) && (b==0) ) {
 cerr << "WARNING: gcd called with both arguments equal to zero."
 << endl;
 return 0;
 }

// If b is zero, the answer is a
 if (b==0) return a;
 // If a is zero, the answer is b
 if (a==0) return b;

 long c = a%b;

 return gcd(b,c);
 }



int main()
{
	long a,b;

 cout << "Enter the first number --> ";
 cin >> a;
 cout << "Enter the second number --> ";
 cin >> b;

 cout << "The gcd of " << a << " and " << b << " is "
 << gcd(a,b) << endl;
 getch();
	return 0;
}



