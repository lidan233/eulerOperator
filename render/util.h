//
// Created by lidan on 21/11/2020.
//

#ifndef EULEROPERATOR_UTIL_H
#define EULEROPERATOR_UTIL_H

#include <fstream>
#include <string>
#include <sstream>
#include <time.h>

double StringToDouble(const std::string& s)
{
    std::istringstream i(s);
    double x;
    if (!(i >> x))
        return 0;
    return x;
}

double Fun(double x)
{
    return 2.5 + sin(10 * x) / x;
}

double Random(double (*fun)(double), double xmin = 0, double xmax = 1)
{
    static double (*Fun)(double) = NULL, YMin, YMax;
    static bool First = true;

    // Initialises random generator for first call
    if (First)
    {
        First = false;
        srand((unsigned) time(NULL));
    }

    // Evaluates maximum of function
    if (fun != Fun)
    {
        Fun = fun;
        YMin = 0, YMax = Fun(xmin);
        for (int iX = 1; iX < RAND_MAX; iX++)
        {
            double X = xmin + (xmax - xmin) * iX / RAND_MAX;
            double Y = Fun(X);
            YMax = Y > YMax ? Y : YMax;
        }
    }

    // Gets random values for X & Y
    double X = xmin + (xmax - xmin) * rand() / RAND_MAX;
    double Y = YMin + (YMax - YMin) * rand() / RAND_MAX;

    // Returns if valid and try again if not valid
    return Y < fun(X) ? X : Random(Fun, xmin, xmax);
}



#endif //EULEROPERATOR_UTIL_H
