// Source : https://leetcode.com/problems/hamming-distance/description/
// Author : Jordan Chen
// Date   : 2018-08-14

/********************************************************************************** 
* 
* The Hamming distance between two integers is the number of positions at which the corresponding 
* bits are different.
*
* Given two integers x and y, calculate the Hamming distance.
* 
* Example:
* Input: x = 1, y = 4
* Output: 2

* Explanation:
* 1   (0 0 0 1)
* 4   (0 1 0 0)
*      ↑   ↑
*
* The above arrows point to positions where the corresponding bits are different.
*               
**********************************************************************************/

#include <iostream>

using namespace std;

//solution 1
int hammingDistance(int x, int y)
{
    int dist = 0, n = x ^ y;
    while (n)
    {
        ++dist;
        n &= n - 1;
        cout << n << "\n";
    }
    return dist;
};

//solution 2
int hammingDistance2(int x, int y)
{
    return bitset<32>(x ^ y).count();
};

int main()
{
    cout << hammingDistance(0, 7);
    //return hammingDistance(0, 7);
}