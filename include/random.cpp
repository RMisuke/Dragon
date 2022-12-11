//
// Created by Chensinuo on 2022/12/11.
//
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "random.h"
#include "allvariables.h"

int Number_Max =0;
int Number_Min =0;
int Number =0;

int Random_Number()
{
    unsigned seed;
    seed = time(0);
    srand(seed);
    Number=rand()%Number_Max+Number_Min;
    return Number;
}
