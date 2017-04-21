#include <iostream>
#include < cstdlib>
#include <ctime>


int main()

{
	srand(static_cast <unsigned int>(time(0))); //generator 
	int randomNumber = rand();
	int die = (randomNumber % 100) + 1;
	int number;
	int chances = 0;

	do{
		chances = chances + 1;
		std::cout << "Pick a number between 1 and 100. " << std::endl;
		std::cin >> number;

		if (number == die)
		{
			std::cout << "congradulations the number " << die << "is correct" << std::endl;
		}
		else if (number > die)
		{
			std::cout << "you chose to high." <<  std::endl;
		}
		else
		{
			std::cout << "You chose to low." << std::endl;
		}
		std::cout << "You have used " << chances << "of 5 chances" << std::endl;

	} while (chances != 5 || number == die );




	system("pause");

	return 0;
}