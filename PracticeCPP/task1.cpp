/* 
https://edabit.com/challenges

Easy tasks

*/
#include <iostream>
#include <algorithm>
#include <cassert>
#include <vector>
#include <string>
#include "task1.h"
using namespace std;


void tasks::task1()
{
	std::cout << "Hello Task1!" << std::endl;
}

/* Task 1_1 - Absolute Sum

Take an array of integers (positive or negative or both) and return the sum of the absolute value of each element.

Examples
getAbsSum([2, -1, 4, 8, 10]) ➞ 25
getAbsSum([-3, -4, -10, -2, -3]) ➞ 22
getAbsSum([2, 4, 6, 8, 10]) ➞ 30
getAbsSum([-1]) ➞ 1

Notes
The term "absolute value" means to remove any negative sign in front of a number, and to think of all numbers as positive (or zero).
All the elements in the given array are integers.

int getAbsSum(std::vector<int> arr) {
int sum=    jkjjhkj
}

Describe(get_abs_sum)
{
  It(test1){Assert::That(getAbsSum({2, -1, -3, 4, 8}), Equals(18));}
  It(test2){Assert::That(getAbsSum({-1}), Equals(1));}
  It(test3){Assert::That(getAbsSum({-1, -3, -5, -4, -10, 0}), Equals(23));}
  It(test4){Assert::That(getAbsSum({8, 9, 10, 32, 101, -10}), Equals(170));}
  It(test5){Assert::That(getAbsSum({500}), Equals(500));}
};

*/

int getAbsSum(const vector<int> &arr) {
	int sum = 0;
	for (auto &x : arr) {
		sum += abs(x);
	}
	return sum;
}

void test_task1_1() {
	assert(getAbsSum({ 2, -1, -3, 4, 8 }) == 18);
	assert(getAbsSum({ -1 }) == 1);
	assert(getAbsSum({ -1, -3, -5, -4, -10, 0 }) == 23);
	assert(getAbsSum({ 8, 9, 10, 32, 101, -10 }) == 170);
	assert(getAbsSum({ 500 }) == 500);
	cout << "task1_1 test finished" << endl;
}

void tasks::task1_1()
{
	cout << "Hello Task1_1!" << endl;
	vector <int> arr = { -1,2,-3,4,-5,6 };
	cout << getAbsSum(arr) << endl;
	test_task1_1();
}

/* Task 1_2 - Count Syllables
 
Create a function that counts the number of syllables a word has. Each syllable is separated with a dash -.

Examples
numberSyllables("buf-fet") ➞ 2
numberSyllables("beau-ti-ful") ➞ 3
numberSyllables("mon-u-men-tal") ➞ 4
numberSyllables("on-o-mat-o-poe-ia") ➞ 6

Notes
Don't forget to return the result.
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

int numberSyllables(std::string word) {

}

Describe(number_of_syllables)
{
  It(test1){Assert::That(numberSyllables("buf-fet"), Equals(2));}
  It(test2){Assert::That(numberSyllables("beau-ti-ful"), Equals(3));}
	It(test3){Assert::That(numberSyllables("mon-u-men-tal"), Equals(4));}
	It(test4){Assert::That(numberSyllables("on-o-mat-o-poe-ia"), Equals(6));}
	It(test5){Assert::That(numberSyllables("o-ver-ly"), Equals(3));}
	It(test6){Assert::That(numberSyllables("pas-try"), Equals(2));}
	It(test7){Assert::That(numberSyllables("flu-id"), Equals(2));}
	It(test8){Assert::That(numberSyllables("syl-la-ble"), Equals(3));}
};

*/

int numberSyllables(const string &word) {
	int syllablesCount = 0;
	bool onSyllable = false;
	for (int i = 0; i < word.size(); i++) {
		if ((word[i] != '-') && !onSyllable)
		{
			onSyllable = true;
			syllablesCount++;
		} else if ((word[i] == '-') && onSyllable)
			onSyllable = false;
	}
	return syllablesCount;
}

void test_task1_2() {
	assert(numberSyllables("buf-fet") == 2);
	assert(numberSyllables("beau-ti-ful") == 3);
	assert(numberSyllables("mon-u-men-tal") == 4);
	assert(numberSyllables("on-o-mat-o-poe-ia") == 6);
	assert(numberSyllables("o-ver-ly") == 3);
	assert(numberSyllables("pas-try") == 2);
	assert(numberSyllables("flu-id") == 2);
	assert(numberSyllables("syl-la-ble") == 3);
	assert(numberSyllables("s") == 1);
	assert(numberSyllables("") == 0);
	assert(numberSyllables("-") == 0);
	assert(numberSyllables("---") == 0);
	cout << "task1_2 test finished" << endl;
}

void tasks::task1_2()
{
	cout << "Hello Task1_2!" << endl;
	cout << numberSyllables("-strin--ggg----oo---t-oo-") << endl;
	test_task1_2();
}

/* Task 1_3 - Burrrrrrrp

Create a function that returns the string "Burp" with the amount of "r's" determined by the input parameters of the function.

Examples
longBurp(3) ➞ "Burrrp"
longBurp(5) ➞ "Burrrrrp"
longBurp(9) ➞ "Burrrrrrrrrp"

Notes
Expect num to always be >= 1.
Remember to use a capital "B".
Don't forget to return the result.

std::string longBurp(int num) {

}

Describe(Burrrrrp)
{
	It(test1){Assert::That(longBurp(3), Equals("Burrrp"));}
	It(test2){Assert::That(longBurp(9), Equals("Burrrrrrrrrp"));}
	It(test3){Assert::That(longBurp(10), Equals("Burrrrrrrrrrp"));}
	It(test4){Assert::That(longBurp(13), Equals("Burrrrrrrrrrrrrp"));}
	It(test5){Assert::That(longBurp(18), Equals("Burrrrrrrrrrrrrrrrrrp"));}
	It(test6){Assert::That(longBurp(1), Equals("Burp"));}
};

*/

string longBurp(int num) {
	string result = "Bu";
	for (int i = 0; i < num; i++) {
		result += "r";
	}	
	result += "p";
	return result;
}

void test_task1_3() {
	assert(longBurp(3) == "Burrrp");
	assert(longBurp(9) == "Burrrrrrrrrp");
	assert(longBurp(10) == "Burrrrrrrrrrp");
	assert(longBurp(13) == "Burrrrrrrrrrrrrp");
	assert(longBurp(18) == "Burrrrrrrrrrrrrrrrrrp");
	assert(longBurp(1) == "Burp");
	cout << "task1_3 test finished" << endl;
}

void tasks::task1_3()
{
	cout << "Hello Task1_3!" << endl;
	cout << longBurp(5) << endl;
	test_task1_3();
}

/* Task 1_4 - Broken Bridge

Create a function which validates whether a bridge is safe to walk on (i.e. has no gaps in it to fall through).

Examples
isSafeBridge("####") ➞ true
isSafeBridge("## ####") ➞ false
isSafeBridge("#") ➞ true

Notes
You can expect the bridge's ends connecting it to its surrounding.

bool isSafeBridge(std::string s) {

}

Describe(broken_bridge)
{
It(test1){Assert::That(isSafeBridge("####"), Equals(true));}
It(test2){Assert::That(isSafeBridge("## ####"), Equals(false));}
It(test3){Assert::That(isSafeBridge("#"), Equals(true));}
It(test4){Assert::That(isSafeBridge("# #"), Equals(false));}
};

*/

bool isSafeBridge(const string &s) {
	if (s.find(" ",0) != string::npos)
		return false;
	else
		return true;

}

void test_task1_4() {
	assert(isSafeBridge("####") == true);
	assert(isSafeBridge("## ####") == false);
	assert(isSafeBridge("#") == true);
	assert(isSafeBridge("# #") == false);
	assert(isSafeBridge(" #") == false);
	assert(isSafeBridge("") == true);
	assert(isSafeBridge("# ") == false);

	cout << "task1_4 test finished" << endl;
}

void tasks::task1_4()
{
	cout << "Hello Task1_4!" << endl;
	cout << isSafeBridge("") << endl;
	test_task1_4();
}

/* Task 1_5 - The Million Dollar Fence

Your task is to create a fence worth $1 million. You are given the price of the material (per character), meaning the length of the fence will change depending on the cost of the material.
Create a function which constructs this pricey pricey fence, using the letter "H" to build.
constructFence("$50,000") ➞ "HHHHHHHHHHHHHHHHHHHHHHHHHHHH"
// 20 fence posts were set up ($1,000,000 / $50,000 = 20)

Examples
constructFence("$50,000") ➞ "HHHHHHHHHHHHHHHHHHHHHHHHHHHH"
constructFence("$100,000") ➞ "HHHHHHHHHH"
constructFence("$1,000,000") ➞ "H"

Notes
You are ordered to spend all of your $1,000,000 budget...

std::string constructFence(std::string price) {

}

Describe(constructFence_){
It(test1){Assert::That(constructFence("$50,000"), Equals("HHHHHHHHHHHHHHHHHHHH"));}
It(test2){Assert::That(constructFence("$100,000"), Equals("HHHHHHHHHH"));}
It(test3){Assert::That(constructFence("$1,000,000"), Equals("H"));}
It(test4){Assert::That(constructFence("$500,000"), Equals("HH"));}
It(test5){Assert::That(constructFence("$20,000"), Equals("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH"));}
It(test6){Assert::That(constructFence("$10,000"), Equals("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH"));}
It(test7){Assert::That(constructFence("$5000"), Equals("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH"));}
It(test8){Assert::That(constructFence("$1000"), Equals("HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH"));}
};

*/

string constructFence(const string &price) {
	// делать модификацию строки или копировать новую к себе?
	// проверять regex каждый символ?
	// переводить каждый символ в int через stoi + try catch?
	// проверять каждый символ через набор допустимых символов вручную?
	
	cout << "price = " << price << endl;
	int fencePartCost = 0;
	string fence = "";
	string pr = price;
	for (int i = 0; i < pr.length(); i++) {
		try {
			string str;
			str += pr[i];
			//cout << "str=" << str << endl;
			int num = stoi(str);
			//cout << num << endl;
		}
		catch (const invalid_argument& err) {
			//cout << "can't be converted! " << endl;
			pr.replace(i,1,"");
			i--;
		}
	}
	//cout << "price=" << price << " length=" << price.length() << endl;
	//cout << "pr=" << pr << " length=" << pr.length() << endl;

	// 0?
	// >1000000
	try {
		fencePartCost = stoi(pr);
	}
	catch (const invalid_argument& err) {
		cout << "This is not a right amount " << endl;
		return fence;
	}

	if (fencePartCost <= 0) {
		return fence;
	}

	int fencePartsCount = 1000000 / fencePartCost;
	//cout << "fencePartsCount=" << fencePartsCount;

	for (int i = 0; i < fencePartsCount; i++) {
		fence.append("H");
	}
	//cout << fence << endl;
	cout << "fence = " << fence << endl;
	return fence;
}

void test_task1_5() {
	assert(constructFence("$50,000") == "HHHHHHHHHHHHHHHHHHHH");
	assert(constructFence("$100,000") == "HHHHHHHHHH");
	assert(constructFence("$1,000,000") == "H");
	assert(constructFence("$500,000") == "HH");
	assert(constructFence("$20,000") == "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");
	assert(constructFence("$10,000") == "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");
	assert(constructFence("$5000") == "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");
	assert(constructFence("$1000") == "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHHH");
	assert(constructFence("$2,000,000") == "");
	assert(constructFence("$0") == "");
	cout << "task1_5 test finished" << endl;
}

void tasks::task1_5()
{
	cout << "Hello Task1_5!" << endl;
	cout << constructFence("$1,000,000") << endl;
	cout << constructFence("$,,,,") << endl;
	test_task1_5();
}

/* Task 1_6 - Triangular Number Sequence

This Triangular Number Sequence is generated from a pattern of dots that form a triangle. The first 5 numbers of the sequence, or dots, are:
1, 3, 6, 10, 15
This means that the first triangle has just one dot, the second one has three dots, the third one has 6 dots and so on.
Write a function that gives the number of dots with its corresponding triangle number of the sequence.

Examples
triangle(1) ➞ 1
triangle(6) ➞ 21
triangle(215) ➞ 23220

Notes
Check the Resources for info on triangular number sequence.

int triangle(int n) {

}

Describe(tests)
{
  It(test1){Assert::That(triangle(1), Equals(1));}
  It(test2){Assert::That(triangle(2), Equals(3));}
  It(test3){Assert::That(triangle(3), Equals(6));}
  It(test4){Assert::That(triangle(8), Equals(36));}
  It(test5){Assert::That(triangle(2153), Equals(2318781));}
};

*/

int triangle(int n) {
	int result = 0.5 * n * (n + 1);
	return result;
}

void test_task1_6() {
	assert(triangle(1) == 1);
	assert(triangle(2) == 3);
	assert(triangle(3) == 6);
	assert(triangle(8) == 36);
	assert(triangle(2153) == 2318781);
	cout << "task1_6 test finished" << endl;
}

void tasks::task1_6()
{
	cout << "Hello Task1_6!" << endl;
	cout << triangle(10) << endl;
	test_task1_6();
}

