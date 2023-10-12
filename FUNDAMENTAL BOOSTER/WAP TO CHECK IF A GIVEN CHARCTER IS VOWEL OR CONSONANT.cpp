#include<iostream>
int main()
{
	char n;
	
	std::cout<<"ENTER THE ANY CHARACTER = "<<std::endl;
	std::cin>>n;
	
	if(n=='A' || n=='I' || n=='E' || n=='O' || n=='U')
	{
		std::cout<<"THIS IS THE VOWEL = "<<n<<std::endl;
	}
	else if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' )
	{
		std::cout<<"THIS IS THE VOWEL = "<<n<<std::endl;
	}
	else
	{
		std::cout<<"THIS IS THE CONSONANT = "<<n<<std::endl;
	}
}