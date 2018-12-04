#pragma once
#include <string>

class Table
{
public:
	Table(void){};
	~Table(void){};

	virtual void * get(std::string callerBlockPath) = 0;
};

