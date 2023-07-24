// C++ program to demonstrate working of
// prev_permutation()
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	string str = "4321";
	if (prev_permutation(str.begin(), str.end()))
		cout << str;
}
