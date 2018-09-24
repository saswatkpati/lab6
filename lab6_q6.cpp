/*(a) Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
(b) Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
(c) Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
(d) Write a function that outputs the sum of the square of the even numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
Write a main program. */



#include<iostream>
#include<cmath>
using namespace std;

//define sumEvenNumbers function
int sumEvenNumbers(int a, int b)
{
	int i,s=0;
	//using loop make condition 
	for (i=a; i<=b; i++){
		if(i%2==0){
			s = s + i;
		}
	}
return s;
}	

//define sumOddNumbers function
int sumOddNumbers(int a, int b)
{
	int i,s=0;
	//using loop
	for (i=a; i<=b; i++){
		if(i%2 != 0){
			 s = s + i;
		}
	}
return s;
}	

//define sumSquareOddNumbers function
int sumSqureOddNumbers(int a, int b)
{
	int i=a,s=0;
	//using while loop
	while(i<=b){
		if(i%2 != 0){
			s = s + pow(i,2);  
		}
		i++;
	}
return s;
}	

//define sumSquareEvenNumbers function
int sumSqureEvenNumbers(int a, int b)
{
	int i=a,s=0;
	//using while loop
	while(i<=b){
		if(i%2 == 0){
			s = s + pow(i,2);  
		}
		i++;
	}
return s;
}	


//Write main function
int main(){
	int p,q,sumEven,sumOdd,sumSqureOdd,sumSqureEven;

	//asking for input
	cout << "Enter First number: ";
	cin >> p;
	cout << "Enter Secound number: ";
	cin >> q;

	//call function
	sumEven = sumEvenNumbers(p,q);	
	sumOdd = sumOddNumbers(p,q);
	sumSqureOdd = sumSqureOddNumbers(p,q);
	sumSqureEven = sumSqureEvenNumbers(p,q);

	//printing function value
	cout << "The sum of all even numbers between firstNum and secondNum: " << sumEven  <<endl;
	cout << "The sum of all odd numbers between firstNum and secondNum: " << sumOdd <<endl;
	cout << "the sum of the square of the odd numbers between firstNum and secondNum: " << sumSqureOdd <<endl;
	cout << "the sum of the square of the even numbers between firstNum and secondNum: " << sumSqureEven <<endl;

return 0;
}
		
