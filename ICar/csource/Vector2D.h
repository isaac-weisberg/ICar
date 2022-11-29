//
//  Vector2D.h
//  ICar
//
//  Created by a.vaysberg on 11/29/22.
//

#ifndef Vector2D_h
#define Vector2D_h

#include <stdio.h>

typedef struct {
    double x;
    double y;
} Vector2D;


Vector2D icvector2d_add(Vector2D a, Vector2D b);

#endif /* Vector2D_h */
