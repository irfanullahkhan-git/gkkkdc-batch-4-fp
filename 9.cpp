#include<iostream>
using namespace std;

int main(){
	int num1  = 10;
	int num2 = 20;
	int num3 = 30;
	bool result;
//	result = (num1 > num2) && (num3 > num2);
//	result = (num1 > num2) || (num3 > num2);

//	result = (num1 > num2) && (num3 > num2) && (num2 < num3);
//	result = (num1 > num2) || (num3 > num2) || (num2 < num3);
//	result = (num1 > num2) || (num3 > num2) && (num2 < num3);
  
//	result = (num1 > num2) && (num3 > num2) || (num2 < num3);
	
	result = (num1 > num2) && ((num3 > num2) || (num2 < num3));
	
	cout<<"Result: "<<result<<endl;

	
	
}
