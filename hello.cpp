#include <iostream>

using namespace std; 

int fib(int n){
	if (n==1 || n==2) return 1;
	else return fib(n-1)+fib(n-2);
}

int main(){
	int n;
	cout << "Please enter an integer:" << endl;
	cin >> n; 
	
	//cout << "hello world!" << endl;
	
	cout << "your fibonacci number is:" << endl;
	cout << fib(n) << endl;
	return 0;
}