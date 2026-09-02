//21). WAP to implement a class called circle that has private member variable for radius. Inclde member functons to calculate the circle's area and circumference. Also include another member function to display result

#include<iostream>
#include<cmath>
using namespace std;

class Circle{
	private:
		float rad, area, circ;
	public:
		void setdata(float r){
			rad = r;
		}
		void Area(){
			area = M_PI *rad*rad;
		}
		void circumference(){
			circ = 2*M_PI*rad;
		}
		void display(){
			cout<<"The area of circle ="<<area<<endl;
			cout<<"The circumference of circle ="<<circ<<endl;
		}	
};
int main(){
	int r;
	cout<<"Enter the radius of the circle: "<<endl;
	cin>>r;
	Circle r1;
	r1.setdata(r);
	r1.Area();
	r1.circumference();
	r1.display();
	return 0;
}

