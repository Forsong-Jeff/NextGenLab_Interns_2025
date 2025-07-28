#include <iostream>
using namespace std;

double divide( int a, int b){
	if(b==0){
		cerr << "Error: Divisible by zero! is invalid"<<endl;
		return 0;
	} else{
		return 
		 static_cast<double>(a) / b;
	
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 int a, b;
	cout <<"Enter first number (a)"<<endl;
	cin >>  a;
	cout <<"Enter second number ( b)"<<endl;
	cin >> b;
	double result = divide(a, b);
	if(b != 0){
		cout <<"The quotient is:"<< result <<endl;
	}
	
	return 0;
}
