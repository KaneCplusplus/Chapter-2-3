//04/05/18
//PayCheck
//Author Kane Greenwalt

#include<iostream>

int main()
{
	double HoursWorked;
	double hourlyPay;
	double netPay;
	
	std::cout << "Please enter your hourly pay. >>>> " << std::endl;
	std::cin >> hourlyPay;
	std::cout << "Now enter your hours worked. >>>> " << std::endl;
	std::cin >> HoursWorked;
	double totalNetpay = hourlyPay * HoursWorked;
	std::cout << "You made $" << totalNetpay << " " << std::endl;
	




	system("Pause");
	return 0;
}