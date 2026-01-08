#include <vector>
#include <iostream>
using namespace std;

struct Node
{ // used by the linkedlists
    char key;
    int distance;
    Node *next;
};

struct GraphNode
{ // used by the vector
    char key;
    Node *listpointer;
};

void PrintLLnodes(Node *&listpointer);
void AddNodetoFront(Node *&listpointer, char newkey,
                    int newdistance);
                    

class Graph
{
private:
    vector<GraphNode> adjlist;

public:
    Graph() {};
    ~Graph() {};
    void AddNewGraphNode(char newgraphnode);
    void AddNewEdgeBetweenGraphNodes(char A, char B,
                                     int distance);
    void PrintAllGraphNodesWithCosts();
};

