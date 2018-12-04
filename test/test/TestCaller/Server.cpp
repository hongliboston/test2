#include "StdAfx.h"
#include "Server.h"
#include "math.h"

Server * Server::_instance = 0;
//Server::Server(Table *t)
void Server::setTableandS(Table *t)
{
	getInstance()->_t = t;
//	_s = (SBase *)t->get("ToBeDetermined");
}


Server::~Server()
{
}


double Server::compute(double a, double b, double c, double d,double e, double f)
{
	double sinV1 = sin(a);
	double cosV1 = cos(b);
	double sinV2 = sin(c);
	double cosV2 = cos(d);
	double sinV3 = sin(e);
	double cosV3 = cos(f);

	return (sinV1*cosV1*sinV2*cosV2*sinV3*cosV3);
}

Server::Server()
{
}


Server * Server::getInstance()
{
	if(_instance ==0) {
	_instance = new Server;
	}
	return _instance;
}
