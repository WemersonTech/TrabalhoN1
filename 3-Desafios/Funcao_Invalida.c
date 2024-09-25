#include <stdio.h>
#include <math.h>

#ifndef REMOVE_H
#define REMOVE_H

int func_val(int x, int b); 

#endif /* REMOVE_H */


int func_val(int x, int b) {
    
    float a0 = 186.752;
    float a1 = -148.235;
    float a2 = 34.5049;
    float a3 = -3.5091;
    float a4 = 0.183166;
    float a5 = -0.00513554;
    float a6 = 0.0000735464;
    float a7 = -4.22038e-7;

    float result = a0 
                  + (a1 + b) * x 
                  + a2 * pow(x, 2) 
                  + a3 * pow(x, 3) 
                  + a4 * pow(x, 4) 
                  + a5 * pow(x, 5) 
                  + a6 * pow(x, 6) 
                  + a7 * pow(x, 7);

    result = round(result);

    if (result == 0) {
        return 0;
    }

    return 1;
}
