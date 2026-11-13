#include<iostream>
using namespace std;

int main(){
	// comment 1
	
	/* 
		int num;
		int num2;
		int result; 
	*/
	
	
	int num1, num2, result; // variable declration
	num1 = 10; // variable initialization
	num2 = 15;
	result = num1 + num2;
	
	int num3 = 10;
	
	int num4 = 20, num5, num6 = 50;
	num5 = 30;
	cout<< "Num 4 : " << num4<<endl;
	
	int num8;
	int num7 = num8 = 100;
	cout << "Num 7 : "<< num7 <<endl;
	
	result = num1 + num2 - num4 * (num3/10);
	result = (num5 + num6 * num8/num4) * num1-num1;
	cout<<"Result : "<< result;
	
}
