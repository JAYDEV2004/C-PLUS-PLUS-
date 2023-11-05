#include<iostream>
#include<string>
using namespace std;
class A {

	private :

		char jaydev[100];

	public :

		A(char jaydev[]) {

			strcpy(this->jaydev,jaydev);
		}

		void print() {

			cout<<"my name = ";
		}

		void print(char j[]) {

			cout<<jaydev<<" "<<j<<endl;
		}
};
int main() {

	A a("JAYDEV");
	a.print();
	a.print("SANJAYBHAI SATANI");
	
	return 0;
}