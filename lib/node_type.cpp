#include "node_type.hpp"

NodeMapper::NodeMapper(int start_num) { 
    node_array = new Node[start_num]; 
    start = start_num; 
}

NodeMapper::~NodeMapper() { 
    delete[] node_array; 
}

void NodeMapper::set_id(int ident, int type, std::vector<Atom*> neigh) 
{
    //sets the ideas of paticular atom
    //this initialize might need to be set more explicitly 
    node_array[ident] = Node{{ident,type},neigh};
}

void NodeMapper::map_to_molecule() 
{ 
    
    
    //the zero Node sets atom name to -1 

    //while the atom number is less than the starting number of atoms 
    while (atom_number < start) 
    { 
        if (node_array[atom_number].id.name == -1) 
        { 
            //atom has been used previously
            atom_number++; 
        }
        else 
        {
            
        }
    }
}