#include "Graph.h"

void Graph::AddNewGraphNode(char newgraphnode)
{
    GraphNode temp;
    temp.key = newgraphnode;
    temp.listpointer = NULL; // important
    adjlist.push_back(temp);
}

void Graph::AddNewEdgeBetweenGraphNodes(char A,
                                        char B, int distance)
{
    // find which node A is
    int a;
    for (a = 0; adjlist.size(); a++)
    {
        if (A == adjlist[a].key)
            break;
    }
    AddNodetoFront(adjlist[a].listpointer, B,
                   distance);
}

void Graph::PrintAllGraphNodesWithCosts()
{
    for (int a = 0; a < adjlist.size(); a++)
    {
        std::cout << "From Node " << adjlist[a].key << std::endl;
        PrintLLnodes(adjlist[a].listpointer);
    }
}

void AddNodetoFront(Node *&listpointer, char newkey,
                    int newdistance)
{
    Node *temp;
    temp = new Node;
    temp->key = newkey;
    temp->distance = newdistance;
    temp->next = listpointer;
    listpointer = temp;
}

void PrintLLnodes(Node *&listpointer)
{
    Node *temp;
    temp = listpointer;
    while (temp != NULL)
    {
        std::cout << "  to node " << temp->key << " dist: " << temp->distance << std::endl;
        temp = temp->next;
    }
}