/* Task 1_7 - Default Mood

Create a function that takes in a current mood and return a sentence in the following format: "Today, I am feeling {mood}". However, if no argument is passed, return "Today, I am feeling neutral".

Examples
moodToday("happy") ➞ "Today, I am feeling happy"
moodToday("sad") ➞ "Today, I am feeling sad"
moodToday() ➞ "Today, I am feeling neutral"

Notes
Check the Resources tab for some helpful information.

std::string moodToday(std::string mood) {

}

Describe(mood_string)
{
	It(test1){Assert::That(moodToday("happy"), Equals("Today, I am feeling happy"));}
	It(test2){Assert::That(moodToday("sad"), Equals("Today, I am feeling sad"));}
	It(test3){Assert::That(moodToday("very happy"), Equals("Today, I am feeling very happy"));}
	It(test4){Assert::That(moodToday("rather empty inside"), Equals("Today, I am feeling rather empty inside"));}
	It(test5){Assert::That(moodToday("confused"), Equals("Today, I am feeling confused"));}
	It(test6){Assert::That(moodToday(), Equals("Today, I am feeling neutral"));}
};

*/

string moodToday(const string &mood) {
	if (mood == "")
		return "Today, I am feeling neutral";
	else 
		return "Today, I am feeling " + mood;
}

void test_task1_7() {
	assert(moodToday("happy") == "Today, I am feeling happy");
	assert(moodToday("sad") == "Today, I am feeling sad");
	assert(moodToday("very happy") == "Today, I am feeling very happy");
	assert(moodToday("rather empty inside") == "Today, I am feeling rather empty inside");
	assert(moodToday("confused") == "Today, I am feeling confused");
	assert(moodToday("") == "Today, I am feeling neutral");
	cout << "task1_7 test finished" << endl;
}

void tasks::task1_7()
{
	cout << "Hello Task1_7!" << endl;
	cout << moodToday("takoje") << endl;
	test_task1_7();
}

/* Task 1_8 - Pair Management

Given a pair, return its FIRST value and its SECOND value. Pair will be < int, int >.

Examples
pairs(std::make_pair(1, 2)) ➞ { 1, 2 }
pairs(std::make_pair(51, 21)) ➞ { 51, 21 }
pairs(std::make_pair(512124, 215)) ➞ { 512124, 215 }

Notes
N/A

std::vector<int> pairs(std::pair <int,int> p) {

}

Describe(pair_management)
{
	It(test1){Assert::That(pairs(std::make_pair(1, 2)), Equals(std::vector<int>({1, 2})));}
	It(test2){Assert::That(pairs(std::make_pair(21, 82)), Equals(std::vector<int>({21, 82})));}
	It(test3){Assert::That(pairs(std::make_pair(4213, 526)), Equals(std::vector<int>({4213, 526})));}
};

*/

vector<int> pairs(const pair <int, int> &p) {
	vector <int> result = {};
	result.push_back(p.first);
	result.push_back(p.second);
	return result;
}

void test_task1_8() {
	assert(pairs(make_pair(1, 2)) == vector<int>({ 1, 2 }));
	assert(pairs(make_pair(21, 82)) == vector<int>({ 21, 82 }));
	assert(pairs(make_pair(4213, 526)) == vector<int>({ 4213, 526 }));
	cout << "task1_8 test finished" << endl;
}

void tasks::task1_8()
{
	cout << "Hello Task1_8!" << endl;
	for (auto x : pairs(make_pair(1, 2))) 
	{
		cout << x << endl;
	}
	
	test_task1_8();
}

/* Task 1_9 - Sort Numbers in Ascending Order

Create a function that takes an array of numbers and returns a new array, sorted in ascending order (smallest to biggest).

Sort numbers array in ascending order.
If the function's argument is null, an empty array, or undefined; return an empty array.
Return a new array of sorted numbers.

Examples
sortNumsAscending([1, 2, 10, 50, 5]) ➞ [1, 2, 5, 10, 50]
sortNumsAscending([80, 29, 4, -95, -24, 85]) ➞ [-95, -24, 4, 29, 80, 85]
sortNumsAscending([]) ➞ []

Notes
Test input can be positive or negative.

std::vector<int> sortNumsAscending(std::vector<int> arr) {

}

Describe(sort_nums_ascending)
{
  It(test1){Assert::That(sortNumsAscending({1, 2, 10, 50, 5}), Equals(std::vector<int>({1, 2, 5, 10, 50})));}
  It(test2){Assert::That(sortNumsAscending({80, 29, 4, -95, -24, 85}), Equals(std::vector<int>({-95, -24, 4, 29, 80, 85})));}
  It(test3){Assert::That(sortNumsAscending({47, 51, -17, -16, 91, 47, -85, -8, -16, -27}), Equals(std::vector<int>({-85, -27, -17, -16, -16, -8, 47, 47, 51, 91})));}
  It(test4){Assert::That(sortNumsAscending({-51, -73, 65, 69, -76, 74, -14}), Equals(std::vector<int>({-76, -73, -51, -14, 65, 69, 74})));}
  It(test5){Assert::That(sortNumsAscending({45, 98, 35, 65, 97, 21, 33}), Equals(std::vector<int>({21, 33, 35, 45, 65, 97, 98})));}
  It(test6){Assert::That(sortNumsAscending({-23, -69, -54, -2, -32}), Equals(std::vector<int>({-69, -54, -32, -23, -2})));}
  It(test7){Assert::That(sortNumsAscending({-21, -9, -96}), Equals(std::vector<int>({-96, -21, -9})));}
  It(test8){Assert::That(sortNumsAscending({0}), Equals(std::vector<int>({0})));}
};

*/

vector<int> sortNumsAscending(vector<int> arr) {
	sort(arr.begin(), arr.end());
	return arr;
}

void test_task1_9() {
	assert(sortNumsAscending({ 1, 2, 10, 50, 5 }) == vector<int>({ 1, 2, 5, 10, 50 }));
	assert(sortNumsAscending({ 80, 29, 4, -95, -24, 85 }) == vector<int>({ -95, -24, 4, 29, 80, 85 }));
	assert(sortNumsAscending({ 47, 51, -17, -16, 91, 47, -85, -8, -16, -27 }) == vector<int>({ -85, -27, -17, -16, -16, -8, 47, 47, 51, 91 }));
	assert(sortNumsAscending({ -51, -73, 65, 69, -76, 74, -14 }) == vector<int>({ -76, -73, -51, -14, 65, 69, 74 }));
	assert(sortNumsAscending({ 45, 98, 35, 65, 97, 21, 33 }) == vector<int>({ 21, 33, 35, 45, 65, 97, 98 }));
	assert(sortNumsAscending({ -23, -69, -54, -2, -32 }) == vector<int>({ -69, -54, -32, -23, -2 }));
	assert(sortNumsAscending({ -21, -9, -96 }) == vector<int>({ -96, -21, -9 }));
	assert(sortNumsAscending({ 0 }) == vector<int>({ 0 }));
	cout << "task1_9 test finished" << endl;
}

void tasks::task1_9()
{
	cout << "Hello Task1_9!" << endl;
	for (auto x : sortNumsAscending(vector<int>({ 1, 2, 5, 10, 50 })))
	{
		cout << x << endl;
	}
	test_task1_9();
}

/* Task 1_10 - Maskify the String

Create a function that takes an array of numbers and returns a new array, sorted in ascending order (smallest to biggest).
Usually when you sign up for an account to buy something, your credit card number, phone number or answer to a secret question is partially obscured in some way. Since someone could look over your shoulder, you don't want that shown on your screen. Hence, the website masks these strings.
Your task is to create a function that takes a string, transforms all but the last four characters into "#" and returns the new masked string.

Examples
maskify("4556364607935616") ➞ "############5616"
maskify("64607935616") ➞ "#######5616"
maskify("1") ➞ "1"
maskify("") ➞ ""

Notes
The maskify function must accept a string of any length.
An empty string should return an empty string (fourth example above).

std::string maskify(std::string str) {

}

Describe(the_maskify)
{
  It(test1){Assert::That(maskify("4556364607935616"), Equals("############5616"));}
  It(test2){Assert::That(maskify("64607935616"), Equals("#######5616"));}
  It(test3){Assert::That(maskify("1"), Equals("1"));}
  It(test4){Assert::That(maskify(""), Equals(""));}
  It(test5){Assert::That(maskify("tBy>L/cMe+?<j:6n;C~H"), Equals("################;C~H"));}
  It(test6){Assert::That(maskify("12"), Equals("12"));}
  It(test7){Assert::That(maskify("8Ikhlf6yoxPOwi5cB014eWbRumj7vJ"), Equals("##########################j7vJ"));}
  It(test8){Assert::That(maskify("123"), Equals("123"));}
  It(test9){Assert::That(maskify(")E$aCU=e\"_"), Equals("######=e\"_"));}
  It(test10){Assert::That(maskify("2673951408"), Equals("######1408"));}
  It(test11){Assert::That(maskify("1234"), Equals("1234"));}
};

*/

string maskify(const string &str) {
	string maskedStr = str;
	for (int i = 0; i < int (maskedStr.length() - 4); i++) {
		maskedStr.replace(i, 1, "#");
	}
	return maskedStr;
}

void test_task1_10() {
	assert(maskify("4556364607935616") == "############5616");
	assert(maskify("64607935616") == "#######5616");
	assert(maskify("1") == "1");
	assert(maskify("") == "");
	assert(maskify("tBy>L/cMe+?<j:6n;C~H") == "################;C~H");
	assert(maskify("12") == "12");
	assert(maskify("8Ikhlf6yoxPOwi5cB014eWbRumj7vJ") == "##########################j7vJ");
	assert(maskify("123") == "123");
	assert(maskify(")E$aCU=e\"_") == "######=e\"_");
	assert(maskify("2673951408") == "######1408");
	assert(maskify("1234") == "1234");
	cout << "task1_10 test finished" << endl;
}

void tasks::task1_10()
{
	cout << "Hello Task1_10!" << endl;
	cout << maskify("5345345") << endl;
	test_task1_10();
}

/* Task 1_11 - Eliminate Odd Numbers within an Array

Create a function that takes an array of numbers and returns only the even values.

Examples
noOdds([1, 2, 3, 4, 5, 6, 7, 8]) ➞ [2, 4, 6, 8]
noOdds([43, 65, 23, 89, 53, 9, 6]) ➞ [6]
noOdds([718, 991, 449, 644, 380, 440]) ➞ [718, 644, 380, 440]

Notes
Return all even numbers in the order they were given.
All test cases contain valid numbers ranging from 1 to 3000.

std::vector<int> noOdds(std::vector<int> arr) {

}

Describe(no_odds)
{
  It(test1){Assert::That(noOdds({1, 2, 3, 4, 5, 6, 7, 8}), Equals(std::vector<int>({2, 4, 6, 8})));}
  It(test2){Assert::That(noOdds({43, 65, 23, 89, 53, 9, 6}), Equals(std::vector<int>({6})));}
  It(test3){Assert::That(noOdds({718, 991, 449, 644, 380, 440}), Equals(std::vector<int>({718, 644, 380, 440})));}
  It(test4){Assert::That(noOdds({148, 6, 16, 85}), Equals(std::vector<int>({148, 6, 16})));}
  It(test5){Assert::That(noOdds({9, 49, 23}), Equals(std::vector<int>({})));}
  It(test6){Assert::That(noOdds({34, 43, 32, 49, 40}), Equals(std::vector<int>({34, 32, 40})));}
  It(test7){Assert::That(noOdds({1232, 1990, 1284, 1391, 1958}), Equals(std::vector<int>({1232, 1990, 1284, 1958})));}
  It(test8){Assert::That(noOdds({2766, 2651, 2373, 2916, 2397, 2539}), Equals(std::vector<int>({2766, 2916})));}
  It(test9){Assert::That(noOdds({53, 65, 52, 62, 59}), Equals(std::vector<int>({52, 62})));}
  It(test10){Assert::That(noOdds({393, 156, 14, 166, 129, 246}), Equals(std::vector<int>({156, 14, 166, 246})));}
};

*/

vector<int> noOdds(const vector<int> &arr) {
	vector<int> result = {};
	for (auto x : arr) {
		if (x % 2 == 0)
			result.push_back(x);
	}
	return result;
}

void test_task1_11() {
	assert(noOdds({ 1, 2, 3, 4, 5, 6, 7, 8 }) == vector<int>({ 2, 4, 6, 8 }));
	assert(noOdds({ 43, 65, 23, 89, 53, 9, 6 }) == vector<int>({ 6 }));
	assert(noOdds({ 718, 991, 449, 644, 380, 440 }) == vector<int>({ 718, 644, 380, 440 }));
	assert(noOdds({ 148, 6, 16, 85 }) == vector<int>({ 148, 6, 16 }));
	assert(noOdds({ 9, 49, 23 }) == vector<int>({ }));
	assert(noOdds({ 34, 43, 32, 49, 40 }) == vector<int>({ 34, 32, 40 }));
	assert(noOdds({ 1232, 1990, 1284, 1391, 1958 }) == vector<int>({ 1232, 1990, 1284, 1958 }));
	assert(noOdds({ 2766, 2651, 2373, 2916, 2397, 2539 }) == vector<int>({ 2766, 2916 }));
	assert(noOdds({ 53, 65, 52, 62, 59 }) == vector<int>({ 52, 62 }));
	assert(noOdds({ 393, 156, 14, 166, 129, 246 }) == vector<int>({ 156, 14, 166, 246 }));

	cout << "task1_11 test finished" << endl;
}

void tasks::task1_11()
{
	cout << "Hello Task1_11!" << endl;
	for (auto x : noOdds({ 1,2,3,4,5,6,7,8,9 })) {
		cout << x << endl;
	}
	test_task1_11();
}

