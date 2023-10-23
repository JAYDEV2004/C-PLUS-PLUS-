#include<iostream>
#include<string.h>
using namespace std;
class Employe {
	private :
		int emp_id;
		string emp_name;
		string emp_role;
		int emp_age;
		int emp_salary;
		int emp_experiance;
		string emp_city;
		string emp_company_name;
		string emp_emailID;
		int emp_contact_number;

	public :
		void setdata() {
			
			cout<<"ENTER THE EMPLOYE ID = ";
			cin>>emp_id;

			cout<<"ENTER THE EMPLOYE NAME = ";
			cin.ignore(); // Consume newline
            getline(cin, emp_name);

			cout<<"ENTER THE EMPLOYE ROLE =";
			getline(cin, emp_role);

			cout<<"ENTER THE EMPLOYE AGE =";
			cin>>emp_age;

			cout<<"ENTER THE EMPLOYE SALARY = ";
			cin>>emp_salary;

			cout<<"ENTER THE EMPLOYE EXPERIANCE = ";
			cin>>emp_experiance;

			cout<<"ENTER THE EMPLOYE CITY = ";
			cin.ignore(); // Consume newline
            getline(cin, emp_city);

			cout<<"ENTER THE EMPLOYE COMPANY NAME = ";
			getline(cin, emp_company_name);
			
			cout<<"ENTER THE EMPLOYEE EMAIL ID = ";
			cin>>emp_emailID;
			
			cout<<"ENTER THE EMPLOYEE CONTACT NUMBER = ";
			cin>>emp_contact_number;
		}
		void getdata() {	
			cout<<"Empolye Id = "<<emp_id<<endl;
			cout<<"Empolye Name = "<<emp_name<<endl;
			cout<<"Empolye Role = "<<emp_role<<endl;
			cout<<"Empolye Age = "<<emp_age<<endl;
			cout<<"Empolye Salary = "<<emp_salary<<endl;
			cout<<"Empolye Experiance = "<<emp_experiance<<endl;
			cout<<"Empolye City = "<<emp_city<<endl;
			cout<<"Empolye Company Name = "<<emp_company_name<<endl;
			cout<<"Employee Email Id = "<<emp_emailID<<endl;
			cout<<"Employee Contact Number = "<<emp_contact_number<<endl;
			cout<<endl;
		}
};

int main() {
	Employe e[5];

	for(int i=0; i<5; i++) {
		cout<<"ENTER THE "<<i+1<<" EMPLOYEE DETAILS ="<<endl;
		e[i].setdata();
	}
	 cout<<endl<<endl;
	for(int i=0; i<5; i++) {
		cout<<"THE "<<i+1<<"EMPLOYEE DETAILS ="<<endl;
		e[i].getdata();
	}
}