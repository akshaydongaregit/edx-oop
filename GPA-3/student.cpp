#include<iostream>
#include "header.h"
#include <list>
using namespace std;

#define infi 1000000000 

int getShortestPath(list<int> *adj,bool visited[],int V,int s,int d){
        
    list<int>::iterator i;
    int shortPath = -1;
    
    for(i = adj[s].begin();i!=adj[s].end();i++){
        if(visited[*i] != true)
            visited[*i] = true;
        else
            continue;
        
        if(*i==d)
            return 1;
        
        bool visitedNodes[V];
        for (int j = 0; j < V; j++)
            visitedNodes[j] = visited[j];
        
        int depth = getShortestPath(adj,visitedNodes,V,*i,d);
        
        if(depth>0)
        if(shortPath==-1)
            shortPath = 1 + depth;
        else if(shortPath >= 1 + depth)
            shortPath = 1 + depth;
    }
    
    return shortPath;
}


SafeMap::SafeMap(int V)
{
    this->V = V;
    adj = new list<int> [V];
}

void SafeMap::addSafeRoute(int v, int w)
{
    adj[v].push_back(w); // Add w to v's list.
}

// Function to check if S is safely reachable from D
int SafeMap::isReachable(int s, int d)
{


     // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    list<int> queue;

    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);

    // it will be used to get all adjacent vertices of a vertex accesible thru
    // a safe route
    list<int>::iterator i;

   //Write your code below this line

   return getShortestPath(adj,visited,V,s,d);
    
}
