/*
 * main.cpp
 *
 *  Created on: Oct 24, 2016
 *      Author: Nathaniel
 */

#include <iostream>

using namespace std;


int main() {

	int numOfCases, credit, items;
	int x, y;
	x = y = 0;

	cin >> numOfCases; // Read in the number of test cases

	for ( int i = 0; i < numOfCases; i++ ) {

		cin >> credit;
		cin >> items;

		int list[items];

		// Reads the item prices into list array
		for ( int j = 0; j < items; j++ ) {
			cin >> list[j];
		}


		bool valFound = false;

		// Cycles through each combination until the sum of two equals the
		// credit amount
		while ( !valFound) {
			while ( !valFound ) {
				y++;
				if ( list[x - 1] + list[y - 1] == credit )
					valFound = true;
			}
			x++;
		}


		cout << "Case #" << i << ": " << x << " " << y << endl;
	}

	return 0;
}


