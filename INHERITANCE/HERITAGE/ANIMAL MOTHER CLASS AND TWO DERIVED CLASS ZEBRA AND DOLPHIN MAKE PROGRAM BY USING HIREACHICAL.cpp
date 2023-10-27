#include<iostream>
#include<string>
using namespace std;
class Animal {
	protected :

		string name;
		int age;

	public :

		void setter(string& name, int age) {
			this->name = name;
			this->age  = age;
		}

};
class Zebra : public Animal {
	public :
		void zebra_information() {

			cout<<"\nZEBRA INFORMATION "<<endl;
			cout<<"NAME =  "<<name<<endl;
			cout<<"AGE = "<<age<<endl;
			cout<<"ORIGIN OF ZEBRA = AFRICA" << endl;
		}
};
class Dolphin : public Animal {

	public :

		void dolphin_information() {

			cout<<"\nDOLPHIN INFORMATION "<<endl;
			cout<<"NAME =  "<<name<<endl;
			cout<<"AGE = "<<age<<endl;
			cout<<"ORIGIN OF DOLPHIN = OCEANS" << endl;
		}
};

int main() {
	string name;
	int age;

	cout<<"ENTER THE NAME OF ZEBRA = ";
	getline(cin,name);
	cout<<"ENTER THE AGE OF ZEBRA = ";
	cin>>age;

	Zebra z;
	z.setter(name,age);
	z.zebra_information();
	
    cin.ignore();
	cout<<"\nENTER THE NAME OF DOLPHIN = ";
	getline(cin,name);
	cout<<"ENTER THE AGE OF DOLPHIN = ";
	cin>>age;

	Dolphin d;
	d.setter(name,age);
	d.dolphin_information();

	return 0;
}
