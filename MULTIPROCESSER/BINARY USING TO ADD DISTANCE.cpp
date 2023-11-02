#include<iostream>
#include<string>
using namespace std;
class Distance {
	private :

		int feet;
		int inch;
		
	public :
		void setData(int feet,int inch) {
			this->feet = feet;
			this->inch = inch;
		}
		void getData()
		{
			cout<<"Feet = "<<feet<<" Inch = "<<inch<<endl;
		}
		Distance operator+(Distance d1){
		
		Distance sum;
			
		    sum.feet = this->feet + d1.feet;
			sum.inch = this->inch + d1.inch;
			
			while(sum.inch>=12)
			{
				sum.feet++;
				sum.inch -=12;
			}
		return sum;
			
		}
};
int main() {
	
	Distance d,d1,d2;
	
	d.setData(10,9);
	d.getData();
	d1.setData(12,4);
	d1.getData();
	
	cout<<"Sum of Two Distance "<<endl;
	d2 = d + d1;
	d2.getData();

}