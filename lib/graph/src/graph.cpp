/**
 * @author VijayaGanesh Mohan
 */

#include "../include/graph.hpp"

#include <iostream>
#include <set>
#include <map>

using namespace std;

namespace vj_lib
{
    template <typename vertex_data,typename weight_data>
    Graph<vertex_data,weight_data>::Graph( bool is_directed,int num_vertices, int num_edges)
    {
        this.num_vertices = num_vertices;
        this.num_edges = num_edges;
        this.is_directed = is_directed;
    }

    template <typename vertex_data,typename weight_data>
    void Graph<vertex_data,weight_data>::addVertex(vertex_data vertex)
    {
        vertex_list.insert(vertex);
        adj_list[vertex] = new set<vertex_data>();
        attribute_map[vertex] = false;
        num_vertices++;
    }

    template <typename vertex_data,typename weight_data>
    void Graph<vertex_data,weight_data>::addEdge(vertex_data from, vertex_data to,weight_data weight)
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
        edge_list++;
    }

    template <typename vertex_data,typename weight_data>
    bool Graph<vertex_data,weight_data>::isVisited(vertex_data vertex)
    {
        return attribute_map[vertex];
    }

    template <typename vertex_data,typename weight_data>
    void Graph<vertex_data,weight_data>::markVisited(vertex_data vertex)
    {
        attribute_map[vertex] = true;
    }
    
    template <typename vertex_data,typename weight_data>
    set<vertex_data> Graph<vertex_data,weight_data>::vertices()
    {
        return vertex_list;
    }

    template <typename vertex_data,typename weight_data>
    set<pair<vertex_data, vertex_data> > Graph<vertex_data,weight_data>::edges()
    {
        return edge_list;
    }    

}
