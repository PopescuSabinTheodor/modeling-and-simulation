#include "MidSquare.h"



MidSquare::MidSquare(long x)
{
	seed = x;
}


MidSquare::~MidSquare()
{
}

void MidSquare:: generate()
{
	long currentNumber;
	int counted = DigitsCounter(seed);
	currentNumber = (seed * seed) / (int)pow(10, counted / 2);
	currentNumber = currentNumber % (int)pow(10, counted);
	if (currentNumber % 10 == 0)
	{
		currentNumber = currentNumber + counted;
	}
	if (currentNumber < pow(10, counted - 1))
	{
		currentNumber = currentNumber + pow(10, counted - 1);
	}
	seed = currentNumber;
}

int MidSquare:: DigitsCounter(int x)
{
	int counter = 0;
	while (x != 0)
	{
		x = x / 10;
		counter++;
	}
	return counter;
}

void MidSquare::Show()
{
	std::cout << seed/pow(10,DigitsCounter(seed)) << std::endl;
}

double MidSquare::Get()
{
	return seed / pow(10, DigitsCounter(seed));
}