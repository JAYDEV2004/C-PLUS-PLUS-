#include<iostream>
int main() {
	int n=2000;

	std::cout<<"enter the number =";
	std::cin>>n;

	while(n<=3000)
	{
		if(n%4==0)
		std::cout<<"\t"<<n;
		n++;
	}
	return 0;
}