/* Task 1_12 - Get Word Count

Create a function that takes a string and returns the word count. The string will be a sentence.

Examples
countWords("Just an example here move along") ➞ 6
countWords("This is a test") ➞ 4
countWords("What an easy task, right") ➞ 5

Notes
If you get stuck on a challenge, find help in the Resources tab.
If you're really stuck, unlock solutions in the Solutions tab.

int countWords(std::string str) {

}

Describe(count_words)
{
  It(test1){Assert::That(countWords("It's high noon"), Equals(3));}
  It(test2){Assert::That(countWords("Is this easy mode"), Equals(4));}
  It(test3){Assert::That(countWords("What an easy task, right"), Equals(5));}
	It(test4){Assert::That(countWords("This is a test"), Equals(4));}
	It(test5){Assert::That(countWords("Just an example here move along"), Equals(6));}
	It(test6){Assert::That(countWords("How are you today?"), Equals(4));}
};

*/

int countWords(const string &str) {
	int result = 0;
	bool wordStarted = false;
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] != ' ') && (str[i] != '!') && (str[i] != '.') && (str[i] != ',') && (str[i] != '?') && (str[i] != ':') && (str[i] != ';') && !wordStarted) {
			
			wordStarted = true;
			result++;
		}
			
		if ((str[i] == ' ') && wordStarted) {
			wordStarted = false;
		}
	}
	return result;
}

void test_task1_12() {
	assert(countWords("It's high noon") == 3);
	assert(countWords("Is this easy mode") == 4);
	assert(countWords("What an easy task, right") == 5);
	assert(countWords("This is a test") == 4);
	assert(countWords("Just an example here move along") == 6);
	assert(countWords("How are you today?") == 4);
	assert(countWords("") == 0);
	assert(countWords("         ") == 0);
	assert(countWords(" I have a dream. Do you? ") == 6);
	assert(countWords(" . ? : ! , ;") == 0);

	cout << "task1_12 test finished" << endl;
}

void tasks::task1_12()
{
	cout << "Hello Task1_12!" << endl;
	cout << countWords(" dasdas   kjhkj k hkj j kj kjj  ") << endl; // 7
	test_task1_12();
}

/* Task 1_13 - How Many Solutions Does This Quadratic Have?

A quadratic equation a x² + b x + c = 0 has either 0, 1, or 2 distinct solutions for real values of x. Given a, b and c, you should return the number of solutions to the equation.

Examples
solutions(1, 0, -1) ➞ 2 // x² - 1 = 0 has two solutions (x = 1 and x = -1).
solutions(1, 0, 0) ➞ 1 // x² = 0 has one solution (x = 0).
solutions(1, 0, 1) ➞ 0 // x² + 1 = 0 has no real solutions.

Notes
You do not have to calculate the solutions, just return how many there are.
a will always be non-zero.

int solutions(int a, int b, int c) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(solutions(1, 0, -1), Equals(2));}
	It(test2){Assert::That(solutions(1, 0, 0), Equals(1));}
	It(test3){Assert::That(solutions(1, 0, 1), Equals(0));}
	It(test4){Assert::That(solutions(200, 420, 800), Equals(0));}
	It(test5){Assert::That(solutions(200, 420, -800), Equals(2));}
	It(test6){Assert::That(solutions(1000, 1000, 0), Equals(2));}
	It(test7){Assert::That(solutions(10000, 400, 4), Equals(1));}
};

*/

int solutions(int a, int b, int c) {
	double D = pow(b,2) - (4 * a * c);
	if (D > 0)
		return 2;
	else if (D == 0)
		return 1;
	else
		return 0;
}

void test_task1_13() {
	assert(solutions(1, 0, -1) == 2);
	assert(solutions(1, 0, 0) == 1);
	assert(solutions(1, 0, 1) == 0);
	assert(solutions(200, 420, 800) == 0);
	assert(solutions(200, 420, -800) == 2);
	assert(solutions(1000, 1000, 0) == 2);
	assert(solutions(10000, 400, 4) == 1);

	cout << "task1_13 test finished" << endl;
}

void tasks::task1_13()
{
	cout << "Hello Task1_13!" << endl;
	cout << solutions(1, 2, 3) << endl;
	test_task1_13();
}

/* Task 1_14 - How Many Vowels?

Create a function that takes a string and returns the number (count) of vowels contained within it.

Examples
countVowels("Celebration") ➞ 5
countVowels("Palm") ➞ 1
countVowels("Prediction") ➞ 4

Notes
a, e, i, o, u are considered vowels (not y).
All test cases are one word and only contain letters.

int countVowels(std::string str) {

}

Describe(count_vowels)
{
  It(test1){Assert::That(countVowels("Celebration"), Equals(5));}
  It(test2){Assert::That(countVowels("Palm"), Equals(1));}
  It(test3){Assert::That(countVowels("Prediction"), Equals(4));}
  It(test4){Assert::That(countVowels("Suite"), Equals(3));}
  It(test5){Assert::That(countVowels("Quote"), Equals(3));}
  It(test6){Assert::That(countVowels("Portrait"), Equals(3));}
  It(test7){Assert::That(countVowels("Steam"), Equals(2));}
  It(test8){Assert::That(countVowels("Tape"), Equals(2));}
  It(test9){Assert::That(countVowels("Nightmare"), Equals(3));}
  It(test10){Assert::That(countVowels("Convention"), Equals(4));}
};

*/

int countVowels(const string &str) {
	int result = 0;
	for (auto x : str) {
		switch (toupper(x)) {
		case 'A': result++;
			break;
		case 'E': result++;
			break;
		case 'O': result++;
			break;
		case 'U': result++;
			break;
		case 'I': result++;
			break;
		}
	}
	return result;
}

void test_task1_14() {
	assert(countVowels("Celebration") == 5);
	assert(countVowels("Palm") == 1);
	assert(countVowels("Prediction") == 4);
	assert(countVowels("Suite") == 3);
	assert(countVowels("Quote") == 3);
	assert(countVowels("Portrait") == 3);
	assert(countVowels("Steam") == 2);
	assert(countVowels("Tape") == 2);
	assert(countVowels("Nightmare") == 3);
	assert(countVowels("Convention") == 4);

	cout << "task1_14 test finished" << endl;
}

void tasks::task1_14()
{
	cout << "Hello Task1_14!" << endl;
	cout << countVowels("bla-bla-bla") << endl;
	test_task1_14();
}

/* Task 1_15 - A Circle and Two Squares https://edabit.com/challenge/8xjxawTJEiuXnb5Gg

Imagine a circle and two squares: a smaller and a bigger one. For the smaller one, the circle is a circumcircle and for the bigger one, an incircle.
Scale (img, follow the link)
Create a function, that takes an integer (radius of the circle) and returns the difference of the areas of the two squares.

Examples
squareAreasDifference(5) ➞ 50
squareAreasDifference(6) ➞ 72
squareAreasDifference(7) ➞ 98

Notes
Use only positive integer parameters.

int squareAreasDifference(int r) {

}

Describe(tests)
{
  It(test1){Assert::That(squareAreasDifference(5), Equals(50));}
	It(test2){Assert::That(squareAreasDifference(6), Equals(72));}
	It(test3){Assert::That(squareAreasDifference(7), Equals(98));}
	It(test4){Assert::That(squareAreasDifference(17), Equals(578));}
};

*/

int squareAreasDifference(int r) {
	int squareBigger = pow(2 * r , 2);
	int squareSmaller = squareBigger / 2;
	return squareBigger - squareSmaller;

}

void test_task1_15() {
	assert(squareAreasDifference(5) == 50);
	assert(squareAreasDifference(6) == 72);
	assert(squareAreasDifference(7) == 98);
	assert(squareAreasDifference(17) == 578);

	cout << "task1_15 test finished" << endl;
}

void tasks::task1_15()
{
	cout << "Hello Task1_15!" << endl;
	cout << squareAreasDifference(10) << endl;
	test_task1_15();
}

/* Task 1_16 - Repeating Letters

Create a function that takes a string and returns a string in which each character is repeated once.

Examples
doubleChar("String") ➞ "SSttrriinngg"
doubleChar("Hello World!") ➞ "HHeelllloo  WWoorrlldd!!"
doubleChar("1234!_ ") ➞ "11223344!!__  "

Notes
All test cases contain valid strings. Don't worry about spaces, special characters or numbers. They're all considered valid characters.

std::string doubleChar(std::string str) {

}

Describe(double_char)
{
  It(test1){Assert::That(doubleChar("String"), Equals("SSttrriinngg"));}
  It(test2){Assert::That(doubleChar("Hello World!"), Equals("HHeelllloo  WWoorrlldd!!"));}
  It(test3){Assert::That(doubleChar("1234!_ "), Equals("11223344!!__  "));}
  It(test4){Assert::That(doubleChar("##^&%%*&%%$#@@!"), Equals("####^^&&%%%%**&&%%%%$$##@@@@!!"));}
  It(test5){Assert::That(doubleChar("scandal"), Equals("ssccaannddaall"));}
  It(test6){Assert::That(doubleChar("economics"), Equals("eeccoonnoommiiccss"));}
  It(test7){Assert::That(doubleChar(" "), Equals("  "));}
  It(test8){Assert::That(doubleChar("_______"), Equals("______________"));}
  It(test9){Assert::That(doubleChar("equip gallon read"), Equals("eeqquuiipp  ggaalllloonn  rreeaadd"));}
  It(test10){Assert::That(doubleChar("baby increase"), Equals("bbaabbyy  iinnccrreeaassee"));}
};

*/

string doubleChar(const string &str) {
	string result = "";
	for (auto x : str) {
		result = result + x + x;
	}
	return result;
}

void test_task1_16() {
	assert(doubleChar("String") == "SSttrriinngg");
	assert(doubleChar("Hello World!") == "HHeelllloo  WWoorrlldd!!");
	assert(doubleChar("1234!_ ") == "11223344!!__  ");
	assert(doubleChar("##^&%%*&%%$#@@!") == "####^^&&%%%%**&&%%%%$$##@@@@!!");
	assert(doubleChar("scandal") == "ssccaannddaall");
	assert(doubleChar("economics") == "eeccoonnoommiiccss");
	assert(doubleChar(" ") == "  ");
	assert(doubleChar("_______") == "______________");
	assert(doubleChar("equip gallon read") == "eeqquuiipp  ggaalllloonn  rreeaadd");
	assert(doubleChar("baby increase") == "bbaabbyy  iinnccrreeaassee");

	cout << "task1_16 test finished" << endl;
}

void tasks::task1_16()
{
	cout << "Hello Task1_16!" << endl;
	cout << doubleChar("bla-bla-bla-bla") << endl;
	test_task1_16();
}

/* Task 1_17 - Alphabet Soup

Create a function that takes a string and returns a string with its letters in alphabetical order.

Examples
alphabetSoup("hello") ➞ "ehllo"
alphabetSoup("edabit") ➞ "abdeit"
alphabetSoup("hacker") ➞ "acehkr"
alphabetSoup("geek") ➞ "eegk"
alphabetSoup("javascript") ➞ "aacijprstv"

Notes
You can assume numbers and punctuation symbols won't be included in test cases. You'll only have to deal with single word, alphabetic characters.

std::string alphabetSoup(std::string str) {

}

Describe(alphabet_soup)
{
  It(test1){Assert::That(alphabetSoup("hello"), Equals("ehllo"));}
  It(test2){Assert::That(alphabetSoup("edabit"), Equals("abdeit"));}
  It(test3){Assert::That(alphabetSoup("hacker"), Equals("acehkr"));}
  It(test4){Assert::That(alphabetSoup("geek"), Equals("eegk"));}
  It(test5){Assert::That(alphabetSoup("javascript"), Equals("aacijprstv"));}
  It(test6){Assert::That(alphabetSoup("credibility"), Equals("bcdeiiilrty"));}
  It(test7){Assert::That(alphabetSoup("apostrophe"), Equals("aehoopprst"));}
  It(test8){Assert::That(alphabetSoup("determination"), Equals("adeeiimnnortt"));}
  It(test9){Assert::That(alphabetSoup("win"), Equals("inw"));}
  It(test10){Assert::That(alphabetSoup("synthesis"), Equals("ehinsssty"));}
};

*/

string alphabetSoup(const string &str) {
	string result = str;
	sort(result.begin(), result.end());
	return result;
}

void test_task1_17() {
	assert(alphabetSoup("hello") == "ehllo");
	assert(alphabetSoup("edabit") == "abdeit");
	assert(alphabetSoup("hacker") == "acehkr");
	assert(alphabetSoup("geek") == "eegk");
	assert(alphabetSoup("javascript") == "aacijprstv");
	assert(alphabetSoup("credibility") == "bcdeiiilrty");
	assert(alphabetSoup("apostrophe") == "aehoopprst");
	assert(alphabetSoup("determination") == "adeeiimnnortt");
	assert(alphabetSoup("win") == "inw");
	assert(alphabetSoup("synthesis") == "ehinsssty");	

	cout << "task1_17 test finished" << endl;
}

void tasks::task1_17()
{
	cout << "Hello Task1_17!" << endl;
	cout << alphabetSoup("bla-bla-bla") << endl;
	test_task1_17();
}

/* Task 1_18 - Amplify the Multiples of Four

Create a function that takes an integer and returns an array from 1 to the given number, where:
If the number can be divided evenly by 4, amplify it by 10 (i.e. return 10 times the number).
If the number cannot be divided evenly by 4, simply return the number.

Examples
amplify(4) ➞ [1, 2, 3, 40]
amplify(3) ➞ [1, 2, 3]
amplify(25) ➞ [1, 2, 3, 40, 5, 6, 7, 80, 9, 10, 11, 120, 13, 14, 15, 160, 17, 18, 19, 200, 21, 22, 23, 240, 25]

Notes
The given integer will always be equal to or greater than 1.
Include the number (see example above).

std::vector<int> amplify(int n) {

}

Describe(amplify_four)
{
	It(Test1){Assert::That(amplify(1), Equals(std::vector<int>({1})));}
	It(Test2){Assert::That(amplify(4), Equals(std::vector<int>({1, 2, 3, 40})));}
	It(Test3){Assert::That(amplify(8), Equals(std::vector<int>({1, 2, 3, 40, 5, 6, 7, 80})));}
	It(Test4){Assert::That(amplify(25), Equals(std::vector<int>({1, 2, 3, 40, 5, 6, 7, 80, 9, 10, 11, 120, 13, 14, 15, 160, 17, 18, 19, 200, 21, 22, 23, 240, 25})));}
};

*/

