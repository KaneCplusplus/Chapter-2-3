//lakeViewHotel
//04/06/2018
//Author Kane Greenwalt

#include<iostream>

int main()
{
	int NightsStayed;
	int RoomService;


	std::cout << "Welcome to the Lake View Hotel. How many nights would you like to stay? " << std::endl;
	std::cin >> NightsStayed;
	std::cout << "Would you like some room service? Pres 1 or 0, 1 = yes." << std::endl;
	std::cin >> RoomService;
	if (RoomService == 1)
	{
		std::cout << "Your total is $" << NightsStayed * 100 + 35 << std::endl;

	}
	if (RoomService == 0)
	{
		std::cout << " Your total is $" << NightsStayed * 100;
	}


	system("Pause");
	return 0;
}
