#include<iostream>

int main()
{
	
	
	unsigned int totalsum = 0;
	
	for (unsigned int i = 0; i <1000; i++ )
	{
		
		if (i%3 == 0 || i%5 == 0)
		{totalsum += i;}
	}
	
	std::cout << "answer =" << totalsum;
	}

