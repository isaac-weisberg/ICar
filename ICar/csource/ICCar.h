//
//  ICCar.h
//  ICar
//
//  Created by a.vaysberg on 11/29/22.
//

#ifndef ICCar_h
#define ICCar_h

#include "Vector2D.h"

typedef struct {
    Vector2D position;
    
    double rpm;
} ICWheel;

typedef struct {
    Vector2D position;
    
    double wheelCircumference;
    double heading;
    ICWheel fl_wheel;
    ICWheel fr_wheel;
    ICWheel rl_wheel;
    ICWheel rr_wheel;
} ICCar;

double iccar_avgRpm(ICCar* this);

#endif /* ICCar_h */
