//23). Create a class called car that has data members company, model and year. Implement member functions to get and display values
//    Define member functions outside class

#include<iostream>
using namespace std;

class Car{
	private:
		string company;
		int model;
		int year;
	public:
		void get();
		void display();
};
void Car::get(){
	cout<<"Enter the name of car company :";
	getline(cin, company);
	cout<<"Enter the car Model number : ";
	cin>>model;
	cout<<"Enter the manufacture year :";
	cin>>year;
}
void Car::display(){
	cout<<"\n Car details:\n";
	cout<<"Company name : "<<company<<endl;
	cout<<"Model        : "<<model<<endl;
	cout<<"Year         : "<<year<<endl;
}
int main() {
    Car c;
    c.get();
    c.display();
    return 0;
}
