#pragma once
#include "Generator.h"
#include <iostream>
class Evaluator
{
	Generator* gen;
	
public:
	
	Evaluator(Generator *g);
	~Evaluator();
	int Evaluator::DigitsCounter(int x);
float Evaluate();
};

