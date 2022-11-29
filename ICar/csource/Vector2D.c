//
//  Vector2D.c
//  ICar
//
//  Created by a.vaysberg on 11/29/22.
//

#include "Vector2D.h"

Vector2D icvector2d_add(Vector2D a, Vector2D b) {
    Vector2D result = {
        a.x + b.x,
        a.y + b.y
    };
    return result;
}
