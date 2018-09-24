//Write a program that includes the quetion (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output. 


#include<iostream>
using namespace std;

//Define add function
int add (int a,int b)
{
	int sum;
	sum = (a + b);
}

//define max function
int max (int a, int b){

	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

//define min function
int min (int a, int b){

	if(a<b){
		return a;
	}
	else{
		return b;
	}
}


//write main function
int main(){
	char i;
	cout << "'A' for addition\n" << "'B' for maximum\n" << "'C' for minimum\n";
	cout << "Please enter what operation do you want to perform: ";
	cin >> i;
	double x,y;
	cout << "Enter two numbers: \n";	//taking input
	cin >> x >> y;
	

	//conditional structure
	if(i=='A'){				 	
		cout << "the addition is: " << add(x,y) <<endl;	 // call funtion, print result
	}

	else if(i=='B'){
		cout << "Maximum is: " << max(x,y) <<endl;	//pass number and call funtion ,print that
	}

	else{
		cout << "Minimum is: " << min(x,y) <<endl;	//pass number and call funtion ,print that
	}


return 0;
}


































  
