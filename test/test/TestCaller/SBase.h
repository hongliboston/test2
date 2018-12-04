#pragma once
class SBase
{
public:
	SBase(){};
	~SBase(){};
	virtual double compute(double a, double b, double c, double d,double e, double f)= 0;
};

