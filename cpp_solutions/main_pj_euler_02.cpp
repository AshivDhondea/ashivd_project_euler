#include<iostream>

int main()
{
	unsigned int previousval= 1;
	unsigned int currentval = 2;
	unsigned int even_sum = 0;
	if (currentval %2 ==0)
	{
	even_sum += currentval;
	std::cout<<"even count"<<"\n";
				  
	std::cout<<even_sum<<"\n";
	} 
	unsigned int tempval = 0;
	unsigned int stoppingnumber = 4000000;
	
	while (currentval < stoppingnumber)
	{
		tempval = currentval;
		currentval += previousval;
		if (currentval < stoppingnumber)
		{
			if (currentval % 2 == 0)
				{
				  even_sum += currentval;
				  } 
			previousval = tempval;
			//std::cout<<currentval<<"\n";
			std::cout<<"even count"<<"\n";
			std::cout<<even_sum<<"\n";
			}
		}
	}