vector<int> amplify(int n) {
	vector<int> result = {};
	for (int i = 1; i <= n; i++) {
		if (i % 4 == 0)
			result.push_back(i * 10);
		else
			result.push_back(i);
	}

	return result;
}

void test_task1_18() {
	assert(amplify(1) == vector<int>({ 1 }));
	assert(amplify(4) == vector<int>({ 1, 2, 3, 40 }));
	assert(amplify(8) == vector<int>({ 1, 2, 3, 40, 5, 6, 7, 80 }));
	assert(amplify(25) == vector<int>({ 1, 2, 3, 40, 5, 6, 7, 80, 9, 10, 11, 120, 13, 14, 15, 160, 17, 18, 19, 200, 21, 22, 23, 240, 25 }));

	cout << "task1_18 test finished" << endl;
}

void tasks::task1_18()
{
	cout << "Hello Task1_18!" << endl;
	for (auto x : amplify(15)) {
		cout << x << endl;
	}
	test_task1_18();
}

/* Task 1_19 - Convenience Store

Given a total due and an array representing the amount of change in your pocket, determine whether or not you are able to pay for the item. Change will always be represented in the following order: quarters, dimes, nickels, pennies.
To illustrate: changeEnough([25, 20, 5, 0], 4.25) should yield true, since having 25 quarters, 20 dimes, 5 nickels and 0 pennies gives you 6.25 + 2 + .25 + 0 = 8.50.

Examples
changeEnough([2, 100, 0, 0], 14.11) ➞ false
changeEnough([0, 0, 20, 5], 0.75) ➞ true
changeEnough([30, 40, 20, 5], 12.55) ➞ true
changeEnough([10, 0, 0, 50], 3.85) ➞ false
changeEnough([1, 0, 5, 219], 19.99) ➞ false

Notes
quarter: 25 cents / $0.25
dime: 10 cents / $0.10
nickel: 5 cents / $0.05
penny: 1 cent / $0.01

bool changeEnough(std::vector<int> change, float amountDue) {

}

Describe(enough_change_tests)
{
	It(enough_change_test_1){Assert::That(changeEnough({0, 0, 20, 5}, 0.75), Equals(true));}
	It(enough_change_test_2){Assert::That(changeEnough({30, 40, 20, 5}, 12.55), Equals(true));}
	It(enough_change_test_3){Assert::That(changeEnough({1, 0, 2555, 219}, 127.75), Equals(true));}
	It(enough_change_test_4){Assert::That(changeEnough({1, 335, 0, 219}, 35.21), Equals(true));}
	It(not_enough_change_test_1){Assert::That(changeEnough({2, 100, 0, 0}, 14.11), Equals(false));}
	It(not_enough_change_test_2){Assert::That(changeEnough({10, 0, 0, 50}, 13.85), Equals(false));}
	It(not_enough_change_test_3){Assert::That(changeEnough({1, 0, 5, 219}, 19.99), Equals(false));}
};

*/

bool changeEnough(const vector<int> &change, float amountDue) {
	float pocketMoney = float(change[0]) * 0.25 + float(change[1]) * 0.10 + float(change[2]) * 0.05 + float(change[3]) * 0.01;
	cout << pocketMoney << " " << amountDue << endl;
	if (pocketMoney >= amountDue)
		return true;
	else
		return false;
}

void test_task1_19() {
	assert(changeEnough({ 0, 0, 20, 5 }, 0.75) == true);
	assert(changeEnough({ 30, 40, 20, 5 }, 12.55) == true);
	assert(changeEnough({ 1, 0, 2555, 219 }, 127.75) == true);
	assert(changeEnough({ 1, 335, 0, 219 }, 35.21) == true);
	assert(changeEnough({ 2, 100, 0, 0 }, 14.11) == false);
	assert(changeEnough({ 10, 0, 0, 50 }, 13.85) == false);
	assert(changeEnough({ 1, 0, 5, 219 }, 19.99) == false);

	cout << "task1_19 test finished" << endl;
}

void tasks::task1_19()
{
	cout << "Hello Task1_19!" << endl;
	cout << changeEnough({ 1, 2, 3, 4 }, 0.5) << endl;
	test_task1_19();
}

/* Task 1_20 - Reverse the Order of a String

Create a function that takes a string as its argument and returns the string in reversed order.

Examples
reverse("Hello World") ➞ "dlroW olleH"
reverse("The quick brown fox.") ➞ ".xof nworb kciuq ehT"
reverse("Edabit is really helpful!") ➞ "!lufpleh yllaer si tibadE"

Notes
You can expect a valid string for all test cases.

std::string reverse(std::string str) {

}

Describe(reverse_order)
{
  It(test1){Assert::That(reverse("Think different."), Equals(".tnereffid knihT"));}
  It(test2){Assert::That(reverse("It doesnt make sense to hire smart people and tell them what to do; we hire smart people so they can tell us what to do."), Equals(".od ot tahw su llet nac yeht os elpoep trams erih ew ;od ot tahw meht llet dna elpoep trams erih ot esnes ekam tnseod tI"));}
  It(test3){Assert::That(reverse("Innovation is the ability to see change as an opportunity - not a threat"), Equals("taerht a ton - ytinutroppo na sa egnahc ees ot ytiliba eht si noitavonnI"));}
  It(test4){Assert::That(reverse("Everything is based on a simple rule: Quality is the best business plan."), Equals(".nalp ssenisub tseb eht si ytilauQ :elur elpmis a no desab si gnihtyrevE"));}
  It(test5){Assert::That(reverse("The people who are crazy enough to think they can change the world are the ones who do."), Equals(".od ohw seno eht era dlrow eht egnahc nac yeht kniht ot hguone yzarc era ohw elpoep ehT"));}
  It(test6){Assert::That(reverse("Dont let the noise of others opinions drown out your own inner voice."), Equals(".eciov renni nwo ruoy tuo nword snoinipo srehto fo esion eht tel tnoD"));}
  It(test7){Assert::That(reverse("Learn continually; Theres always one more thing to learn."), Equals(".nrael ot gniht erom eno syawla serehT ;yllaunitnoc nraeL"));}
  It(test8){Assert::That(reverse("Quality is more important than quantity. One home run is much better than two doubles."), Equals(".selbuod owt naht retteb hcum si nur emoh enO .ytitnauq naht tnatropmi erom si ytilauQ"));}
  It(test9){Assert::That(reverse("Your time is limited so dont waste it living someone elses life."), Equals(".efil sesle enoemos gnivil ti etsaw tnod os detimil si emit ruoY"));}
  It(test10){Assert::That(reverse("The only way to be truly satisfied is to do what you believe is great work."), Equals(".krow taerg si eveileb uoy tahw od ot si deifsitas ylurt eb ot yaw ylno ehT"));}
};

*/

string reverse(const string &str) {
	string result = str;
	reverse(result.begin(), result.end());
	return result;
}

void test_task1_20() {
	assert(reverse("Think different.") == ".tnereffid knihT");
	assert(reverse("It doesnt make sense to hire smart people and tell them what to do; we hire smart people so they can tell us what to do.") == ".od ot tahw su llet nac yeht os elpoep trams erih ew ;od ot tahw meht llet dna elpoep trams erih ot esnes ekam tnseod tI");
	assert(reverse("Innovation is the ability to see change as an opportunity - not a threat") == "taerht a ton - ytinutroppo na sa egnahc ees ot ytiliba eht si noitavonnI");
	assert(reverse("Everything is based on a simple rule: Quality is the best business plan.") == ".nalp ssenisub tseb eht si ytilauQ :elur elpmis a no desab si gnihtyrevE");
	assert(reverse("The people who are crazy enough to think they can change the world are the ones who do.") == ".od ohw seno eht era dlrow eht egnahc nac yeht kniht ot hguone yzarc era ohw elpoep ehT");
	assert(reverse("Dont let the noise of others opinions drown out your own inner voice.") == ".eciov renni nwo ruoy tuo nword snoinipo srehto fo esion eht tel tnoD");
	assert(reverse("Learn continually; Theres always one more thing to learn.") == ".nrael ot gniht erom eno syawla serehT ;yllaunitnoc nraeL");
	assert(reverse("Quality is more important than quantity. One home run is much better than two doubles.") == ".selbuod owt naht retteb hcum si nur emoh enO .ytitnauq naht tnatropmi erom si ytilauQ");
	assert(reverse("Your time is limited so dont waste it living someone elses life.") == ".efil sesle enoemos gnivil ti etsaw tnod os detimil si emit ruoY");
	assert(reverse("The only way to be truly satisfied is to do what you believe is great work.") == ".krow taerg si eveileb uoy tahw od ot si deifsitas ylurt eb ot yaw ylno ehT");
	
	cout << "task1_20 test finished" << endl;
}

void tasks::task1_20()
{
	cout << "Hello Task1_20!" << endl;
	cout << reverse("string") << endl;
	test_task1_20();
}

/* Task 1_21 - Equality of 3 Values

Create a function that takes three integer arguments (a, b, c) and returns the amount of integers which are of equal value.

Examples
equal(3, 4, 3) ➞ 2
equal(1, 1, 1) ➞ 3
equal(3, 4, 1) ➞ 0

Notes
Your function must return 0, 2 or 3.

int equal(int a, int b, int c) {

}

Describe(tests) {
	It(m1){std::cout << "Should work if all values are different." << std::endl;}
	It(test1){Assert::That(equal(2, 3, 4), Equals(0));}
	It(test2){Assert::That(equal(7, 3, 4), Equals(0));}
	It(test3){Assert::That(equal(1, 7, 6), Equals(0));}
	It(m2){std::cout << "Should work if two values are different." << std::endl;}
	It(test4){Assert::That(equal(7, 3, 7), Equals(2));}
	It(test5){Assert::That(equal(3, 3, 6), Equals(2));}
	It(m3){std::cout << "Should work for 3 identical values." << std::endl;}
	It(test6){Assert::That(equal(4, 4, 4), Equals(3));}
	It(test7){Assert::That(equal(1, 1, 1), Equals(3));}
	It(test8){Assert::That(equal(7, 7, 7), Equals(3));}
};

*/

int equal(int a, int b, int c) {

}

void test_task1_21() {
	assert(equal(2, 3, 4) == 0);
	assert(equal(7, 3, 4) == 0);
	assert(equal(1, 7, 6) == 0);
	assert(equal(7, 3, 7) == 2);
	assert(equal(3, 3, 6) == 2);
	assert(equal(4, 4, 4) == 3);
	assert(equal(1, 1, 1) == 3);
	assert(equal(7, 7, 7) == 3);
	cout << "task1_21 test finished" << endl;
}

void tasks::task1_21()
{
	cout << "Hello Task1_21!" << endl;
	cout << equal(1, 2, 3) << endl;
	test_task1_21();
}

/* Task 1_22 - Array of Multiples

Create a function that takes two numbers as arguments (num, length) and returns an array of multiples of num until the array length reaches length.

Examples
arrayOfMultiples(7, 5) ➞ [7, 14, 21, 28, 35]
arrayOfMultiples(12, 10) ➞ [12, 24, 36, 48, 60, 72, 84, 96, 108, 120]
arrayOfMultiples(17, 6) ➞ [17, 34, 51, 68, 85, 102]

Notes
Notice that num is also included in the returned array.

#include <vector>

std::vector<int> arrayOfMultiples(int num, int length) {

}

#include <vector>

using v = std::vector<int>;

Describe(ArrayOfMultiplesTests) {
	It(test1){Assert::That(arrayOfMultiples(7, 5), Equals(v{7, 14, 21, 28, 35}));}
	It(test2){Assert::That(arrayOfMultiples(12, 10), Equals(v{12, 24, 36, 48, 60, 72, 84, 96, 108, 120}));}
	It(test3){Assert::That(arrayOfMultiples(17, 7), Equals(v{17, 34, 51, 68, 85, 102, 119}));}
	It(test4){Assert::That(arrayOfMultiples(630, 14), Equals(v{630, 1260, 1890, 2520, 3150, 3780, 4410, 5040, 5670, 6300, 6930, 7560, 8190, 8820}));}
	It(test5){Assert::That(arrayOfMultiples(140, 3), Equals(v{140, 280, 420}));}
	It(test6){Assert::That(arrayOfMultiples(7, 8), Equals(v{7, 14, 21, 28, 35, 42, 49, 56}));}
	It(test7){Assert::That(arrayOfMultiples(11, 21), Equals(v{11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 121, 132, 143, 154, 165, 176, 187, 198, 209, 220, 231}));}
};

*/

vector<int> arrayOfMultiples(int num, int length) {

}

void test_task1_22() {
	assert(arrayOfMultiples(7, 5) == vector<int>({ 7, 14, 21, 28, 35 }));
	assert(arrayOfMultiples(12, 10) == vector<int>({ 12, 24, 36, 48, 60, 72, 84, 96, 108, 120 }));
	assert(arrayOfMultiples(17, 7) == vector<int>({ 17, 34, 51, 68, 85, 102, 119 }));
	assert(arrayOfMultiples(630, 14) == vector<int>({ 630, 1260, 1890, 2520, 3150, 3780, 4410, 5040, 5670, 6300, 6930, 7560, 8190, 8820 }));
	assert(arrayOfMultiples(140, 3) == vector<int>({ 140, 280, 420 }));
	assert(arrayOfMultiples(7, 8) == vector<int>({ 7, 14, 21, 28, 35, 42, 49, 56 }));
	assert(arrayOfMultiples(11, 21) == vector<int>({ 11, 22, 33, 44, 55, 66, 77, 88, 99, 110, 121, 132, 143, 154, 165, 176, 187, 198, 209, 220, 231 }));
	cout << "task1_22 test finished" << endl;
}

