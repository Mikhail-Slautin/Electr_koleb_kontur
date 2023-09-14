#include "Kontur.h"

Kontur::Kontur(  double ht, double C, double R, double L, double w_0, double dw, double U_c0, double I_0, double E_0)//конструктор класса
{
	
	this->ht = ht;
	this->C = C;
	this->R = R;
	this->L = L;
	this->w_0 = w_0;
	this->dw = dw;
	this->U_c0= U_c0;
	this->I_0 = I_0;
	this->E_0 = E_0;
	sum = new double[n];
	y0 = new double[n];
	y1 = new double[n];
	dy = new double[n];
	istrue = false;
}
void Kontur::SetInit(double* init)//инициализация начальных значений
{
	for (int i = 0;i < n;i++)
	{
		y0[i] = init[i];
	}
	istrue = true;
}
void Kontur::RHS(double* y, double* dy, double t)///правая часть уравнения(диффур который нцжно решить)
{
	dy[0] = y[1];
	dy[1] = -R * y[1] / L - y[0] / L / C+E_0*sin(w_0*t)/L ;

}
void Kontur::DoOneStep(double t)//нахождение значений уравнения методом рунге кутта
{
	if (!istrue) return;
	RHS(y0, dy, t);
	for (int i = 0;i < n;i++)
	{
		sum[i] = dy[i];
		y1[i] = y0[i] + 0.5 * ht * dy[i];
	}
	RHS(y1, dy, t);
	for (int i = 0;i < n;i++)
	{
		sum[i] = sum[i] + 2 * dy[i];
		y1[i] = y0[i] + 0.5 * ht * dy[i];
	}
	RHS(y1, dy, t);
	for (int i = 0;i < n;i++)
	{
		sum[i] = sum[i] + 2 * dy[i];
		y1[i] = y0[i] + ht * dy[i];
	}
	RHS(y1, dy, t);
	for (int i = 0;i < n;i++)
	{
		sum[i] = sum[i] + dy[i];
		y1[i] = y0[i] + ht * sum[i] / 6.;
		y0[i] = y1[i];

	}
}
