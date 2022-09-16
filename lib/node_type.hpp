#pragma once 
#include <vector>

struct Node { 
//this is a node struct that establishes a link between a node and its neighbors 
int name = NULL; 
int atom_type = 0; //  1 is Si, 2 is O, 3 is C, 4 is H
std::vector<int> neighbors; 

};

