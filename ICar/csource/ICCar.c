//
//  ICCar.c
//  ICar
//
//  Created by a.vaysberg on 11/29/22.
//

#include "ICCar.h"
#include "avg.h"
#include "math.h"

double iccar_avgFrontRpm(ICCar* this) {
    return avg(this->fl_wheel.rpm, this->fr_wheel.rpm);
}

double iccar_avgRearRpm(ICCar* this) {
    return avg(this->rl_wheel.rpm, this->rr_wheel.rpm);
}

double iccar_avgRpm(ICCar* this) {
    return avg(iccar_avgFrontRpm(this), iccar_avgRearRpm(this));
}
