/**
 * @author VijayaGanesh Mohan
 */

#ifndef LIB_GRAPH_GRAPH_HPP

#define LIB_GRAPH_GRAPH_HPP


// C++ Standard Library
#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

namespace vj_lib
{

// Modular graph data structure to accomodate all form of data as edges / vertex
template<typename vertex_data,typename weight_data>
class Graph
{

set<vertex_data> vertex_list;
set<pair<vertex_data,vertex_data> > edge_list;

map<pair<vertex_data,vertex_data> , weight_data> weight_list;

map<vertex_data,bool> attribute_map;
map<vertex_data , set<vertex_data> > adj_list;

public:
size_t num_vertices, num_edges;
bool is_directed;

Graph(bool is_directed,int num_vertices = 0, int num_edges = 0)
{
    this->num_vertices = num_vertices;
    this->num_edges = num_edges;
    this->is_directed = is_directed;
}

// ~Graph();

set<vertex_data> vertices()
{
    return vertex_list;
}

set<pair<vertex_data, vertex_data> > edges()
{
    return edge_list;
}    

void addEdge(vertex_data from, vertex_data to,weight_data weight)
{
    edge_list.insert(make_pair(from,to));
    adj_list[from].insert(to);
    weight_list[make_pair(from,to)] = weight;
    if(!is_directed)
    {
        edge_list.insert(make_pair(to,from));
        adj_list[to].insert(from);
        weight_list[make_pair(to,from)] = weight;
    }
    num_edges++;
}

bool isVisited(vertex_data vertex)
{
    return attribute_map[vertex];
}

void addVertex(vertex_data vertex)
{
    vertex_list.insert(vertex);
    set<vertex_data> v_d;
    adj_list[vertex] = v_d;
    attribute_map[vertex] = false;
    num_vertices++;
}

void markVisited(vertex_data vertex)
{
    attribute_map[vertex] = true;
}


};

}// vj_lib namespace






#endif


