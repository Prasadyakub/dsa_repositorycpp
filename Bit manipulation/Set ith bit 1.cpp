
    /* 
     

Problem statement

You are given two integers N and i. You need to make ith bit of binary representation of N to 1 and return the updated N.
Counting of bits start from 0 from right to left.



Sample Input 1 :
4 1
Sample Output 1 :
6
Sample Input 2 :
4 4
Sample Output 2 :
20
 */



#include <iostream>
#include "Solution.h"
using namespace std;

int turnOnIthBit(int n, int i){
  // kth bit of n is being set by this operation
    return ((1 << i) | n);
}

int main() {
	int n, i;

	cin >> n >> i;
	
	cout<< turnOnIthBit(n, i) <<endl;
		
	return 0;
}
