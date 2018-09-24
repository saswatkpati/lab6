//(By Value) Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, then call the function with the numbers as arguments, and tell the user the maximum.

#include<iostream>
using namespace std;

//define function
int max (int a, int b){

	if(a<b){
		return b;
	}
	else{
		return a;
	}
}


int main(){
	int i,j;
	//asking input
	cout << "Enter two numbers: ";			
	cin >> i >> j;
	//pass number and call funtion ,print that
	cout << "Maximum is: " << max(i,j) <<endl;	
}


