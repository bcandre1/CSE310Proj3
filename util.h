/*
 * util.h
 *
 *  Created on: Nov 19, 2021
 *      Author: bcandre1
 */

#ifndef UTIL_H_
#define UTIL_H_
#include <iostream>
#include <string>
#define V 4

using namespace std;
class util {
public:
	void txtReadin (string textFile);
	void printCurrentGraph(int dist[][V]);
	//void stackToArray (stack <int> fromFile);
};

#endif /* UTIL_H_ */
//stack <int[]> fromFile
