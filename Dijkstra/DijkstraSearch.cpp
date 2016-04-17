//
//  Dijkstra.cpp
//  Dijkstra
//
//  Created by ky on 16/4/15.
//  Copyright © 2016年 yellfun. All rights reserved.
//

#include "DijkstraSearch.hpp"

#define INFINITE 1000000000

void DijkstraSearch::dijkstra(int start) {
    
    if (start < 0 || start >= 6) {
        
        return;
    }
    
    for (int i = 0; i < 6; ++i) {
    
        m_path[i].dist = INFINITE;
        
        m_path[i].known = false;
        
        m_path[i].pre = -1;
    }
    
    m_path[start].dist = 0;
    
    m_path[start].pre = 0;
    
    while (true) {
        
        int index = updateMinDistInUnknow();
        
        if (index == -1) {
            
            break;
        }
        
        for (int i = 0; i < 6; ++i) {
            
            if (!m_path[i].known && m_matrix[index][i] != -1) {
                
                if (m_path[index].dist + m_matrix[index][i] < m_path[i].dist) {
                    
                    m_path[i].dist = m_path[index].dist + m_matrix[index][i];
                    
                    m_path[i].pre = index;
                }
            }
        }
    }
}


int DijkstraSearch::updateMinDistInUnknow() {
    
    int minDist = INFINITE;
    
    int index = -1;
    
    for (int i = 0; i < 6; ++i) {
        
        if (!m_path[i].known) {
            
            if (m_path[i].dist != -1 && m_path[i].dist < minDist) {
                
                minDist = m_path[i].dist;
                
                index = i;
            }
        }
    }
    
    if (index != -1) {
        
        m_path[index].dist = minDist;
        
        m_path[index].known = true;
    }
    
    return index;
}

bool DijkstraSearch::getMinPath(int start, int end, std::vector<int>& outPath) {
    
    if (start < 0 || start >= 6) {
        
        return false;
    }
    
    if (end < 0 || end >= 6) {
        
        return false;
    }
    
    return true;
}

