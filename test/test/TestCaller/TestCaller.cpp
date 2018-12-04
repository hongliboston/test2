// TestCaller.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Caller.h"
#include "Server.h"
#include "TopClass.h"
#include <ctime>

int _tmain(int argc, _TCHAR* argv[])
{
	// for virtual function call case
	Server  * sobj = Server::getInstance();
	// Caller*   cobj = new Caller(sobj);
	Caller * cobj = Caller::getInstance();
	TopClass tc;

	double a=23.5;
	double b=45.6;
	double result=0.0;
	
	clock_t time_a = clock();

	for (int i=0; i < 10000000; i++) {
		result = cobj->step(a, b, a , b, a, a);
	}
	clock_t time_b = clock();
	unsigned long total_time_ticks = (unsigned long)(time_b - time_a);
	printf( "it takes %d clock_tick or %f seconds", total_time_ticks, (double)total_time_ticks/CLOCKS_PER_SEC);
	printf( "topclass ->get", tc.get("gggh"));
	getchar();
	return 0;
}
