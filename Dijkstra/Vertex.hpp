//
//  Vertex.hpp
//  Dijkstra
//
//  Created by ky on 16/4/17.
//  Copyright © 2016年 yellfun. All rights reserved.
//

#ifndef Vertex_hpp
#define Vertex_hpp

#include <stdio.h>

struct Vertex {
    
    bool known;
    float dist;
    int pre;
};

#endif /* Vertex_hpp */
