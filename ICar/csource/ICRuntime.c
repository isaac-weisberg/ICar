//
//  ICRuntime.c
//  ICar
//
//  Created by a.vaysberg on 11/29/22.
//

#include "ICRuntime.h"

void icruntime_simulate(ICRuntime* this, double deltatime) {
    double avgRpm = iccar_avgRpm(&this->player1);
    
    double distancePerMinute = avgRpm * this->player1.wheelCircumference;
    
    double distancePerSecond = distancePerMinute / 60;
    
    double distancePerDeltatime = distancePerSecond * deltatime;
    double heading = this->player1.heading;
    
    Vector2D deltaTranslation = {
        distancePerDeltatime * sin(heading),
        distancePerDeltatime * cos(heading)
    };
    
    Vector2D newPosition = icvector2d_add(this->player1.position, deltaTranslation);
    
    this->player1.position = newPosition;
}
