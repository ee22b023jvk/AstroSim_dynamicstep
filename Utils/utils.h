#pragma once
/*
 * UTILS.H
 */
#ifndef UTILS_H_
#define UTILS_H_

#include "../defs.h"
#include <cmath>
#include "vector3.h"

long double invsqrt(long double);
double      invsqrt(double);

vector3 cross(vector3 const &, vector3 const &);

#endif