void tasks::task1_22()
{
	cout << "Hello Task1_22!" << endl;
	for (auto x: arrayOfMultiples(10, 10)) {
		cout << x;
	}
	test_task1_22();
}

/* Task 1_23 - Hitting the Jackpot

Create a function that takes in an array (slot machine outcome) and returns true if all elements in the array are identical, and false otherwise. The array will contain 4 elements.

Examples
testJackpot(["@", "@", "@", "@"]) ➞ true
testJackpot(["abc", "abc", "abc", "abc"]) ➞ true
testJackpot(["SS", "SS", "SS", "SS"]) ➞ true
testJackpot(["&&", "&", "&&&", "&&&&"]) ➞ false
testJackpot(["SS", "SS", "SS", "Ss"]) ➞ false

Notes
The elements must be exactly identical for there to be a jackpot.

bool testJackpot(std::vector<std::string> result) {

}

Describe(test_jackpot_tests)
{
	// True tests
	It(true_jackpots_test_1){Assert::That(testJackpot({"@", "@", "@", "@"}), Equals(true));}
	It(true_jackpots_test_2){Assert::That(testJackpot({"!", "!", "!", "!"}), Equals(true));}
	It(true_jackpots_test_3){Assert::That(testJackpot({"abc", "abc", "abc", "abc"}), Equals(true));}
	It(true_jackpots_test_4){Assert::That(testJackpot({"karaoke", "karaoke", "karaoke", "karaoke"}), Equals(true));}
	It(true_jackpots_test_5){Assert::That(testJackpot({"SS", "SS", "SS", "SS"}), Equals(true));}
	// False tests
	It(not_jackpots_test_1){Assert::That(testJackpot({":(", ":)", ":|", ":|"}), Equals(false));}
	It(not_jackpots_test_2){Assert::That(testJackpot({"&&", "&", "&&&", "&&&&"}), Equals(false));}
	It(not_jackpots_test_3){Assert::That(testJackpot({"hee", "heh", "heh", "heh"}), Equals(false));}
	It(not_jackpots_test_4){Assert::That(testJackpot({"SS", "SS", "SS", "Ss"}), Equals(false));}
	It(not_jackpots_test_5){Assert::That(testJackpot({"SS", "SS", "Ss", "Ss"}), Equals(false));}
};

*/

bool testJackpot(const vector<string> &result) {

}

void test_task1_23() {
	assert(testJackpot({ "@", "@", "@", "@" }) == true);
	assert(testJackpot({ "!", "!", "!", "!" }) == true);
	assert(testJackpot({ "abc", "abc", "abc", "abc" }) == true);
	assert(testJackpot({ "karaoke", "karaoke", "karaoke", "karaoke" }) == true);
	assert(testJackpot({ "SS", "SS", "SS", "SS" }) == true);
	assert(testJackpot({ ":(", ":)", ":|", ":|" }) == false);
	assert(testJackpot({ "&&", "&", "&&&", "&&&&" }) == false);
	assert(testJackpot({ "hee", "heh", "heh", "heh" }) == false);
	assert(testJackpot({ "SS", "SS", "SS", "Ss" }) == false);
	assert(testJackpot({ "SS", "SS", "Ss", "Ss" }) == false);

	cout << "task1_23 test finished" << endl;
}

void tasks::task1_23()
{
	cout << "Hello Task1_23!" << endl;
	cout << testJackpot({"1","2","3"});
	test_task1_23();
}

/* Task 1_24 - Change Every Letter to the Next Letter

Write a function that changes every letter to the next letter:
"a" becomes "b"
"b" becomes "c"
"d" becomes "e"
and so on ...

Examples
move("hello") ➞ "ifmmp"
move("bye") ➞ "czf"
move("welcome") ➞ "xfmdpnf"

Notes
There will be no z's in the tests.

std::string move(std::string word) {

}

Describe(letter_to_next_letter)
{
  It(test1){Assert::That(move("hello"), Equals("ifmmp"));}
	It(test2){Assert::That(move("lol"), Equals("mpm"));}
	It(test3){Assert::That(move("bye"), Equals("czf"));}
};

*/

string move(string word) {

}

void test_task1_24() {
	assert(move("hello") == "ifmmp");
	assert(move("lol") == "mpm");
	assert(move("bye") == "czf");

	cout << "task1_24 test finished" << endl;
}

void tasks::task1_24()
{
	cout << "Hello Task1_24!" << endl;
	cout << move("fhf jh g jfhhjgf");
	test_task1_24();
}

/* Task 1_25 - Count Ones in a 2D Array

Create a function to count the number of 1s in a 2D array.

Examples
count_ones([
  [1, 0],
  [0, 0]
]) ➞ 1

count_ones([
  [1, 1, 1],
  [0, 0, 1],
  [1, 1, 1]
]) ➞ 7

count_ones([
  [1, 2, 3],
  [0, 2, 1],
  [5, 7, 33]
]) ➞ 2

Notes
N/A

int count_ones(std::vector< std::vector<int> > matrix) {

}

Describe(count_ones_tests)
{
	It(Test1){Assert::That(count_ones({
		{1, 0, 1},
		{0, 0, 0},
		{0, 0, 1}
	}), Equals(3));}
	It(Test2){Assert::That(count_ones({
		{1, 1, 1},
		{0, 0, 1},
		{1, 1, 1}
	}), Equals(7));}
	It(Test3){Assert::That(count_ones({
		{1, 2, 3},
		{0, 2, 1},
		{5, 7, 33}
	}), Equals(2));}
	It(Test4){Assert::That(count_ones({
		{5, 2, 3},
		{0, 2, 5},
		{5, 7, 33}
	}), Equals(0));}
	It(Test5){Assert::That(count_ones({
		{1, 1},
		{0, 1}
	}), Equals(3));}
	It(Test6){Assert::That(count_ones({
		{5, 2},
		{0, 2},
		{5, 1}
	}), Equals(1));}
};

*/

int count_ones(vector< vector<int> > matrix) {

}

void test_task1_25() {
	assert(count_ones({{1, 0, 1}, {0, 0, 0}, {0, 0, 1}}) == 3);
	assert(count_ones({{1, 1, 1}, {0, 0, 1}, {1, 1, 1}}) == 7);
	assert(count_ones({{1, 2, 3}, {0, 2, 1}, {5, 7, 33}}) == 2);
	assert(count_ones({{5, 2, 3}, {0, 2, 5}, {5, 7, 33}}) == 0);
	assert(count_ones({{1, 1}, {0, 1}}) == 3);
	assert(count_ones({{5, 2}, {0, 2}, {5, 1}}) == 1);

	cout << "task1_25 test finished" << endl;
}

void tasks::task1_25()
{
	cout << "Hello Task1_25!" << endl;
	cout << count_ones({ {1, 0, 1}, {0, 0, 0}, {0, 0, 1} });
	test_task1_25();
}

/* Task 1_26 - Return the Four Letter Strings

Create a function that takes a vector (array) of strings. Return all words in the vector (array) that are exactly four letters.

Examples
isFourLetters(["Tomato", "Potato", "Pair"]) ➞ ["Pair"]
isFourLetters(["Kangaroo", "Bear", "Fox"]) ➞ ["Bear"]
isFourLetters(["Ryan", "Kieran", "Jason", "Matt"]) ➞ ["Ryan", "Matt"]

Notes
You can expect valid strings for all test cases.

std::vector<std::string> isFourLetters(std::vector<std::string> arr) {

}

Describe(is_four_letters)
{
  It(test1){Assert::That(isFourLetters({"Ryan", "Kieran", "Jason", "Matt"}), Equals(std::vector<std::string>({"Ryan", "Matt"})));}
  It(test2){Assert::That(isFourLetters({"Tomato", "Potato", "Pair"}), Equals(std::vector<std::string>({"Pair"})));}
  It(test3){Assert::That(isFourLetters({"Kangaroo", "Bear", "Fox"}), Equals(std::vector<std::string>({"Bear"})));}
  It(test4){Assert::That(isFourLetters({"Red", "Blue", "Green", "Pink"}), Equals(std::vector<std::string>({"Blue", "Pink"})));}
  It(test5){Assert::That(isFourLetters({"is", "up", "two", "elephant"}), Equals(std::vector<std::string>({})));}
  It(test6){Assert::That(isFourLetters({"jazz", "quiz", "jump"}), Equals(std::vector<std::string>({"jazz", "quiz", "jump"})));}
  It(test7){Assert::That(isFourLetters({"Broccoli", "Carrot", "Spinach"}), Equals(std::vector<std::string>({})));}
};

*/

vector<string> isFourLetters(vector<string> arr) {

}

void test_task1_26() {
	assert(isFourLetters({ "Ryan", "Kieran", "Jason", "Matt" }) == vector<string>({ "Ryan", "Matt" }));
	assert(isFourLetters({ "Tomato", "Potato", "Pair" }) == vector<string>({ "Pair" }));
	assert(isFourLetters({ "Kangaroo", "Bear", "Fox" }) == vector<string>({ "Bear" }));
	assert(isFourLetters({ "Red", "Blue", "Green", "Pink" }) == vector<string>({ "Blue", "Pink" }));
	assert(isFourLetters({ "is", "up", "two", "elephant" }) == vector<string>({}));
	assert(isFourLetters({ "jazz", "quiz", "jump" }) == vector<string>({ "jazz", "quiz", "jump" }));
	assert(isFourLetters({ "Broccoli", "Carrot", "Spinach" }) == vector<string>({ }));

	cout << "task1_26 test finished" << endl;
}

void tasks::task1_26()
{
	cout << "Hello Task1_26!" << endl;
	for (auto x : isFourLetters({ "Ryan", "Kieran", "Jason", "Matt" })) {
		cout << x << endl;
	}
	test_task1_26();
}

/* Task 1_27 - Is the String in Order?

Create a function that takes a string and returns true or false, depending on whether the characters are in order or not.

Examples
isInOrder("abc") ➞ true
isInOrder("edabit") ➞ false
isInOrder("123") ➞ true
isInOrder("xyzz") ➞ true

Notes
You don't have to handle empty strings.

bool isInOrder(std::string str) {

}

Describe(is_string_in_order)
{
  It(test1){Assert::That(isInOrder("abc"), Equals(true));}
	It(test2){Assert::That(isInOrder("edabit"), Equals(false));}
	It(test3){Assert::That(isInOrder("xyz"), Equals(true));}
	It(test4){Assert::That(isInOrder("xyzz"), Equals(true));}
	It(test5){Assert::That(isInOrder("123"), Equals(true));}
	It(test6){Assert::That(isInOrder("321"), Equals(false));}
};

*/

bool isInOrder(string str) {

}

void test_task1_27() {
	assert(isInOrder("abc") == true);
	assert(isInOrder("edabit") == false);
	assert(isInOrder("xyz") == true);
	assert(isInOrder("xyzz") == true);
	assert(isInOrder("123") == true);
	assert(isInOrder("321") == false);

	cout << "task1_27 test finished" << endl;
}

void tasks::task1_27()
{
	cout << "Hello Task1_27!" << endl;
	cout << isInOrder("abc") << endl;
	test_task1_27();
}

/* Task 1_28 - Xs and Os, Nobody Knows

Create a function that takes a string, checks if it has the same number of x's and o's and returns either true or false.

Return a boolean value (true or false).
Return true if the amount of x's and o's are the same.
Return false if they aren't the same amount.
The string can contain any character.
When "x" and "o" are not in the string, return true.

Examples
XO("ooxx") ➞ true
XO("xooxx") ➞ false
XO("ooxXm") ➞ true // Case insensitive.
XO("zpzpzpp") ➞ true // Returns true if no x and o.
XO("zzoo") ➞ false

Notes
Remember to return true if there aren't any x's or o's.
Must be case insensitive.

bool XO(std::string str) {

}

Describe(x_o)
{
  It(test1){Assert::That(XO("ooxx"), Equals(true));}
  It(test2){Assert::That(XO("xooxx"), Equals(false));}
  It(test3){Assert::That(XO("ooxXm"), Equals(true));}
  It(test4){Assert::That(XO("zpzpzpp"), Equals(true));}
  It(test5){Assert::That(XO("zzoo"), Equals(false));}
  It(test6){Assert::That(XO("Xo"), Equals(true));}
  It(test7){Assert::That(XO("x"), Equals(false));}
  It(test8){Assert::That(XO("o"), Equals(false));}
  It(test9){Assert::That(XO("xxxoo"), Equals(false));}
  It(test10){Assert::That(XO(""), Equals(true));}
};

*/

bool XO(string str) {

}

void test_task1_28() {
	assert(XO("ooxx") == true);
	assert(XO("xooxx") == false);
	assert(XO("ooxXm") == true);
	assert(XO("zpzpzpp") == true);
	assert(XO("zzoo") == false);
	assert(XO("Xo") == true);
	assert(XO("x") == false);
	assert(XO("o") == false);
	assert(XO("xxxoo") == false);
	assert(XO("") == true);

	cout << "task1_28 test finished" << endl;
}

void tasks::task1_28()
{
	cout << "Hello Task1_28!" << endl;
	cout << XO("ooxx") << endl;
	test_task1_28();
}

