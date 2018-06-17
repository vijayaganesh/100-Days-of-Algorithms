/**
 * @author VijayaGanesh Mohan
 */

#ifndef LIB_GRAPH_HPP
#define LIB_GRAPH_HPP


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

Graph();

// ~Graph();

Graph(bool is_directed, int num_vertices = 0, int num_edges = 0 );

set<vertex_data> vertices();

set<pair<vertex_data, vertex_data> > edges();

void addEdge(vertex_data from, vertex_data to,weight_data weight);

bool isVisited(vertex_data vertex);

void addVertex(vertex_data vertex);

void markVisited(vertex_data vertex);


};

}// vj_lib namespace






#endif


