// problem link
// https://www.codechef.com/problems/FLOORS?tab=statement


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	   float a, b;
	   cin >> a >> b;
	   a = ceil(a/ 10);
	   b = ceil(b / 10);
	   cout << abs(a-b) << endl;
	}

}