/* Task 1_29 - Return Odd > Even

Given an array, return true if there are more odd numbers than even numbers, otherwise return false.

Examples
oddeven([1, 2, 3, 4, 5, 6, 7, 8, 9]) ➞ true
oddeven([1]) ➞ true
oddeven([13452394823795273847528572346]) ➞ false

Notes
All arrays will have at least 1 item.

bool oddeven(std::vector<int> arr) {

}

Describe(oddeven_) {
	It(test1){Assert::That(oddeven({1, 2, 3, 4, 5, 6, 7, 8, 9}), Equals(true));}
	It(test2){Assert::That(oddeven({1}), Equals(true));}
	It(test3){Assert::That(oddeven({1, 2, 3, 4, 5, 6, 7, 9}), Equals(true));}
	It(test4){Assert::That(oddeven({42, 1, 66}), Equals(false));}
	It(test5){Assert::That(oddeven({2, 3, 4, 5, 6, 7, 8}), Equals(false));}
};

*/

bool oddeven(const vector<int> &arr) {

}

void test_task1_29() {
	assert(oddeven({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }) == true);
	assert(oddeven({ 1 }) == true);
	assert(oddeven({ 1, 2, 3, 4, 5, 6, 7, 9 }) == true);
	assert(oddeven({ 42, 1, 66 }) == false);
	assert(oddeven({ 2, 3, 4, 5, 6, 7, 8 }) == false);

	cout << "task1_29 test finished" << endl;
}

void tasks::task1_29()
{
	cout << "Hello Task1_29!" << endl;
	cout << oddeven({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }) << endl;
	test_task1_29();
}

/* Task 1_30 - Negative Image

Suppose an image can be represented as a 2D array of 0s and 1s. Write a function to reverse an image. Replace the 0s with 1s and vice versa.

Examples
reverseImage([
  [1, 0, 0],
  [0, 1, 0],
  [0, 0, 1]
]) ➞ [
  [0, 1, 1],
  [1, 0, 1],
  [1, 1, 0]
]

reverseImage([
  [1, 1, 1],
  [0, 0, 0]
]) ➞ [
  [0, 0, 0],
  [1, 1, 1]
]

reverseImage([
  [1, 0, 0],
  [1, 0, 0]
]) ➞ [
  [0, 1, 1],
  [0, 1, 1]
]

Notes
N/A

std::vector<std::vector<int>> reverseImage(std::vector<std::vector<int>> image) {

}

Describe(reverse_image)
{
	It(Test1){Assert::That(reverseImage({
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
	}), Equals(std::vector<std::vector<int>>({
		{0, 1, 1},
		{1, 0, 1},
		{1, 1, 0}
	})));}

	It(Test2){Assert::That(reverseImage({
		{1, 0, 0},
		{0, 0, 0}
	}), Equals(std::vector<std::vector<int>>({
		{0, 1, 1},
		{1, 1, 1}
	})));}

	It(Test3){Assert::That(reverseImage({
		{1, 0, 0},
		{1, 0, 0}
	}), Equals(std::vector<std::vector<int>>({
		{0, 1, 1},
		{0, 1, 1}
	})));}

	It(Test4){Assert::That(reverseImage({
		{1, 0, 0, 0, 0},
		{1, 0, 0, 1, 1},
		{1, 1, 1, 1, 1},
		{1, 1, 1, 1, 0},
		{1, 1, 1, 0, 0}
	}), Equals(std::vector<std::vector<int>>({
		{0, 1, 1, 1, 1},
		{0, 1, 1, 0, 0},
		{0, 0, 0, 0, 0},
		{0, 0, 0, 0, 1},
		{0, 0, 0, 1, 1}
	})));}

	It(Test5){Assert::That(reverseImage({
		{1, 1},
		{1, 0},
		{1, 1},
		{1, 1},
		{1, 1}
	}), Equals(std::vector<std::vector<int>>({
		{0, 0},
		{0, 1},
		{0, 0},
		{0, 0},
		{0, 0}
	})));}
};

*/

vector<vector<int>> reverseImage(vector<vector<int>> image) {

}

void test_task1_30() {
	assert(reverseImage({ {1, 0, 0}, {0, 1, 0}, {0, 0, 1} }) == (vector<vector<int>>({ {0, 1, 1}, {1, 0, 1},{1, 1, 0} })));
	assert(reverseImage({ {1, 0, 0}, {0, 0, 0} }) == (vector<vector<int>>({ {0, 1, 1}, {1, 1, 1} })));
	assert(reverseImage({ {1, 0, 0}, {1, 0, 0} }) == (vector<vector<int>>({ {0, 1, 1}, {0, 1, 1} })));
	assert(reverseImage({ {1, 0, 0, 0, 0}, {1, 0, 0, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 0}, {1, 1, 1, 0, 0} }) == (vector<vector<int>>({ {0, 1, 1, 1, 1}, {0, 1, 1, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 1}, {0, 0, 0, 1, 1} })));
	assert(reverseImage({ {1, 1}, {1, 0}, {1, 1}, {1, 1}, {1, 1} }) == (vector<vector<int>>({ {0, 0}, {0, 1}, {0, 0}, {0, 0}, {0, 0} })));
	cout << "task1_30 test finished" << endl;
}

void tasks::task1_30()
{
	cout << "Hello Task1_30!" << endl;
	//cout << reverseImage({ {1, 0, 0}, {0, 1, 0}, {0, 0, 1} }) << endl;
	test_task1_30();
}

/* Task 1_31 - Algorithms I: Introduction to Recursion

Welcome to the beginning of this collection on Computer Science Algorithms. Admittedly there are other challenges on Edabit that deal with recursion and algorithmic processes, but these particular challenges are designed to give examples and to educate users on the topics being covered.

Recursion
In computer science, "recursion" is the act of writing a function that calls itself from within its own code. The function below better helps explain and illustrate recursion by simply counting down from a given number to zero:

void factorial(int num) {
  int targetNumber = 0;

  if (num == targetNumber)
	{cout << "Countdown complete!";}
  else
	{factorial(num - 1);}
}

Explanation
The above function starts by initializing the target number, which is zero, then it creates a base case by checking if the inputted number has reached the target number yet. If it has, then the function ends and it prints the statement, else the function inputs num subtracted by one and then runs the function again.
When using recursive functions a "Base Case" is needed. A base case will stop the function once it reaches its intended goal. In the absence of a base case, the program can either crash due to "Stack Overflow" or by initiating an "Infinite Loop."
On a side note, initializing variables in recursive functions can sometimes be problematic because when the function runs again it will reset the value of that variable. For this specific recursive function the variable works fine because the target number we're trying to reach is consistently zero.

Instructions
The recursive function for this challenge should return the factorial of an inputted integer. If anyone needs a refresher, factorials in mathematics are represented by an exclamation point placed to the right of a number: 4! = 4 x 3 x 2 x 1 = 24

Examples
factorial(5) ➞ 120
factorial(3) ➞ 6
factorial(2) ➞ 2

Notes
Puts statements can be added to the Countdown function example for illustrative purposes if need be.
Terms that are placed in italics ("example"), while not always necessary to completing the challenge, can be helpful or just generally good to know as an aspiring programmer or computer science student/enthusiast.
Several of the challenges that will be covered in this collection on algorithms can be solved non-recursively and without implementing the algorithms described in each challenge. I implore anyone solving these challenges to do them as intended. Not understanding the concepts taught will be an obstacle to later challenges and won't aid anyone in advancing their skills as a programmer.
If you are stuck please check the Resources tab, Comments tab, or if you're really stuck, use the Solutions tab to unlock the answers.

int factorial(int num) {

}

Describe(math_factorial)
{
  It(test1){Assert::That(factorial(7), Equals(5040));}
  It(test2){Assert::That(factorial(1), Equals(1));}
  It(test3){Assert::That(factorial(9), Equals(362880));}
	It(test4){Assert::That(factorial(2), Equals(2));}
};

*/

int factorial(int num) {

}

void test_task1_31() {
	assert(factorial(7) == 5040);
	assert(factorial(1) == 1);
	assert(factorial(9) == 322880);
	assert(factorial(2) == 2);

	cout << "task1_30 test finished" << endl;
}

void tasks::task1_31()
{
	cout << "Hello Task1_31!" << endl;
	cout << factorial(10) << endl;
	test_task1_31();
}


/* Task 1_32 - Make a Circle with OOP

Your task is to create a Circle constructor that creates a circle with a radius provided by an argument. The circles constructed must have two getters getArea() (PIr^2) and getPerimeter() (2PI*r) which give both respective areas and perimeter (circumference).
For help with this class, I have provided you with a Rectangle constructor which you can use as a base example.

Examples
Circle circy(11);
circy.getArea();

// Should return 379.94

Circle circy(4.44);
circy.getPerimeter();

// Should return 27.8832

Notes
Don't worry about floating point precision - I've factored in the chance that your answer may be more or less accurate than mine. This is more of a tutorial than a challenge so the topic covered may be considered advanced, yet the challenge is more simple - so if this challenge gets labelled as easy, don't worry too much.


#include <math.h>

class Rectangle {
	public:
	Rectangle(float theSideA, float theSideB){
	  sideA = theSideA;
	  sideB = theSideB;
	}
	float getArea() { return sideA * sideB; };
	float getPerimeter() { return (sideA + sideB) * 2; };
  private:
	float sideA;
	float sideB;
};

const float PI_F = 3.14f;

class Circle {
  // Write your code here
  // Please use PI_F constant
}


#include <math.h>

//const float PI_F = 3.14f;

float customRound(float number) {
  float factor = pow(10, 5);
  return round(number * factor) / factor;
};

Describe(circo_geometry)
{
  It(test1) {
	Circle circo(2);
	Assert::That((int)(customRound(circo.getArea()) * 100), Equals((int)(12.56f * 100)));
  }
  It(test2) {
	Circle circo(2);
	Assert::That((int)(customRound(circo.getPerimeter()) * 100), Equals((int)(12.56f * 100)));
  }
  It(test3) {
	Circle circo(20);
	Assert::That((int)(customRound(circo.getArea()) * 10), Equals((int)(1256.0f * 10)));
  }
  It(test4) {
	Circle circo(20);
	Assert::That((int)(customRound(circo.getPerimeter()) * 10), Equals((int)(125.6f * 10)));
  }
  It(test5) {
	Circle circo(4.4);
	Assert::That((int)(customRound(circo.getArea()) * 10000), Equals((int)(60.7904f * 10000)));
  }
  It(test6) {
	Circle circo(4.4);
	Assert::That((int)(customRound(circo.getPerimeter()) * 1000), Equals((int)(27.632f * 1000)));
  }

  //scroll down for spoilers that are hard to use

  It(test7) {
	int randomInt = rand() % 100 + 1; // random number between 1 and 100
	Circle circo(randomInt);
	Assert::That((int)(customRound(circo.getArea()) * 1000000), Equals((int)(PI_F * pow(randomInt, 2) * 1000000)));
  }
  It(test8) {
	int randomInt = rand() % 100 + 1; // random number between 1 and 100
	Circle circo(randomInt);
	Assert::That((int)(customRound(circo.getPerimeter()) * 100000), Equals((int)(2 * PI_F * randomInt * 100000)));
  }
  
};

*/

void tasks::task1_32()
{
	std::cout << "Hello Task1_32!" << std::endl;
}

/* Task 1_33 - Special Arrays

An array is special if every even index contains an even number and every odd index contains an odd number. Create a function that returns true if an array is special, and false otherwise.

Examples
isSpecialArray([2, 7, 4, 9, 6, 1, 6, 3]) ➞ true // Even indices: [2, 4, 6, 6]; Odd indices: [7, 9, 1, 3]
isSpecialArray([2, 7, 9, 1, 6, 1, 6, 3]) ➞ false // Index 2 has an odd number 9.
isSpecialArray([2, 7, 8, 8, 6, 1, 6, 3]) ➞ false // Index 3 has an even number 8.

Notes
N/A

bool isSpecialArray(std::vector<int> arr) {

}

Describe(is_special_array)
{
  It(test1){Assert::That(isSpecialArray({2, 7, 4, 9, 6, 1, 6, 3}), Equals(true));}
	It(test2){Assert::That(isSpecialArray({2, 7, 9, 9, 6, 1, 6, 3}), Equals(false));}
	It(test3){Assert::That(isSpecialArray({2, 7, 8, 8, 6, 1, 6, 3}), Equals(false));}
	It(test4){Assert::That(isSpecialArray({1, 1, 1, 2}), Equals(false));}
	It(test5){Assert::That(isSpecialArray({2, 2, 2, 2}), Equals(false));}
	It(test6){Assert::That(isSpecialArray({2, 1, 2, 1}), Equals(true));}
	It(test7){Assert::That(isSpecialArray({4, 5, 6, 7}), Equals(true));}
	It(test8){Assert::That(isSpecialArray({4, 5, 6, 7, 0, 5}), Equals(true));}
	It(test9){Assert::That(isSpecialArray({0, 1, 0, 1}), Equals(true));}
};

*/

void tasks::task1_33()
{
	std::cout << "Hello Task1_33!" << std::endl;
}

