#include<iostream>
#include<string>
using namespace std;

class A {

	public :
		int id;
		string name;
		string role;
		int salary;
		int experience;
		string company_name;
		string address;
		string email;
		long long int contact;

	public :

		void setter() {
			cout<<"enter the employee id = ";
			cin>>id;
			cout<<"enter the employee name = ";
			getline(cin,name);
			cout<<"enter the employee role = ";
			getline(cin,role);

		}
};

class B : public A{

	public :

		void setter() {
			cout<<"enter the employee salary = ";
			cin>>salary;
			cout<<"enter the employee name = ";
			cin>>experience;
		}
};

class C : public B {

	public :
		void getter(){
			
			cout<<"employee name = "<<name<<endl;
			cout<<"employee role = \n"<<role;
			cout<<"employee salary = \n"<<salary;
		}

		void setter() {
			cout<<"enter the employee company name = ";
			getline(cin,company_name);
			cout<<"enter the employee address";
			getline(cin,address);

		}
};
class D : public C{
	
	public :
		void setter()
		{
			cout<<"enter the employee email id = ";
			getline(cin, email);
			
			cout<<"enter the employee contact = ";
			cin>>contact;
		}
		
		void getter()
		{
			cout<<"employee name = "<<name<<endl;
			cout<<"employee role = \n"<<role;
			cout<<"employee salary = \n"<<salary;
		    cout<<"employee experience \n"<<experience;
		    cout<<"employee company name = "<<company_name<<endl;
			cout<<"employee address = \n"<<address;
			cout<<"employee email id = \n"<<email;
			cout<<"employee contact number\n"<<contact;
		
		}
};

int main()
{
	D d;
	d.setter();
	d.D::getter();
}