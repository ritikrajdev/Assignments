#include <iostream>
#include <vector>
using namespace std;
struct Edge {
	int src, dest;
};
class Graph
{
public:
	vector<vector<int>> adjList;
	Graph(vector<Edge> const &edges, int n)
	{
		adjList.resize(n);
		for (Edge edge: edges)
		{
			int src = edge.src;
			int dest = edge.dest;

			adjList[src].push_back(dest);
			adjList[dest].push_back(src);
		}
	}
};
void printPath(vector<int> const &path)
{
	for (int i: path) {
		cout << i << ' ';
	}
	cout << endl;
}
void hamiltonianPaths(Graph const &graph, int v, vector<bool> &visited, vector<int> &path, int n)
{
	if (path.size() == n)
	{
		printPath(path);
		return;
	}
	for (int w: graph.adjList[v])
	{
		if (!visited[w])
		{
			visited[w] = true;
			path.push_back(w);
			hamiltonianPaths(graph, w, visited, path, n);
			visited[w] = false;
			path.pop_back();
		}
	}
}
void findHamiltonianPaths(Graph const &graph, int n)
{
	for (int start = 0; start < n; start++)
	{
		vector<int> path;
		path.push_back(start);
		vector<bool> visited(n);
		visited[start] = true;
		hamiltonianPaths(graph, start, visited, path, n);
	}
}
int main()
{
	vector<Edge> edges = {
		{0, 1}, {0, 2}, {0, 3}, {1, 2}, {1, 3}, {2, 3}
	};
	int n = 4;
	Graph graph(edges, n);
	findHamiltonianPaths(graph, n);
	return 0;
}