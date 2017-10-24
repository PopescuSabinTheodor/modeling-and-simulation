#pragma once
#include "Generator.h"
#include<math.h>
#include<iostream>
class MidSquare : public Generator
{
	
public:
	MidSquare(long x);
	~MidSquare();
	void generate();
	int DigitsCounter(int x);
	void Show();
	double Get();
};

