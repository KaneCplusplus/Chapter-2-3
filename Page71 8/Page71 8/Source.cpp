//pg. 71 8
//04/06/2018
//Author Kane Greenwalt

#include<iostream>

int main()
{
	double checksWorth;
	int Bonus;
	double savings;
	std::cout << " Sharon gets salary. Please enter the amount she is earing on her checks." << std::endl;
	std::cin >> checksWorth;
	std::cout << "How much are you wanting to put into savings?" << std::endl;
	std::cin >> savings;
	
	
	double total = ((checksWorth*savings) * 24 )+ 100;
	
	
	std::cout << "Sharon made $" << total << "." << std::endl;


	system("Pause");
	return 0;
}