/* Task 1_34 - Cumulative Array Sum

Create a function that takes an array of numbers and returns an array where each number is the sum of itself + all previous numbers in the array.

Examples
cumulativeSum([1, 2, 3]) ➞ [1, 3, 6]
cumulativeSum([1, -2, 3]) ➞ [1, -1, 2]
cumulativeSum([3, 3, -2, 408, 3, 3]) ➞ [3, 6, 4, 412, 415, 418]

Notes
Return an empty array if the input is an empty array.

std::vector<int> cumulativeSum(std::vector<int> array) {

}

Describe(cumulative_sum)
{
	// Should return an empty array if given an empty array
  It(test1){Assert::That(cumulativeSum({}), Equals(std::vector<int>({})));}
  // Should work with 1 value
	It(test2){Assert::That(cumulativeSum({1}), Equals(std::vector<int>({1})));}
  // Should work with multiple values
	It(test3){Assert::That(cumulativeSum({1, 2, 3}), Equals(std::vector<int>({1, 3, 6})));}
  // Should work with multiple negative values
	It(test4){Assert::That(cumulativeSum({-1, -2, -3}), Equals(std::vector<int>({-1, -3, -6})));}
  // Should work with multiple positive and negative values
	It(test5){Assert::That(cumulativeSum({1, -2, 3}), Equals(std::vector<int>({1, -1, 2})));}
  // Should work with long array
	It(test6){Assert::That(cumulativeSum({3, 3, -2, 408, 3, 3, 0, 66, 2, -2, 2, 3, 4, 2, -47, 3, 3, 2}), Equals(std::vector<int>({3, 6, 4, 412, 415, 418, 418, 484, 486, 484, 486, 489, 493, 495, 448, 451, 454, 456})));}
};

*/

void tasks::task1_34()
{
	std::cout << "Hello Task1_34!" << std::endl;
}

/* Task 1_35 - Position in the Alphabet

Given a number between 1-26, return what letter is at that position in the alphabet. Return 0 if the number given is not within that range, or isn't an integer.

Examples
letterAtPosition(1) ➞ "a"
letterAtPosition(26.0) ➞ "z"
letterAtPosition(0) ➞ "0"
letterAtPosition(4.5) ➞ "0"

Notes
Return a lowercase letter.
Numbers that end with ".0" are valid.

#include <cmath>
char letterAtPosition(float n) {

}

Describe(letterAtPosition_){
It(test1){Assert::That(letterAtPosition(1), Equals('a'));}
It(test2){Assert::That(letterAtPosition(2), Equals('b'));}
It(test3){Assert::That(letterAtPosition(3), Equals('c'));}
It(test4){Assert::That(letterAtPosition(4), Equals('d'));}
It(test5){Assert::That(letterAtPosition(5), Equals('e'));}
It(test6){Assert::That(letterAtPosition(6), Equals('f'));}
It(test7){Assert::That(letterAtPosition(7), Equals('g'));}
It(test8){Assert::That(letterAtPosition(8), Equals('h'));}
It(test9){Assert::That(letterAtPosition(9), Equals('i'));}
It(test10){Assert::That(letterAtPosition(10), Equals('j'));}
It(test11){Assert::That(letterAtPosition(11), Equals('k'));}
It(test12){Assert::That(letterAtPosition(12), Equals('l'));}
It(test13){Assert::That(letterAtPosition(13), Equals('m'));}
It(test14){Assert::That(letterAtPosition(14), Equals('n'));}
It(test15){Assert::That(letterAtPosition(15), Equals('o'));}
It(test16){Assert::That(letterAtPosition(16), Equals('p'));}
It(test17){Assert::That(letterAtPosition(17), Equals('q'));}
It(test18){Assert::That(letterAtPosition(18), Equals('r'));}
It(test19){Assert::That(letterAtPosition(19), Equals('s'));}
It(test20){Assert::That(letterAtPosition(20), Equals('t'));}
It(test21){Assert::That(letterAtPosition(21), Equals('u'));}
It(test22){Assert::That(letterAtPosition(22), Equals('v'));}
It(test23){Assert::That(letterAtPosition(23), Equals('w'));}
It(test24){Assert::That(letterAtPosition(24), Equals('x'));}
It(test25){Assert::That(letterAtPosition(25), Equals('y'));}
It(test26){Assert::That(letterAtPosition(26), Equals('z'));}
It(test27){Assert::That(letterAtPosition(0), Equals('0'));}
It(test28){Assert::That(letterAtPosition(4.5), Equals('0'));}
It(test29){Assert::That(letterAtPosition(4.0), Equals('d'));}
It(test30){Assert::That(letterAtPosition(1.0), Equals('a'));}
It(test31){Assert::That(letterAtPosition(26.0), Equals('z'));}
};

*/

void tasks::task1_35()
{
	std::cout << "Hello Task1_35!" << std::endl;
}

/* Task 1_36 - Fix the Error

Create a function that returns true if two arrays contain identical values, and false otherwise.
To solve this question, your friend writes the following code:
bool checkEquals(std::vector<int> arr1, std::vector<int> arr2) {
	for (i=0; i<arr1; i++)
	{
	if (arr1[i]==arr2[i]){return true;}
	}
  return false;
}

But testing the code, you see that something is not quite right. Running the code yields the following results:
checkEquals([1, 2], [1, 3]) ➞ false // Good so far...
checkEquals([1, 2], [1, 2]) ➞ false // Yikes! What happened?

Rewrite your friend's code so that it correctly checks if two arrays are equal. The tests below should pass:

Examples
checkEquals([1, 2], [1, 3]) ➞ false
checkEquals([1, 2], [1, 2]) ➞ true
checkEquals([4, 5, 6], [4, 5, 6]) ➞ true
checkEquals([4, 7, 6], [4, 5, 6]) ➞ false

Notes
N/A

// Fix this broken code!
bool checkEquals(std::vector<int> arr1, std::vector<int> arr2) {
	  for (i=0; i<arr1; i++)
	  {
		if (arr1[i]==arr2[i]){return true;}
	  }
  return false;
}

//Original Copied from Helen Yu (javascript)

Describe(checkEquals_){
It(test1){Assert::That(checkEquals({1, 2}, {1, 3}), Equals(false));}
It(test2){Assert::That(checkEquals({1, 2}, {1, 2}), Equals(true));}
It(test3){Assert::That(checkEquals({4, 5, 6}, {4, 5, 6}), Equals(true));}
It(test4){Assert::That(checkEquals({4, 7, 6}, {4, 5, 6}), Equals(false));}
};
*/

void tasks::task1_36()
{
	std::cout << "Hello Task1_36!" << std::endl;
}

/* Task 1_37 - Find the Missing Number

Create a function that takes an array of numbers between 1 and 10 (excluding one number) and returns the missing number.

Examples
missingNum([1, 2, 3, 4, 6, 7, 8, 9, 10]) ➞ 5
missingNum([7, 2, 3, 6, 5, 9, 1, 4, 8]) ➞ 10
missingNum([10, 5, 1, 2, 4, 6, 8, 3, 9]) ➞ 7

Notes
The array of numbers will be unsorted (not in order).
Only one number will be missing.

int missingNum(std::vector<int> arr) {

}

Describe(missing_nums)
{
  It(test1){Assert::That(missingNum({1, 2, 3, 4, 6, 7, 8, 9, 10}), Equals(5));}
  It(test2){Assert::That(missingNum({7, 2, 3, 6, 5, 9, 1, 4, 8}), Equals(10));}
  It(test3){Assert::That(missingNum({7, 2, 3, 9, 4, 5, 6, 8, 10}), Equals(1));}
  It(test4){Assert::That(missingNum({10, 5, 1, 2, 4, 6, 8, 3, 9}), Equals(7));}
  It(test5){Assert::That(missingNum({1, 7, 2, 4, 8, 10, 5, 6, 9}), Equals(3));}
};

*/

void tasks::task1_37()
{
	std::cout << "Hello Task1_37!" << std::endl;
}

/* Task 1_38 - Is the String a Palindrome?

A palindrome is a word that is identical forward and backwards.

mom
racecar
kayak
Given a word, create a function that checks whether it is a palindrome.

Examples
checkPalindrome("mom") ➞ true
checkPalindrome("scary") ➞ false
checkPalindrome("reviver") ➞ true
checkPalindrome("stressed") ➞ false

Notes
All test input is lower cased.


bool checkPalindrome(std::string str) {

}

Describe(check_palindrome)
{
	It(test1){Assert::That(checkPalindrome("mom"), Equals(true));}
	It(test2){Assert::That(checkPalindrome("scary"), Equals(false));}
	It(test3){Assert::That(checkPalindrome("reviver"), Equals(true));}
	It(test4){Assert::That(checkPalindrome("stressed"), Equals(false));}
	It(test5){Assert::That(checkPalindrome("good"), Equals(false));}
	It(test6){Assert::That(checkPalindrome("refer"), Equals(true));}
	It(test7){Assert::That(checkPalindrome("something"), Equals(false));}
	It(test8){Assert::That(checkPalindrome("redder"), Equals(true));}
	It(test9){Assert::That(checkPalindrome("civic"), Equals(true));}
};

*/

void tasks::task1_38()
{
	std::cout << "Hello Task1_38!" << std::endl;
}

/* Task 1_39 - Recursion: Fibonacci Numbers

Fibonacci numbers are created in the following way:

F(0) = 0
F(1) = 1
...
F(n) = F(n-2) + F(n-1)
Write a function that calculates the nth Fibonacci number.

Examples
fib(0) ➞ 0
fib(1) ➞ 1
fib(2) ➞ 1
fib(8) ➞ 21

Notes
N/A


int fib(int n) {

}

Describe(fibonacci_numbers)
{
  It(test1){Assert::That(fib(2), Equals(1));}
	It(test2){Assert::That(fib(5), Equals(5));}
	It(test3){Assert::That(fib(8), Equals(21));}
	It(test4){Assert::That(fib(12), Equals(144));}
	It(test5){Assert::That(fib(0), Equals(0));}
	It(test6){Assert::That(fib(1), Equals(1));}
};

*/

void tasks::task1_39()
{
	std::cout << "Hello Task1_39!" << std::endl;
}

/* Task 1_40 - Largest Swap

Write a function that takes a two-digit number and determines if it's the largest of two possible digit swaps.

To illustrate:
largestSwap(27) ➞ false
largestSwap(43) ➞ true
If 27 is our input, we should return false because swapping the digits gives us 72, and 72 > 27. On the other hand, swapping 43 gives us 34, and 43 > 34.

Examples
largestSwap(14) ➞ false
largestSwap(53) ➞ true
largestSwap(99) ➞ true

Notes
Numbers with two identical digits (third example) should yield true (you can't do better).

bool largestSwap(int num) {

}

Describe(largest_swap)
{
	It(T1){Assert::That(largestSwap(27), Equals(false));}
	It(T2){Assert::That(largestSwap(43), Equals(true));}
	It(T3){Assert::That(largestSwap(14), Equals(false));}
	It(T4){Assert::That(largestSwap(53), Equals(true));}
	It(T5){Assert::That(largestSwap(99), Equals(true));}
};

*/

void tasks::task1_40()
{
	std::cout << "Hello Task1_40!" << std::endl;
}

/* Task 1_41 - Sum of all Evens in a Matrix

Create a function that returns the sum of all even elements in a 2D matrix.

Examples
sumOfEvens([
  [1, 0, 2],
  [5, 5, 7],
  [9, 4, 3]
]) ➞ 6
// 2 + 4 = 6

sumOfEvens([
  [1, 1],
  [1, 1]
]) ➞ 0

sumOfEvens([
  [42, 9],
  [16, 8]
]) ➞ 66
Notes
N/A

int sumOfEvens(std::vector<std::vector<int>> arr) {

}

Describe(sum_of_all_evens)
{
	It(T1){Assert::That(sumOfEvens({
		{1, 5, 1, 3},
		{4, 1, 2, 0},
		{6, 9, 7, 4},
		{5, 1, 2, 6}
	}), Equals(24));}

	It(T2){Assert::That(sumOfEvens({
		{1, 0, 1},
		{33, 1, 2},
		{15, 9, 1},
		{5, 1, 979}
	}), Equals(2));}

	It(T3){Assert::That(sumOfEvens({
		{2, 19, 5, 43},
		{67, 2, 0, 12}
	}), Equals(16));}

	It(T4){Assert::That(sumOfEvens({
		{1, 3, 7, 9},
		{11, 13, 15, 17},
		{19, 21, 23, 25}
	}), Equals(0));}
};

*/

void tasks::task1_41()
{
	std::cout << "Hello Task1_41!" << std::endl;
}

/* Task 1_42 - Is the Average of All Elements a Whole Number?

Create a function that takes an array as an argument and returns true or false depending on whether the average of all elements in the array is a whole number or not.

Examples
isAvgWhole([1, 3]) ➞ true
isAvgWhole([1, 2, 3, 4]) ➞ false
isAvgWhole([1, 5, 6]) ➞ true
isAvgWhole([1, 1, 1]) ➞ true
isAvgWhole([9, 2, 2, 5]) ➞ false

Notes
N/A

bool isAvgWhole(std::vector<int> arr) {

}

Describe(is_the_avg_whole_tests)
{
	It(whole_averages_should_return_true_1){Assert::That(isAvgWhole({1, 1, 1, 1}), Equals(true));}
	It(whole_averages_should_return_true_2){Assert::That(isAvgWhole({1, 2, 3, 4, 5}), Equals(true));}
	It(not_whole_averages_should_return_false_1){Assert::That(isAvgWhole({3, 5, 9}), Equals(false));}
	It(not_whole_averages_should_return_false_2){Assert::That(isAvgWhole({5, 2, 4}), Equals(false));}
	It(not_whole_averages_should_return_false_3){Assert::That(isAvgWhole({11, 22}), Equals(false));}
	It(not_whole_averages_should_return_false_4){Assert::That(isAvgWhole({4, 1, 7, 9, 2, 5, 7, 2, 4}), Equals(false));}
};

*/

void tasks::task1_42()
{
	std::cout << "Hello Task1_42!" << std::endl;
}

