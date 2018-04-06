//Eggs!
//04/05/18
//Author Kane Greenwalt

#include<iostream>

int main()
{
	int DozenEggs = 12;
	int SingleEggsEntered;
	int dozenEggsCarton;
	int eggsRemainder;

	std::cout << "How many eggs do you want?" << std::endl;
	std::cin >> SingleEggsEntered;
	
	dozenEggsCarton = SingleEggsEntered / DozenEggs;
	eggsRemainder = SingleEggsEntered % DozenEggs;

	std::cout << "You have " << dozenEggsCarton << " dozen and " << eggsRemainder << std::endl;

	double total = eggsRemainder * .25 + dozenEggsCarton * 2.00;
	std::cout << "Total is $" << total;



	system("Pause");
	return 0;
}