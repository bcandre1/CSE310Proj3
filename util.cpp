/*
 * util.cpp
 *
 *  Created on: Nov 19, 2021
 *      Author: bcandre1
 */

#include "util.h"
#include <string>
#include <fstream>
#include <stack>
#include <vector>
#include "stack.h"

using namespace std;
#define V 4
#define INF 99999

struct point {
	int u;
	int v;
	//int degree;
	struct edge;
};

void util::txtReadin (string textFile) {
	//char buffer[120];
	//stack<int[]> stackFromFile;
	point temp;
	std::vector <point> fromFile;
	int itr = 0;
	ifstream inFile(textFile, ios::in);
	string line;
	while(getline(inFile,line)) {
		char test[line.length()];
		std::vector<int> fromFile;
		//int j = 0;
		int count = 0;
		for(int i=0;i<sizeof(test);i++) {
			test[i] = line[i];
		}
		char * token = strtok(test, " ");
		do {
			if (count == 2) {
				count = 1;
			}
			if (count == 1) {
			temp.u = atoi(token);
			}
			else {
				temp.v = atoi(token);
			}
			count++;
		}while(token == strtok(NULL, " "));
		itr++;

	}
}

void printCurrentGraph(int dist[][V]) {
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (dist[i][j] == INF) {
				cout << "INF";
			}
			else {
				cout << dist[i][j] << "      ";
			}
		}
		cout << endl;
	}
}

/*void stackToArray (stack <int> fromFile) {
	int newArray[10][10];
	for (int i = 0; i < sizeof(fromFile); i++) {
		//newArray[i][i] = fromFile.pop();
	}
}
*/

