#include <iostream>
#include <map>
#include <queue>
#include <list>
 
using namespace std;
 
template <typename T>
class Graph
{
    map<T, list <pair <T, int>>> l; // adjacency list
public:
    void add_edge(T node, T neighbour, int distance = 1, bool is_directed = false)
    {
    
        l[node].push_back(make_pair(neighbour, distance));
 
        if(!is_directed)
            l[neighbour].push_back(make_pair(node, distance));
    }
 
    void print_graph()
    {

        for(auto p : l)
        {
           
            T node = p.first;
            list <pair <T, int>> neighbour = p.second;
 
            cout << "Neighbours of: " << node << " are:\n";
 
            for(auto nbr : neighbour)
            {
                T dest = nbr.first;
                int distance = nbr.second;
 
                cout << "Neighbour: " << dest << " " << " Distance: "<< distance << endl;
            }
            cout << endl;
        }
    }
 
    void bfs(T src)
    {
        map <T, bool> visited;
        queue <T> q;

        q.push(src);
        visited[src] = true;
 
        while(!q.empty())
        {

            T node = q.front();
            q.pop();
            cout << node << endl;
 
            for(pair <T, int> nbr : l[node])
            {

                if(!visited[nbr.first])
                {

                    q.push(nbr.first);
                    visited[nbr.first] = true;
                }
            }
        }
 
        return;
    }
};
 
 
 
int main()
{
    Graph <string> g;
     
    g.add_edge("A", "B");
    g.add_edge("A", "D");
    g.add_edge("B", "C");
    g.add_edge("B", "F");
    g.add_edge("C", "E");
    g.add_edge("C", "G");
    g.add_edge("G", "E");
    g.add_edge("E", "B");
    g.add_edge("E", "F");
    g.add_edge("F", "A");
    g.add_edge("D", "F");
    
 
    g.bfs("A");
 
    return 0;
}
