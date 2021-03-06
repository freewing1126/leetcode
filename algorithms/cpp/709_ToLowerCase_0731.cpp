// Source : https://leetcode.com/problems/to-lower-case
// Author : Jordan Chen
// Date   : 2018-07-31

/********************************************************************************** 
* 
* Implement function ToLowerCase() that has a string parameter str, and returns 
* the same string in lowercase.
* 
* Example 1:
* Input: "Hello"
* Output: "hello"
*
* Example 2:
* Input: "here"
* Output: "here"
*               
**********************************************************************************/

#include <stdio.h>
#include <iostream>

using namespace std;

string toLowerCase(string str) {        
	for (char& c : str) {
		if (c >= 'A' && c <= 'Z') c += 32;
		//if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
	}
	return str;
}

int main(){
	string s;
	s = "HELLO";
	cout << toLowerCase(s);
}