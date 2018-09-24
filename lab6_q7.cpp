/*UpperCase and LowerCase
Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 
*/


#include<iostream>
using namespace std;


//define function 
char toUpper(char x){
	char y;		
	y = x-32;
return y;	
}

char toLower(char x){
	char y;		
	y = x+32;
return y;	
}

//Write a main program
int main(){
	char c;


	//asking input
	cout<<"Write a single charector: "<<endl;
	cin >> c;
			
	// Changing case
	if(65<=c && c<=90){
		cout << "Lower case value: " << toLower(c) <<endl;
	}
	else{
		 cout << "Upper case value: " << toUpper(c) <<endl;
	}

return 0;
}
