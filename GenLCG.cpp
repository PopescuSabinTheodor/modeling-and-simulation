#include "GenLCG.h"



GenLCG::GenLCG(int x)
{
	seed = x;
}


GenLCG::~GenLCG()
{
}

void GenLCG::generate()
{
	seed = (a * seed + c) % m;
}

double GenLCG::Get()
{
	return double(seed) / m;
}