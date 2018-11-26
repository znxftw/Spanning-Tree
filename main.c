#include <stdio.h>
#include "kruskal.c"
#include "prims.c"
#include "defines.c"

int main(){
	
	//
	int adjMatrix[maxVert][maxVert] = {0}, numVert, numEdge;
	
	// Input
	printf("Number of vertices and number of edges : ");
	scanf("%d%d",&numVert, &numEdge);
	
	// Check for overflow
	int errorFlag = checkValid(numVert, numEdge);
	if( errorFlag == 1 ){
		printf("Invalid number of vertices %d (Maximum %d) or edges %d (Maximum %d), exiting...", numVert, maxVert, numEdge, maxEdge);
		exit(0);
	}
	
	// Generate adjacency matrix and accept inputs from user
	generateAdjacency(adjMatrix, numVert, numEdge);
	
	
	// Debugging
	// printAdjacency(adjMatrix, numVert);
	
	// Run the algorithm 
	int choice;
	while(1){
		printf("1.Prim's Algorithm\n2.Kruskal's Algorithm\n3.Exit");
		scanf("%d", &choice);
		switch(choice){
			case 1 : runPrims(adjMatrix);
					 break;
			case 2 : runKruskal(adjMatrix);
					 break;
			case 3 : break;
			default: printf("Unknown option \n");
		}
		if( choice == 3 )
			break;
	}
	return 0;
}