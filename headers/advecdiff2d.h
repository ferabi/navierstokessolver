#pragma once
#include "vector.h"
#include "matrix.h"
#include "vector_operations.h"
#include "conjugategradient.h"
#include <math.h>
#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif

class AdvecDiff2D
{
    private :
        //advection velocity in x 
        double ad_vel_x;
        //advection velocity in y
        double ad_vel_y;
        //diffusion coefficient = alpha
        double alpha; 
        //number of points per dimension
        unsigned int m;
        //timestep
        double dt;
        //iteration matrix
        Matrix<double> M;
    
    public:
        //constructor takes three arguments
        AdvecDiff2D(const double in_ad_vel_x, const double in_ad_vel_y, const double in_alpha,const unsigned int in_m, const double in_dt);

        //exact solution at time t
        //Vector<double> exact(double in_time) const;

        //numerical solution at time t_end
        Vector<double> solve(double time_end) const;
};