/* Task 1_43 - Solving Exponential Equations With Logarithms

Create a function that takes a number a and finds the missing exponent x so that a when raised to the power of x is equal to b.

Examples
solveForExp(4, 1024) ➞ 5
solveForExp(2, 1024) ➞ 10
solveForExp(9, 3486784401) ➞ 10

Notes
a is raised to the power of what in order to equal b?

int solveForExp(int a, int b) {

}

Describe(tests)
{
  It(test1){Assert::That(solveForExp(4, 1024), Equals(5));}
	It(test2){Assert::That(solveForExp(2, 1024), Equals(10));}
	It(test3){Assert::That(solveForExp(8, 134217728), Equals(9));}
	It(test4){Assert::That(solveForExp(19, 47045881), Equals(6));}
	It(test5){Assert::That(solveForExp(10, 100000000), Equals(8));}
};

*/

void tasks::task1_43()
{
	std::cout << "Hello Task1_43!" << std::endl;
}

/* Task 1_44 - Between Words

Write a function that takes three string arguments (first, last, and word) and returns true if word is found between first and last in the dictionary, otherwise false.

Examples
isBetween("apple", "banana", "azure") ➞ true
isBetween("monk", "monument", "monkey") ➞ true
isBetween("bookend", "boolean", "boost") ➞ false

Notes
All letters will be in lowercase.
All three words will be different.
Remember that the string word is in the middle.

bool isBetween(std::string first, std::string last, std::string word) {

}

Describe(between_words)
{
  It(test1){Assert::That(isBetween("apple", "banana", "azure"), Equals(true));}
	It(test2){Assert::That(isBetween("bookcase", "zebra", "squid"), Equals(true));}
	It(test3){Assert::That(isBetween("shrapnel", "tapenade", "tally"), Equals(true));}
	It(test4){Assert::That(isBetween("monk", "monument", "monkey"), Equals(true));}
	It(test5){Assert::That(isBetween("oath", "ostrich", "osteoporosis"), Equals(true));}
	It(test6){Assert::That(isBetween("ostracize", "ostrich", "open"), Equals(false));}
	It(test7){Assert::That(isBetween("bookend", "boolean", "boost"), Equals(false));}
	It(test8){Assert::That(isBetween("tamer", "tanner", "timid"), Equals(false));}
	It(test9){Assert::That(isBetween("rhino", "sorcerer", "quote"), Equals(false));}
	It(test10){Assert::That(isBetween("body", "lung", "ace"), Equals(false));}
};

*/

void tasks::task1_44()
{
	std::cout << "Hello Task1_44!" << std::endl;
}

/* Task 1_45 - Last Digit Ultimate

Your job is to create a function, that takes 3 numbers: a, b, c and returns true if the last digit of a * b = the last digit of c. Check the examples below for an explanation.

Examples
lastDig(25, 21, 125) ➞ true
// The last digit of 25 is 5, the last digit of 21 is 1, and the last
// digit of 125 is 5, and the last digit of 5*1 = 5, which is equal
// to the last digit of 125(5).

lastDig(55, 226, 5190) ➞ true
// The last digit of 55 is 5, the last digit of 226 is 6, and the last
// digit of 5190 is 0, and the last digit of 5*6 = 30 is 0, which is
// equal to the last digit of 5190(0).

lastDig(12, 215, 2142) ➞ false
// The last digit of 12 is 2, the last digit of 215 is 5, and the last
// digit of 2142 is 2, and the last digit of 2*5 = 10 is 0, which is
// not equal to the last digit of 2142(2).

Notes
Numbers can be negative.

bool lastDig(int a, int b, int c) {

}

Describe (last_digit)
{
	// True tests
	It(true_test_1){Assert::That(lastDig(1, 1, 1), Equals(true));}
	It(true_test_2){Assert::That(lastDig(12, 15, 10), Equals(true));}
	It(true_test_3){Assert::That(lastDig(15228, 9209, 72162), Equals(true));}
	// False tests
	It(false_test_1){Assert::That(lastDig(15, 1, 1), Equals(false));}
	It(false_test_2){Assert::That(lastDig(123, 15, 10), Equals(false));}
	It(false_test_3){Assert::That(lastDig(5213, 99219, 6165), Equals(false));}
	It(false_test_4){Assert::That(lastDig(1523, 513, 512), Equals(false));}
	// Should work with negative numbers
	It(negative_numbers_test_1){Assert::That(lastDig(-15, 1, 1), Equals(false));}
	It(negative_numbers_test_2){Assert::That(lastDig(123, -15, 10), Equals(false));}
	It(negative_numbers_test_3){Assert::That(lastDig(-12, 15, -10), Equals(true));}
	It(negative_numbers_test_4){Assert::That(lastDig(15228, -9209, -72162), Equals(true));}
};

*/

void tasks::task1_45()
{
	std::cout << "Hello Task1_45!" << std::endl;
}

/* Task 1_46 - Capitalize the First Letter of Each Word

Create a function that takes a string as an argument and converts the first character of each word to uppercase. Return the newly formatted string.

Examples
makeTitle("This is a title") ➞ "This Is A Title"
makeTitle("capitalize every word") ➞ "Capitalize Every Word"
makeTitle("I Like Pizza") ➞ "I Like Pizza"
makeTitle("PIZZA PIZZA PIZZA") ➞ "PIZZA PIZZA PIZZA"

Notes
You can expect a valid string for each test case.
Some words may contain more than one uppercase letter (see example #4).

std::string makeTitle(std::string s) {

}

Describe(capitalize_words_tests)
{
	It(test1){Assert::That(makeTitle("I am a title"), Equals("I Am A Title"));}
	It(test2){Assert::That(makeTitle("I AM A TITLE"), Equals("I AM A TITLE"));}
	It(test3){Assert::That(makeTitle("i aM a tITLE"), Equals("I AM A TITLE"));}
	It(test4){Assert::That(makeTitle("the first letter of every word is capitalized"), Equals("The First Letter Of Every Word Is Capitalized"));}
	It(test5){Assert::That(makeTitle("I Like Pizza"), Equals("I Like Pizza"));}
	It(test6){Assert::That(makeTitle("Me and my wife lived happily for twenty years and then we met."), Equals("Me And My Wife Lived Happily For Twenty Years And Then We Met."));}
	It(test7){Assert::That(makeTitle("There are no stupid questions, just stupid people."), Equals("There Are No Stupid Questions, Just Stupid People."));}

	It(should_work_with_apostrophes_and_commas)
	{
		Assert::That(makeTitle("Don't count your ChiCKens BeFore They HatCh"), Equals("Don't Count Your ChiCKens BeFore They HatCh"));
		Assert::That(makeTitle("All generalizations are false, including this one"), Equals("All Generalizations Are False, Including This One"));
	}

	It(should_work_with_entirely_uppercased_strings)
	{
		Assert::That(makeTitle("PIZZA PIZZA PIZZA"), Equals("PIZZA PIZZA PIZZA"));
	}

	It(should_work_with_words_containing_digits)
	{
		Assert::That(makeTitle("1f you c4n r34d 7h15, you r34lly n33d 2 g37 l41d"), Equals("1f You C4n R34d 7h15, You R34lly N33d 2 G37 L41d"));
	}
};

*/

void tasks::task1_46()
{
	std::cout << "Hello Task1_46!" << std::endl;
}

/* Task 1_47 - Cowboy Shootout

Wild Roger is tasked with shooting down 6 bottles with 6 shots as fast as possible. Here are the different types of shots he could make:

He could use one pistol to shoot a bottle with a "Bang!" in 0.5 seconds.
Or he could use both pistols at once with a "BangBang!" to shoot two bottles in 0.5 seconds.
Given an array of strings, return the time (in seconds) it took to shoot down all 6 bottles. Make sure to only count Bangs and BangBangs. Anything else doesn't count.

Examples
rogerShots(["Bang!", "Bang!", "Bang!", "Bang!", "Bang!", "Bang!"]) ➞ 3
rogerShots(["Bang!", "Bang!", "Bang!", "Bang!", "BangBang!"]) ➞ 2.5
rogerShots(["Bang!", "BangBangBang!", "Boom!", "Bang!", "BangBang!", "BangBang!"]) ➞ 2

Notes
All the bottles will be shot down in all the tests.

double rogerShots(std::vector<std::string> arr) {

}

Describe(rogerShots_){
It(test1){Assert::That(rogerShots({"Bang!", "Bang!", "Bang!", "Bang!", "Bang!", "Bang!"}), Equals(3));}
It(test2){Assert::That(rogerShots({"Bang!", "Bang!", "Bang!", "Bang!", "BangBang!"}), Equals(2.5));}
It(test3){Assert::That(rogerShots({"Bang!", "BangBangBang!", "Boom!", "Bang!", "BangBang!", "BangBang!"}), Equals(2));}
It(test4){Assert::That(rogerShots({"BangBang!", "BangBang!", "BangBang!"}), Equals(1.5));}
It(test5){Assert::That(rogerShots({"Bang!", "BadaBing!", "Badaboom!", "Bang!", "Bang!", "Bang!", "Bang!", "Bang!"}), Equals(3));}
It(test6){Assert::That(rogerShots({"BangBang!", "BangBang!", "Bag!", "Ban!", "Tang!", "Bang!", "Bang!"}), Equals(2));}
};

*/

void tasks::task1_47()
{
	std::cout << "Hello Task1_47!" << std::endl;
}

/* Task 1_48 - Positive Count / Negative Sum

Create a function that takes an array of positive and negative numbers. Return an array where the first element is the count of positive numbers and the second element is the sum of negative numbers.

Examples
countPosSumNeg([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15]) ➞ [10, -65]
// There are a total of 10 positive numbers.
// The sum of all negative numbers equals -65.
countPosSumNeg([92, 6, 73, -77, 81, -90, 99, 8, -85, 34]) ➞ [7, -252]
countPosSumNeg([91, -4, 80, -73, -28]) ➞ [2, -105]
countPosSumNeg([]) ➞ []

Notes
If given an empty array, return an empty array: []
0 is not positive.

std::vector<int> countPosSumNeg(std::vector<int> arr) {

}

Describe(count_pos_sum_neg)
{
  It(test1){Assert::That(countPosSumNeg({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15}), Equals(std::vector<int>({10, -65})));}
  It(test2){Assert::That(countPosSumNeg({92, 6, 73, -77, 81, -90, 99, 8, -85, 34}), Equals(std::vector<int>({7, -252})));}
  It(test3){Assert::That(countPosSumNeg({91, -4, 80, -73, -28}), Equals(std::vector<int>({2, -105})));}
  It(test4){Assert::That(countPosSumNeg({69, 100, 28, 47, 53, -61, -24}), Equals(std::vector<int>({5, -85})));}
  It(test5){Assert::That(countPosSumNeg({5, 7, 9, -3, -7, 61, -24}), Equals(std::vector<int>({4, -34})));}
  It(test6){Assert::That(countPosSumNeg({98, 51, -19, -97}), Equals(std::vector<int>({2, -116})));}
  It(test7){Assert::That(countPosSumNeg({-42, 3, -51, -64, 69, 77, -20, -5, 68, -76}), Equals(std::vector<int>({4, -258})));}
  It(test8){Assert::That(countPosSumNeg({}), Equals(std::vector<int>({})));}
};

*/

void tasks::task1_48()
{
	std::cout << "Hello Task1_48!" << std::endl;
}

/* Task 1_49 - Reverse and Capitalize

Create a function that takes a string of lowercase characters and returns that string reversed and in upper case.

Examples
reverseCapitalize("abc") ➞ "CBA"
reverseCapitalize("hellothere") ➞ "EREHTOLLEH"
reverseCapitalize("input") ➞ "TUPNI"

Notes
N/A

std::string reverseCapitalize(std::string str) {

}

Describe(tests)
{
  It(test1){Assert::That(reverseCapitalize("edabit"), Equals("TIBADE"));}
	It(test2){Assert::That(reverseCapitalize("abc"), Equals("CBA"));}
	It(test3){Assert::That(reverseCapitalize("hellothere"), Equals("EREHTOLLEH"));}
	It(test4){Assert::That(reverseCapitalize("input"), Equals("TUPNI"));}
	It(test5){Assert::That(reverseCapitalize("indubitably"), Equals("YLBATIBUDNI"));}
};

*/

void tasks::task1_49()
{
	std::cout << "Hello Task1_49!" << std::endl;
}

/* Task 1_50 - Replace Vowels

Write a function, that replaces all vowels in a string with a specified vowel.

Examples
vowReplace("apples and bananas", "u") ➞ "upplus und bununus"
vowReplace("cheese casserole", "o") ➞ "chooso cossorolo"
vowReplace("stuffed jalapeno poppers", "e") ➞ "steffed jelepene peppers"

Notes
All words will be lowercase.
Y is not considered a vowel.

using namespace std;
string vowReplace(string word, char vowel) {

}

Describe(Vowel_Replacer) {
  It(Test0){Assert::That(vowReplace("apples and bananas", 'u'), Equals("upplus und bununus"));}
  It(Test1){Assert::That(vowReplace("cheese casserole", 'o'), Equals("chooso cossorolo"));}
  It(Test2){Assert::That(vowReplace("stuffed jalapeno poppers", 'e'), Equals("steffed jelepene peppers"));}
  It(Test3){Assert::That(vowReplace("shrimp tempura", 'a'), Equals("shramp tampara"));}
  It(Test4){Assert::That(vowReplace("tuna sashimi", 'i'), Equals("tini sishimi"));}
  It(Test5){Assert::That(vowReplace("chocolate cake", 'a'), Equals("chacalata caka"));}
};

*/

void tasks::task1_50()
{
	std::cout << "Hello Task1_50!" << std::endl;
}
