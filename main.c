
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define DEBUG_FLAG 0

#include "GraphMatrix.c"
// #include "Graph.c"
// #include "Game.c"


typedef enum MST_MODE {
	PRIMS = 0,
	KRUSKALS = 1
} MST_MODE;

int main ()
{
	GraphMatrix* graph = create_graph(10);
	addRandomWeights(graph, 250);
	printGraph(graph);
	createMSTPrim(graph, 0);
	printGraph(graph);
// 	GraphList* graph = init_graph();
// randomizeGraph(graph, 5, 250);
// printListGraph(graph);
// createMSTKruskal(graph);
// printListGraph(graph);
	return 0;
}