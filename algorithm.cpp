/*
 * algorithm.cpp
 *
 *  Created on: Nov 19, 2021
 *      Author: bcandre1
 */

#include "algorithm.h"
#include <iostream>
#include <vector>

#define V 4
#define INF 99999

using namespace std;


//Read in from text file, push to stack
/*void floydWarshall (int graph[][]) { //shortest
	int dist[V][V], i, j, k;
	for (i = 0;i < V; i++) {
		for(j = 0; j < V; j++) {
			dist[i][j] = graph[i][j];
		}
	}
	for(k=0;k<V;k++) {
		for(i = 0;i < V; i++) {
			for (j = 0; j < V; j++) {
				if ((dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j]) != INF && dist[i][j] != INF)){
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
}
*/

/*void greedyAlgorithm (int V) { // not sure what v is
	//malloc
	vector<int> ans;

	for(int i = n - 1; i >= 0; i--) {

	}

}
*/
