// Write a program with a function that takes two int parameters, adds them together, then returns the sum, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.

//including library
#include<iostream>
using namespace std;


//define void function
void addition (int a, int b, int &sum){
	sum = a+b;
}

int main(){
	int i,j,s;
	//asking for input
	cout << "Enter two numbers: \n";	
	cin >> i >> j;
	//call function				
	addition (i,j,s);				
	cout << "the sum is: " << s <<endl;
return 0;
}
	
