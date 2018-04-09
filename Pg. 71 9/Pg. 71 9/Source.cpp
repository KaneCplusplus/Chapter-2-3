//Pg. 71 #9
//04/09/2018
//Author Kane Greenwalt

#include<iostream>

int main()
{
	double coffee;
	double Bagels;
	double Donuts;


	std::cout << "    Menu   " << std::endl;
	std::cout << "Coffee $1.20" << std::endl;
	std::cout << "Bagels $.99" << std::endl;
	std::cout << "Donuts $ 0.75" << std::endl;

	std::cout << "Hello, How many cups of coffee do you want?" << std::endl;
	std::cin >> coffee; 
	std::cout << "How many Bagels do you want?" << std::endl;
	std::cin >> Bagels;
	std::cout << "How many Donuts" << std::endl;
	std::cin >> Donuts;
	double total = Donuts * 0.75 + Bagels * .99 + coffee * 1.20;
	std::cout << "ok cool, your total is " << total << std::endl;
	
	system("Pause");
	return 0;




}