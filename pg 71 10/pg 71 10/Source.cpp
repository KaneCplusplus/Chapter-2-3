//pg 71 #10
//04/09/2018
//Author Kane Greenwalt

#include<iostream>

int main()
{
	double Netpay = 500;
	double withdraw = (Netpay * .20) + (Netpay * .08) + (Netpay * .04);
	std::cout << "You take home " << withdraw;
	system("Pause");
	return 0;
}