#include<iostream>
#include<string>
using namespace std;
class Points {

	public :
		int x;
		int y;
		int z;

		void data() {
			cout<<".........METHOD FROM CLASS POINTS......."<<endl;
		}
		void data(int x){
			this->x=x;
			cout<<"X = "<<x<<endl;
		}
		void data(int x, int y){
			this->x=x;
			this->y=y;
			cout<<"X - Y = "<<x-y<<endl;
		}
		void data(int x,int y,int z){
			this->x=x;
			this->y=y;
			this->z=z;
			
			cout<<"X - Y - Z = "<<x-y-z<<endl;
	    	
		}
};
int main()
{
	Points p;
//	
    p.data();
	p.data(45);
	p.data(45,39);
	p.data(45,39,47);
}