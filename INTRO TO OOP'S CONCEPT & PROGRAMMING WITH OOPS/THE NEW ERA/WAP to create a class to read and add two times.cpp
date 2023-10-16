#include<iostream>
#include<string.h>
using namespace std;
class Time {
	public :
	int time_hour;
	int time_minutes;
};

int main()
{
	Time t1,t2,total;
	
	cout<<"Enter the first hour time data = ";
	cin>>t1.time_hour;
	cout<<"Enter the first minuts time data = ";
	cin>>t1.time_minutes;
	
	cout<<"Enter the second hour time data = ";
	cin>>t2.time_hour;
	cout<<"Enter the second minuts time data = ";
	cin>>t2.time_minutes;
	
	total.time_hour = t1.time_hour+t2.time_hour;
	total.time_minutes = t1.time_minutes + t2.time_minutes;
	
	while(total.time_minutes>=60)
	{
		total.time_hour++;
		total.time_minutes = total.time_minutes - 60;
	}
	
	cout<<"Total hour = "<<total.time_hour<<endl;
	cout<<"Total minutes = "<<total.time_minutes<<endl;
	
}