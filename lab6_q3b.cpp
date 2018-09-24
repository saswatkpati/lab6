//Write a program with a function that takes two int parameters, finds the maximum, then returns the maximum. The program should ask the user for two numbers, (By Reference) the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.

#include<iostream>
using namespace std;

//Define void function
void max (int a, int b, int &m){
	if(a<b){
		m=b;
	}
	else{
		m=b;
	}
}

int main(){
	
	int i,j,n;
	//asking input
	cout << "Enter two numbers: "<<endl;	
	cin >> i >> j;				
	//call function
	max (i,j,n);				
	//printing output
	cout << "Maximum is: " << n <<endl;	

return 0;
}
