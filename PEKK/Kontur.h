#pragma once
#include<iostream>

class Kontur
{
private:
	int n=2;
	double C, R, L, w_0, dw, U_c0, I_0,E_0;
public:
	Kontur( double ht,double C, double R, double L, double w_0, double dw, double U_c0, double I_0, double E_0);
	void SetInit(double* init);
	void DoOneStep(double t);
	void RHS(double* y, double* dy, double t);
	bool istrue;
	double* sum;
	double* y0;
	double* y1;
	double* dy;
	double ht;
};


