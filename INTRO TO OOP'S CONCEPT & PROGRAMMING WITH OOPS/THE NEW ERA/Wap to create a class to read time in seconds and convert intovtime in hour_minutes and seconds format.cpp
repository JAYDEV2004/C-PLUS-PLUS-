#include<iostream>
#include<string.h>
using namespace std;
class Second{
	public :
	
	int input_second;
};
int main()
{
	Second s;
	
	cout<<"ENTER THE TIME IN SECOND = ";
	cin>>s.input_second;
	cout<<endl;
	
	
	int hours = s.input_second / 3600;
	int minutes = (s.input_second % 3600) / 60;
	int seconds =  s.input_second % 60;
	
	cout << "Time in (HH:MM:SS) format: " << hours << ":" << minutes << ":" <<seconds <<endl;
   
}