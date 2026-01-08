#include <iostream>
#include "Graph.h"


int main()
{
    Graph mygraph;
    mygraph.AddNewGraphNode('A');
    mygraph.AddNewGraphNode('B');
    mygraph.AddNewGraphNode('C');
    mygraph.AddNewGraphNode('D');
    mygraph.AddNewEdgeBetweenGraphNodes('A', 'B', 1);
    mygraph.AddNewEdgeBetweenGraphNodes('A', 'D', 4);
    mygraph.AddNewEdgeBetweenGraphNodes('B', 'A', 1);
    mygraph.AddNewEdgeBetweenGraphNodes('C', 'A', 3);
    mygraph.AddNewEdgeBetweenGraphNodes('D', 'B', 5);
    mygraph.AddNewEdgeBetweenGraphNodes('D', 'C', 11);
    mygraph.AddNewEdgeBetweenGraphNodes('D', 'A', 10);
    mygraph.PrintAllGraphNodesWithCosts();
}