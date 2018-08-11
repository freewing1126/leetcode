// Source : https://leetcode.com/problems/unique-morse-code-words/description/
// Author : Jordan Chen
// Date   : 2018-08-11

/********************************************************************************** 
* 
* International Morse Code defines a standard encoding where each letter is mapped
* to a series of dots and dashes, as follows: "a" maps to ".-", "b" maps to "-...",
* "c" maps to "-.-.", and so on.
* 
* Example:
* Input: words = ["gin", "zen", "gig", "msg"]
* Output: 2
* Explanation: 
* The transformation of each word is:
* "gin" -> "--...-."
* "zen" -> "--...-."
* "gig" -> "--...--."
* "msg" -> "--...--."
*
* There are 2 different transformations, "--...-." and "--...--.".
*               
**********************************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
	vector<string> d = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
	unordered_set<string> s;
	for (auto word : words)
	{
		string code;
		for (auto c : word)
			code = code + d[c - 'a'];

		s.insert(code);
	}
	return s.size();
};

int main()
{
	vector<string> words = {"gin", "zen", "gig", "msg"};
	cout << uniqueMorseRepresentations(words);
	return uniqueMorseRepresentations(words);
}