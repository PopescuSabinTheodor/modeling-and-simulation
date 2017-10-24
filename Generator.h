#pragma once
class Generator
{
	
public:
	long seed;
	Generator();
	~Generator();

	virtual void generate() = 0;
	
};

