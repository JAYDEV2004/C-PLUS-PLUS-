#include<iostream>
#include<string.h>
using namespace std;
class Distance {

	public :
		int distance_feet;
		int distance_inch;

};

int main() {
	Distance d1,d2,total;

	cout<<"Enter The First Feet  = ";
	cin>>d1.distance_feet;
	
	cout<<"Enter the first Inch  = ";
	cin>>d1.distance_inch;
	
	cout<<"Enter The Second Feet = ";
	cin>>d2.distance_feet;
	
	cout<<"Enter the Second Inch = ";
	cin>>d2.distance_inch;
	
	total.distance_feet = d1.distance_feet + d2.distance_feet;
	total.distance_inch = d1.distance_inch + d2.distance_inch;
	
	while(total.distance_inch>=12)
	{
		total.distance_feet++;
		total.distance_inch = total.distance_inch - 12;
	}
	
	cout<<"Total feet = "<<total.distance_feet<<endl;
	cout<<"Total inch = "<<total.distance_inch<<endl;
}
