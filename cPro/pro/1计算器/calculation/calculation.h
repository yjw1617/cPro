#ifndef _CACULATION_H
#define _CACULATION_H
typedef struct{
	double pre_value;
}Caculation;

double add(double a, double b);

double sub(double a, double b);

double multiplication(double a, double b);

double divide(double a, double b);

double getPow(double a, double b);

double get_D(double a);

double get_Sin(double a);

double get_Cos(double a);

double get_Sqrt1(double a);

void caculationHelp();
#endif
