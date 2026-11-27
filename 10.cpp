#include<iostream>
using namespace std;


int main(){
	
	int num1 = 10, num2 = 20, num3 = 30;
	bool result;
	
	result = (num3 > num1) && (num3 > num2);
	
	if(result){
		cout<<"Number 3 is the greatest\n";
	}else{
		cout<<"Number 3 is not the greatest\n";
	}
	
	
	
	if((num3 > num1) && (num3 > num2)){
		cout<<"Number 3 is the greatest\n";
	}else{
		cout<<"Number 3 is not the greatest\n";
	}
	
	
	
}
