// Global Variables
int maxVert = 100;
int maxEdge = 500;

// Function to check if number of edges and vertices is valid
int checkValid(int numVert, int numEdge){
	if(numVert > maxVert || numEdge > maxEdge)
		return 1;
	if(numEdge > numVert * (numVert - 1) / 2)
		return 1;
	return 0;
}

// Function to check if a given input is valid

int checkInput(int adjMatrix[maxVert][maxEdge], int numVert, int numEdge, int x, int y, int z){
	if(z == 0)
		return 1;
	if(x >= numVert || y >= numVert)
		return 1;
	if(x < 0 || y < 0)
		return 1;
	if(adjMatrix[x][y] != 0)
		return 1;
	if(adjMatrix[y][x] != 0)
		return 1;
	return 0;
}

// Function to input adjacency matrix of the graph

void generateAdjacency(int adjMatrix[maxVert][maxEdge], int numVert, int numEdge){
	printf("Vertices are numbered v%d to v%d\n",0,numVert - 1);
	printf("Enter the %d edges in the following space separate format with a newline for each edge : \nx y z (x is starting vertex, y is ending vertex, z is edge cost", numEdge);
	int i = 0;
	for(; i < numEdge; ++i){
		int x, y, z;
	
		scanf("%d%d%d",&x, &y, &z);
		
		int errorFlag = checkInput(adjMatrix,numVert,numEdge,x,y,z);
		if( errorFlag == 1 ){
			printf("Error in input, enter the edge again...\nPossible error reasons : Zero edge value / Invalid coordinates / Parallel edges detected");
			i--;
			continue;
		}
		
		adjMatrix[x][y] = z;
		adjMatrix[y][x] = z;
	}
}

// Function to print adjacency matrix 
void printAdjacency(int adjMatrix[maxVert][maxEdge], int numVert){
	printf("\n\n Adjacency Matrix : \n\n");
	int i = 0, j = 0;
	for(i = 0; i < numVert; ++i){
		for(j = 0; j < numVert; ++j)
			printf("%d ",adjMatrix[i][j]);
		printf("\n");
	}
}