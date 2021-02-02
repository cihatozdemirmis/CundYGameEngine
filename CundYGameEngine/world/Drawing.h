//
//  Drawing.hpp
//  PingPongGame
//
//  Created by Cihat Özdemir on 1.02.2021.
//

#ifndef Drawing_h
#define Drawing_h

#include <iostream>
#include <glfw3.h>
#include <math.h>
#include "../maths/Transform.h"
#include "../maths/Color.h"

class Drawing{
public:
    static void DrawMesh(int size, Vector3d* mesh, Transform transform, Color color);
};

#endif /* Drawing_hpp */
