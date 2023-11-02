#include<iostream>
#include<string>
using namespace std;
class Unary {

	private :
		int x;
	public :
		void setData() {

			cout<<"ENTER THE ANY VALUE FOR 1 INCREMENT = ";
			cin>>x;
		}
		void getData() {
			cout<<"YOUR VALUE = "<<x<<endl;
		}
		Unary operator++(int) {
			Unary incrementValue;

			incrementValue.x=x++;

			return incrementValue;
		}
		Unary operator--(int) {
			Unary incrementValue;
			
			incrementValue.x=x--;
			
			return incrementValue;
		}
};
int main() {
	Unary u;
	u.setData();
	u.getData();
	u++;//u.operator++(int)
	u.getData();
	u--;
	u.getData();
}