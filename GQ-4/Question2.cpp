/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <vector> 
#include <list> 
#include <iterator> 
#include <iostream>

using namespace std; 

void showlist(list <int> g) 
{ 
    list <int> :: iterator it; 
    for(it = g.begin(); it != g.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
  
int main()
{
    vector<int> V(5,3);
for(int i=0; i < V.size(); i++)
   V[i]=i;
  
list<int> L;
for(vector<int>::iterator itr = V.begin(); itr != V.end(); ++itr)
{
    L.push_back(*itr);
}
L.reverse();

 showlist(L);

    return 0;
}
