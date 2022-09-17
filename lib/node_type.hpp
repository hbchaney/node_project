#pragma once 
#include <vector>
#include <list> 

struct Atom 
{ 
    int name=0;
    int type=0; 
};

struct Node 
{ 
    //this is a node struct that establishes a link between a node and its neighbors 
    Atom id {0,0};  
    std::vector<Atom*> neighbors;

};


struct Molecule 
{
    int atm_coord[4] {1,2,3,4}; 
    std::list<Atom> atoms; 
}; 

class NodeMapper 
{  
//atom and molecule being addressed 
int atom_number=0; 
int mol_number=0;


int start = 0; 
Node* node_array = nullptr; 
std::vector<Molecule> molecules; 

public: 
NodeMapper(int);
~NodeMapper(); 

void set_id (int, int, std::vector<Atom*>);
void map_to_molecule(); 

};

