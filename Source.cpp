#include<iostream>
#include "Generator.h"
#include "MidSquare.h"
#include "Evaluator.h"
#include "GenLCG.h"
using namespace std;

int main()
{
	Generator *gen = new MidSquare(82);
	MidSquare y(6500);
	GenLCG z(27);
	y.Show();
	for (int i = 0; i < 10; i++) {
		y.generate();
	}
	std::cout << Evaluator(gen).Evaluate() << std::endl;
	z.generate();
	std::cout << z.Get();
	
	
	return 0;
}