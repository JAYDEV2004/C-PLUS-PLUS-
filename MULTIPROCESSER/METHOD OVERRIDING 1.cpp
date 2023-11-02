#include<iostream>
#include<string>

using namespace std;
class Sum {

	public :

		int x;
		int y;
		
		void data() {

			cout<<"enter the first value for sum = \n";
			cin>>x;
			cout<<"enter the second value for sum = \n";
			cin>>y;

			cout<<"SUM = "<<x+y<<endl;

		}
};
class Substratcion : public Sum {
	public :

		int x;
		int y;
		
		void data() {

			cout<<"enter the first value for SUBTRACTION = \n";
			cin>>x;
			cout<<"enter the second value for SUBTRACTION = \n";
			cin>>y;

			cout<<"SUBTRACTION = "<<x-y<<endl;
		}
};
class Divided : public Substratcion {
	public :

		int x;
		int y;
		
		void data() {

			cout<<"enter the first value for DIVIDED = \n";
			cin>>x;
			cout<<"enter the second value for DIVIDED = \n";
			cin>>y;

			cout<<"DIVIDED = "<<x/y<<endl;
		}
};
class Multipliction : public Divided {
	public :

		int x;
		int y;
		void data() {

			cout<<"enter the first value for MULTIPLICATION = \n";
			cin>>x;
			cout<<"enter the second value for MULTIPLICATION = \n";
			cin>>y;

			cout<<"MULTIPLICATION = "<<x*y<<endl;
		}
};
class Module : public Multipliction {
	public :
		int x;
		int y;
		void data() {

			cout<<"enter the first value for PERCANTAGE = \n";
			cin>>x;
			cout<<"enter the second value for PERCANTAGE = \n";
			cin>>y;

			cout<<"PERCANTAGE = "<<(x*y)/100<<endl;
		}
};
int main()
{
	Module m;
	
	m.Sum::data();
	m.Substratcion::data();
	m.Divided::data();	
	m.Multipliction::data();
	m.Module::data();
	                 
}