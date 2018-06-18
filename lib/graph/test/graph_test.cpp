/**
 * @author VijayaGanesh Mohan
 */

#include "graph.hpp"

#include <iostream>
#include <set>
#include <map>

using namespace std;
using namespace vj_lib;


int main()
{
    Graph<int,int> g(true);

    g.addVertex(1);
    g.addVertex(2);
    g.addVertex(3);

    g.addEdge(1,3,1);
    g.addEdge(1,2,1);

    set<pair<int,int> > edge_list = g.edges();
    set<pair<int,int> >::iterator iter;

    cout<<"Graph Summary"<<endl;
    for (iter = edge_list.begin(); iter!= edge_list.end();++iter)
    {
        pair<int,int> k_v = *iter;
        cout<<k_v.first<<"--------->"<<k_v.second<<endl;
    }

    return 0;
}
