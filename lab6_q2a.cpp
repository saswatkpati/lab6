//Write a program with a function that takes two int parameters, adds them together, then returns the sum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the sum.


//including library
#include<iostream>
using namespace std;


//Define function
int add (int a,int b)
{
	int sum;
	sum = (a + b);
}

int main()
{
	int s,i,j;
	//asking input
	cout << "Enter two numbers: ";		
	cin >> i >> j;
	//call function
	s = add (i,j);				 
	//print output
	cout << "the addition is: " << s <<endl; 
}

	
