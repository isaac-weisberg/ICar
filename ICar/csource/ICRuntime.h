//
//  ICRuntime.h
//  ICar
//
//  Created by a.vaysberg on 11/29/22.
//

#ifndef ICRuntime_h
#define ICRuntime_h

#import "ICCar.h"
#import "math.h"

typedef struct {
    ICCar player1;
} ICRuntime;

void icruntime_simulate(ICRuntime* this, double deltatime);

#endif /* ICRuntime_h */
