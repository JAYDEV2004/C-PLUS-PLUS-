#include<iostream>
#include<string>
using namespace std;

class Employee {

	public : 

		int id;
		string name;
		int salary;
		string role;
		string address;

		void setter1() {

			cout<<"enter the first employee id = ";
			cin>>id;
			cin.ignore();
			cout<<"enter the first employee name = ";
			getline(cin,name);
			cout<<"enter the first employee salary = ";
			cin>>salary;
			cin.ignore();
			cout<<"enter the first employee role = ";
			getline(cin,role);
			cout<<"enter the first employee address = ";
			getline(cin,address);

		}
		void getter1() {

			cout<<"id = "<<id<<endl<<"name = "<<name<<endl<<"salary = "<<salary<<endl<<"role = "<<endl<<role<<"address = "<<endl<<address;
		}
};
class Employee1 {

	public :

		int id;
		string name;
		int salary;
		string role;
		string address;


		void setter2() {

			cout<<"enter the second employee id = ";
			cin>>id;
			cin.ignore();
			cout<<"enter the second employee name = ";
			getline(cin,name);
			cout<<"enter the second employee salary = ";
			cin>>salary;
			cin.ignore();
			cout<<"enter the second employee role = ";
			getline(cin,role);
			cout<<"enter the second employee address = ";
			getline(cin,address);

		}
		void getter2() {

			cout<<"id = "<<id<<endl<<"name = "<<name<<endl<<"salary = "<<salary<<endl<<"role = "<<endl<<role<<"address = "<<endl<<address;
		}
};
class Employee2 : public Employee, public Employee1{

	public :
		int id;
		string name;
		int salary;
		string role;
		string address;


		void setter3() {

			cout<<"enter the third employee id = ";
			cin>>id;
			cin.ignore();
			cout<<"enter the third employee name = ";
			getline(cin,name);
			cout<<"enter the third employee salary = ";
			cin>>salary;
			cin.ignore();
			cout<<"enter the third employee role = ";
			getline(cin,role);
			cout<<"enter the third employee address = ";
			getline(cin,address);
		}
		void getter3() {

			cout<<"id = "<<id<<endl<<"name = "<<name<<endl<<"salary = "<<salary<<endl<<"role = "<<endl<<role<<"address = "<<endl<<address;
		}
};
int main() {

	Employee2 e2;


	e2.setter1();

	e2.setter2();
	
	e2.setter3();
	
	e2.getter1();
	
	e2.getter2();
	                                                                 
	e2.getter3();
	
	return 0;
}
