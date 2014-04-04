#pragma once

#ifndef Options04_h
#define Options04_h

#include "BinomialModel02.h"
int GetInputData(int& N, double& K);

double PriceByCRR(BinomialModel02 Model, int N, double K, double(*Payoff)(double z, double K));

double CallPayoff(double St, double K);

double 





#endif

