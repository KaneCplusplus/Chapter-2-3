//fahrenheitConvertion
//04/05/18
//Author Kane Greenwalt

#include<iostream>

int main()
{
	int TempAt8am;
	int TempAt12pm;
	int TempAt3pm;
	std::cout << "What is the temp at 8am? " << std::endl;
	std::cin >> TempAt8am;
	std::cout << "Enter the temp at 12pm/noon. " << std::endl;
	std::cin >> TempAt12pm;
	std::cout << "Enter the temp at 3pm. " << std::endl;
	std::cin >> TempAt3pm;
	double CelTemp8 = TempAt8am * 1.8;
	double CelTemp12 = TempAt12pm * 1.8;
	double CelTemp3 = TempAt3pm * 1.8;

	std::cout << "the temp is \n" << CelTemp8 << "\n" << CelTemp12 << "\n" << CelTemp3 << " Your welcome" << std::endl;


	system("Pause");
	return 0;
}