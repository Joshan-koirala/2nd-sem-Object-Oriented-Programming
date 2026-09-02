//WAP TO DESIGN A CLASS COMPLEX TO REPRESENT COMPLEX NUMBERS.WRITE A FUNCTION SUM(FRIEND) TO ADD TWO COMPLEX NUMBERS.THE FUNCTION SHOULD RETURN AN OBJECT OF TYPE
//COMPLEX REPRRESENTING SUM OF TWO COMPLEX NUMBERS.

#include<iostream>
using namespace std;

class complex
{
	int real,image;
	public:
		friend complex sum(complex a,complex b);
		
		void show()
		{
			cout<<real<<"+"<<image<<"i"<<endl;
		}
		void get()
		{
			cout<<"Enter the real number:";
			cin>>real;
			cout<<"Enter the imaginary number:";
			cin>>image;
		}
		
};

complex sum(complex a,complex b)
{
	complex temp;
	temp.real=a.real+b.real;
	temp.image=a.image+b.image;
	return temp;
}

int main() {
    complex c1;
    complex c2;
    cout << "Enter first Complex Number: "<<endl;
    c1.get();
    cout << "Enter second Complex Number: "<<endl;
    c2.get();
    cout << "\n First Complex Number:";
    c1.show();
    cout << "Second Complex Number:";
    c2.show();
    complex result = sum(c1, c2);
    cout << "\n-------Sum of the Complex Numbers:";
    result.show();

    return 0;
}

