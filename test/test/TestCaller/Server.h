#pragma once
#include "SBase.h"
#include "Table.h"

// for inheritance, virtual function case
class Server:public SBase
{
public:
	~Server();
	static Server * getInstance();
	void setTableandS(Table *t);
	//Server::Server(Table *t);
	virtual double compute(double a, double b, double c, double d,double e, double f);
private:
	Server();
	static Server * _instance;	
	Table * _t;
};