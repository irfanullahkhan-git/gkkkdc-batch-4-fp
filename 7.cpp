#include<iostream>
using namespace std;

int main(){
	int num1, num2; 
	int result;
	
	cout<<"Basic Calculator\n";
	
	cout<<"Please enter first number: \t";
	cin>>num1;
	
	cout<<"Please enter second number: \t";
	cin>>num2;
	
	result  = num1 + num2;
	cout<<"Addition: "<<result <<endl;
	
	result = num1 - num2;
	cout<<"Subtraction: " << result << endl;
	
	result = num1 * num2;
	cout<<"Product: " << result << endl;
	
	result = num1 / num2;
	cout<<"Ratio: "<<result <<endl;
	
	result = num1 % num2;
	cout<<"Remainder: "<<result;
	
	
}
