/*****************************************************************************/
// Reverse Words
/******************************************************************************
    Author: Nathaniel Hoefer
    Email: Nathaniel.D.Hoefer@gmail.com


Problem

Given a list of space separated words, reverse the order of the words. Each line
of text contains L letters and W words. A line will only consist of letters and
space characters. There will be exactly one space character between each pair of
consecutive words.

Input

The first line of input gives the number of cases, N.
N test cases follow. For each test case there will a line of letters and space
characters indicating a list of space separated words. Spaces will not appear at
the start or end of a line.

Output

For each test case, output one line containing "Case #x: " followed by the list
of words in reverse order.

Limits

Small dataset

N = 5
1 ≤ L ≤ 25

Large dataset

N = 100
1 ≤ L ≤ 1000

*/


#include <cstring>
#include <string.h>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>

using namespace std;

// Common functions
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sz size()
#define rep(i,m) for(int i=0;i<(int)(m);i++)
#define rep2(i,n,m) for(int i=n;i<(int)(m);i++)
#define For(it,c) for(__typeof(c.begin()) it=c.begin();it!=c.end();++it)
#define mem(a,b) memset(a,b,sizeof(a))
#define mp make_pair
#define dot(a,b) ((conj(a)*(b)).X)
#define X real()
#define Y imag()
#define length(V) (hypot((V).X,(V).Y))
#define vect(a,b) ((b)-(a))
#define cross(a,b) ((conj(a)*(b)).imag())
#define normalize(v) ((v)/length(v))
#define rotate(p,about,theta) ((p-about)*exp(point(0,theta))+about)
#define pointEqu(a,b) (comp(a.X,b.X)==0 && comp(a.Y,b.Y)==0)

// Common type definitions
typedef stringstream ss;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<vector<int> > vii;
typedef long long ll;
typedef long double ld;
typedef complex<double> point;
typedef pair<point, point> segment;
typedef pair<double, point> circle;
typedef vector<point> polygon;

// Constants
const int oo = (int) 1e9;
const double PI = 2 * acos(0);
const double eps = 1e-9;

// Choose small or large dataset
//#define SMALL
//#define LARGE

int main() {

	// Test input
	freopen("input.txt", "rt", stdin);

	// Small dataset input
#ifdef SMALL
	freopen("A-small-practice.in","rt",stdin);
	freopen("A-small.out","wt",stdout);
#endif

	// Large dataset input
#ifdef LARGE
	freopen("A-large-practice.in","rt",stdin);
	freopen("A-large.out","wt",stdout);
#endif

	int N;
	string input;
	string output = "";
	string word;
	int space, start;
	space = start = 0;

	cin >> N;

	for ( int i = 1; i <= N; i++ ) {

		getline(cin, input);

		while ( space >= 0 ) {

			space = input.find(" ");

			if ( space >= 0) {
				output += input.substr(start, space) + " ";
				start += space + 1;
			} else {
				output += input.substr(start, input.size());
			}

			cout << "Case #" << i << ": " << output << endl;

		}




	}






	return 0;
}


