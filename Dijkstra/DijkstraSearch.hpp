//
//  Dijkstra.hpp
//  Dijkstra
//
//  Created by ky on 16/4/15.
//  Copyright © 2016年 yellfun. All rights reserved.
//

#ifndef Dijkstra_hpp
#define Dijkstra_hpp

#include <stdio.h>
#include <vector>
#include "Vertex.hpp"

class DijkstraSearch {
    
public:
    bool getMinPath(int start, int end, std::vector<int>& outPath);
    
private:
    void dijkstra(int start);
    
    int updateMinDistInUnknow();
    
private:
    int m_matrix[6][6];
    Vertex m_path[6];
};

#endif /* Dijkstra_hpp */
