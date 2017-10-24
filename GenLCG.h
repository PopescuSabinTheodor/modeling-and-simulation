#pragma once
#include "Generator.h"
class GenLCG : public Generator
{
	int a = 17;
	int c = 43;
	int m = 100;
public:
	GenLCG(int x);
	~GenLCG();
	void generate();
	double GenLCG::Get();
};

