//19). C++ Simple Program Showing Implicit and Explicit Types conversion

#include<iostream>
using namespace std;

int main(){
	int a=400;
	double b= 987654321.234;
// Implict Type Conversion
    int c=b;
    double d=a;
	cout<<"The Implicit Conversion (double to int):" <<c<<endl;
	cout<<"The Implicit Conversion (int to double ):" <<d<<endl;
//	Explicit Type Conversion
    int x =(int)b;
    double y =double (a);
   	cout<<"The Explicit Conversion (double to int):" <<x<<endl;
   	cout<<"The Explicit Conversion (int to double):" <<y<<endl;
	return 0;
}
