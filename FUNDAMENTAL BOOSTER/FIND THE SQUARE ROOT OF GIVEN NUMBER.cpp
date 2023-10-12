#include<iostream>
#include<math.h>

int main()
{
	int square_root, n;
	
	std::cout<<"ENTER THE NUMBER = "<<std::endl;
	std::cin>>n;
	std::cout<<std::endl;
	
	square_root = sqrt(n);
	
	std::cout<<"THE SQUARE ROOT OF "<<n<<"="<<square_root<<std::endl;
	
	return 0;
}