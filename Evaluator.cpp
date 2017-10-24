#include "Evaluator.h"



Evaluator::Evaluator(Generator *g)
{
	gen = g;
}


Evaluator::~Evaluator()
{
}

float Evaluator::Evaluate()
{
	float V[5000];
	float G[5000];
	float x;
	float y;
	int counter = 0;
	float error;
	
	for(int i =0; i<10000; ++i)
	{
		gen->generate();
		//V[i] = gen->seed / pow(10, DigitsCounter(gen->seed));
		x = gen->seed / pow(10, DigitsCounter(gen->seed));
		gen->generate();
		//G[i] = gen->seed / pow(10, DigitsCounter(gen->seed));
		y = gen->seed / pow(10, DigitsCounter(gen->seed));
		if (x*x + y*y <= 0.25)
			counter++;
	}
	error = counter / 2500.0;
	return 3.14-error;
}

int Evaluator::DigitsCounter(int x)
{
	int counter = 0;
	while (x != 0)
	{
		x = x / 10;
		counter++;
	}
	return counter;
}