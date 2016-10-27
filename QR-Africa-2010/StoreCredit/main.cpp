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

	cin >> numOfCases; // Read in the number of test cases

	cout << numOfCases << endl;

	for ( int i = 1; i <= numOfCases; i++ ) {

		cin >> credit;
		cin >> items;

		cout << credit << " " << items << endl;

		int list[items];

		// Reads the item prices into list array
		for ( int j = 0; j < items; j++ ) {
			cin >> list[j];
			cout << list[j] << " ";
		}


		bool valFound = false;

		// Cycles through each combination until the sum of two equals the
		// credit amount
		for ( x = 0; x < items; x++ ) {
			for ( y = x + 1; y < items; y++ ) {

				cout << "Cmp " << list[x] << " " << list[y] << endl;
				cout << (list[x] + list[y]) << endl;

				if ( (list[x] + list[y]) == credit ) {
					valFound = true;
					break;
				}
			}

			if ( valFound )
				cout << "val found" << endl;
				valFound = false;
				break;
		}

		cout << "Case #" << i << ": " << x + 1 << " " << y + 1 << endl << endl;
	}

	return 0;
}


