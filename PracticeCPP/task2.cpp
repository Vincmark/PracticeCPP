/*
https://edabit.com/challenges

Medium tasks

*/
#include <iostream>
#include "task2.h"

void tasks::task2()
{
	std::cout << "Hello Task2!" << std::endl;
}

/* Task 2_1 - Derivative of a Function

Create a function that takes numbers b and m as arguments and returns the derivative of the function f(x)=x^b with respect to x at the point where x=m, where b and m are constants.

Examples
derivative(1, 4) ➞ 1
derivative(3, -2) ➞ 12
derivative(4, -3) ➞ -108

Notes
^ in the context of this challenge means "to the power of", also known as the "exponent" operator.
Assume that b will be a positive integer.
m can be any integer, both positive and negative.
The return type for this function is an integer.

#include <cmath>
int derivative(int b, int m) {

}

Describe(tests)
{
  It(test1){Assert::That(derivative(1, 4), Equals(1));}
	It(test2){Assert::That(derivative(3, -2), Equals(12));}
	It(test3){Assert::That(derivative(4, -3), Equals(-108));}
	It(test4){Assert::That(derivative(9, -5), Equals(3515625));}
};

*/

void tasks::task2_1()
{
	std::cout << "Hello Task2_1!" << std::endl;
}

/* Task 2_2 - Quadratic Equation

Create a function to find only the root value of x in any quadratic equation ax^2 + bx + c. The function will take three arguments:

a as the coefficient of x^2
b as the coefficient of x
c as the constant term

Examples
quadraticEquation(1, 2, -3) ➞ 1
quadraticEquation(2, -7, 3) ➞ 3
quadraticEquation(1, -12, -28) ➞ 14

Notes
Quadratic equation is always guaranteed to have a root.
Check the Resources tab for more information on quadratic equations.
Calculate only the root that sums the square root of the discriminant, not the one that subtracts it.
Round the value / return only integer value.

int quadraticEquation(int a, int b, int c) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(quadraticEquation(1, 2, -3), Equals(1));}
	It(test2){Assert::That(quadraticEquation(2, -7, 3), Equals(3));}
	It(test3){Assert::That(quadraticEquation(1, -12, -28), Equals(14));}
};

*/

void tasks::task2_2()
{
	std::cout << "Hello Task2_2!" << std::endl;
}

/* Task 2_3 - Double Character Swap

Write a function to replace all instances of character c1 with character c2 and vice versa.

Examples
doubleSwap("aabbccc", 'a', 'b') ➞ "bbaaccc"
doubleSwap("random w#rds writt&n h&r&", '#', '&')
➞ "random w&rds writt#n h#r#"
doubleSwap("128 895 556 788 999", '8', '9')
➞ "129 985 556 799 888"

Notes
Both characters will show up at least once in the string.

std::string doubleSwap(std::string s, char c1, char c2) {

}

Describe(double_char_swap_tests)
{
	It(test1){Assert::That(doubleSwap("aabbccc", 'a', 'b'), Equals("bbaaccc"));}
	It(test2){Assert::That(doubleSwap("random w#rds writt&n h&r&", '#', '&'), Equals("random w&rds writt#n h#r#"));}
	It(test3){Assert::That(doubleSwap("128 895 556 788 999", '8', '9'), Equals("129 985 556 799 888"));}
	It(test4){Assert::That(doubleSwap("mamma mia", 'm', 'a'), Equals("amaam aim"));}
	It(test5){Assert::That(doubleSwap("**##**", '*', '#'), Equals("##**##"));}
	It(test6){Assert::That(doubleSwap("123456789", '4', '5'), Equals("123546789"));}
	It(test7){Assert::That(doubleSwap("445566&&", '4', '&'), Equals("&&556644"));}
	It(test8){Assert::That(doubleSwap("!?@,.", ',', '.'), Equals("!?@.,"));}
	It(test9){Assert::That(doubleSwap("Q_Q T_T =.= >.<", 'Q', 'T'), Equals("T_T Q_Q =.= >.<"));}
	It(test10){Assert::That(doubleSwap("(Q_Q) (T_T) (=.=) (>.<)", ')', '('), Equals(")Q_Q( )T_T( )=.=( )>.<("));}
	It(test11){Assert::That(doubleSwap("<>", '>', '<'), Equals("><"));}
	It(test12){Assert::That(doubleSwap("001101", '1', '0'), Equals("110010"));}
	It(test13){Assert::That(doubleSwap("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~", 'a', 'b'), Equals("!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`bacdefghijklmnopqrstuvwxyz{|}~"));}
};

*/

void tasks::task2_3()
{
	std::cout << "Hello Task2_3!" << std::endl;
}

/* Task 2_4 - Keeping Count

Given a number, create a function which returns a new number based on the following rules:

For each digit, replace it by the number of times it appears in the number.
The final instance of the number will be an integer, not a string.
The following is a working example:

digitCount(136116) ➞ 312332
// The number 1 appears thrice, so replace all 1s with 3s.
// The number 3 appears only once, so replace all 3s with 1s.
// The number 6 appears twice, so replace all 6s with 2s.

Examples
digitCount(221333) ➞ 221333
digitCount(136116) ➞ 312332
digitCount(2) ➞ 1

Notes
Each test will have a positive whole number in its parameter.

long digitCount(long num) {

}

Describe(digit_Count) {
	It(T1){Assert::That(digitCount(221333), Equals(221333));}
	It(T2){Assert::That(digitCount(136116), Equals(312332));}
	It(T3){Assert::That(digitCount(2), Equals(1));}
	It(T4){Assert::That(digitCount(3410515780), Equals(1122222112));}
	It(T5){Assert::That(digitCount(24677734541), Equals(13133313131));}
	It(T6){Assert::That(digitCount(79825929634), Equals(13121323111));}
	It(T7){Assert::That(digitCount(36123594675), Equals(22112211212));}
	It(T8){Assert::That(digitCount(62849835970), Equals(11212211211));}
	It(T9){Assert::That(digitCount(29081455325), Equals(21111133123));}
	It(T10){Assert::That(digitCount(94717270184), Equals(12323131212));}
	It(T11){Assert::That(digitCount(72017589759), Equals(31113212322));}
	It(T12){Assert::That(digitCount(53569357419), Equals(32312231112));}
	It(T13){Assert::That(digitCount(33879999825), Equals(22214444211));}
	It(T14){Assert::That(digitCount(33600360627), Equals(33333333311));}
	It(T15){Assert::That(digitCount(12594580129), Equals(22221211222));}
	It(T16){Assert::That(digitCount(36852564216), Equals(13122231213));}
	It(T17){Assert::That(digitCount(34415793631), Equals(32221113132));}
	It(T18){Assert::That(digitCount(76384607724), Equals(32112213312));}
	It(T19){Assert::That(digitCount(8604519582), Equals(2111211221));}
	It(T20){Assert::That(digitCount(70209476552), Equals(22221121222));}
	It(T21){Assert::That(digitCount(20036302062), Equals(34422243423));}
	It(T22){Assert::That(digitCount(77674727011), Equals(55151515122));}
	It(T23){Assert::That(digitCount(17597066090), Equals(12122322323));}
	It(T24){Assert::That(digitCount(79082080537), Equals(21321323112));}
	It(T25){Assert::That(digitCount(30187177000), Equals(14213233444));}
	It(T26){Assert::That(digitCount(72916170033), Equals(21121222222));}
	It(T27){Assert::That(digitCount(11314637247), Equals(33232122122));}
	It(T28){Assert::That(digitCount(69095956141), Equals(23132322212));}
	It(T29){Assert::That(digitCount(66117263379), Equals(33222132221));}
	It(T30){Assert::That(digitCount(30491133624), Equals(31212233112));}
};

*/

void tasks::task2_4()
{
	std::cout << "Hello Task2_4!" << std::endl;
}

/* Task 2_5 - Count Letters in a Word Search

Create a function that counts the number of times a particular letter shows up in the word search.

Examples
letterCounter([
  ["D", "E", "Y", "H", "A", "D"],
  ["C", "B", "Z", "Y", "J", "K"],
  ["D", "B", "C", "A", "M", "N"],
  ["F", "G", "G", "R", "S", "R"],
  ["V", "X", "H", "A", "S", "S"]
], "D") ➞ 3

// "D" shows up 3 times: twice in the first row, once in the third row.

letterCounter([
  ["D", "E", "Y", "H", "A", "D"],
  ["C", "B", "Z", "Y", "J", "K"],
  ["D", "B", "C", "A", "M", "N"],
  ["F", "G", "G", "R", "S", "R"],
  ["V", "X", "H", "A", "S", "S"]
], "H") ➞ 2

Notes
You will always be given an array with five sub-arrays.

using namespace std;
int letterCounter(vector<vector<char>> arr, char c) {

}

Describe(word_search_tests)
{
	It(test1) {
		Assert::That(letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'D'), Equals(3));
	}

	It(test2) {
	Assert::That(letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'H'), Equals(2));
	}

	It(test3) {
		Assert::That(letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'Z'), Equals(1));
	}

	It(test4) {
		Assert::That(letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'R'), Equals(2));
	}

	It(test5) {
		Assert::That(letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'X'), Equals(1));
	}

	It(test6) {
		Assert::That(letterCounter({
		{'D', 'E', 'Y', 'H', 'A', 'D'},
		{'C', 'B', 'Z', 'Y', 'J', 'K'},
		{'D', 'B', 'C', 'A', 'M', 'N'},
		{'F', 'G', 'G', 'R', 'S', 'R'},
		{'V', 'X', 'H', 'A', 'S', 'S'}
		}, 'S'), Equals(3));
	}
};

*/

void tasks::task2_5()
{
	std::cout << "Hello Task2_5!" << std::endl;
}

/* Task 2_6 - Toy Car Workshop

You work in a toy car workshop, and your job is to build toy cars from a collection of parts. Each toy car needs 4 wheels, 1 car body, and 2 figures of people to be placed inside. Given the total number of wheels, car bodies and figures available, how many complete toy cars can you make?

Examples
cars(2, 48, 76) ➞ 0 // 2 wheels, 48 car bodies, 76 figures
cars(43, 15, 87) ➞ 10
cars(88, 37, 17) ➞ 8

Notes
N/A

int cars(int wheels, int bodies, int figures) {

}

Describe(cars_){
It(test1){Assert::That(cars(37, 15, 20), Equals(9));}
It(test2){Assert::That(cars(72, 7, 21), Equals(7));}
It(test3){Assert::That(cars(9, 44, 34), Equals(2));}
It(test4){Assert::That(cars(50, 38, 7), Equals(3));}
It(test5){Assert::That(cars(68, 9, 44), Equals(9));}
It(test6){Assert::That(cars(3, 29, 54), Equals(0));}
It(test7){Assert::That(cars(28, 34, 80), Equals(7));}
It(test8){Assert::That(cars(88, 50, 83), Equals(22));}
It(test9){Assert::That(cars(66, 18, 21), Equals(10));}
It(test10){Assert::That(cars(97, 6, 10), Equals(5));}
It(test11){Assert::That(cars(921, 310, 350), Equals(175));}
It(test12){Assert::That(cars(736, 430, 851), Equals(184));}
It(test13){Assert::That(cars(405, 379, 740), Equals(101));}
It(test14){Assert::That(cars(593, 78, 389), Equals(78));}
It(test15){Assert::That(cars(875, 370, 675), Equals(218));}
It(test16){Assert::That(cars(863, 274, 203), Equals(101));}
It(test17){Assert::That(cars(959, 331, 537), Equals(239));}
It(test18){Assert::That(cars(416, 340, 551), Equals(104));}
It(test19){Assert::That(cars(692, 348, 543), Equals(173));}
It(test20){Assert::That(cars(527, 412, 951), Equals(131));}
};

*/

void tasks::task2_6()
{
	std::cout << "Hello Task2_6!" << std::endl;
}

/* Task 2_7 - C*ns*r*d Str*ngs

Someone has attempted to censor my strings by replacing every vowel with a *, l*k* th*s. Luckily, I've been able to find the vowels that were removed.

Given a censored string and a string of the censored vowels, return the original uncensored string.

Example
uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") ➞ "Where did my vowels go?"
uncensor("abcd", "") ➞ "abcd"
uncensor("*PP*RC*S*", "UEAE") ➞ "UPPERCASE"

Notes
The vowels are given in the correct order.
The number of vowels will match the number of * characters in the censored string.

std::string uncensor(std::string str, std::string vowels) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo"), Equals("Where did my vowels go?"));}
	// Works with no vowels.
	It(test2){Assert::That(uncensor("abcd", ""), Equals("abcd"));}
	// Works with uppercase.
	It(test3){Assert::That(uncensor("*PP*RC*S*", "UEAE"), Equals("UPPERCASE"));}
	// Works with * at the end.
	It(test4){Assert::That(uncensor("Ch**s*, Gr*mm*t -- ch**s*", "eeeoieee"), Equals("Cheese, Grommit -- cheese"));}
	// Works with * at the start.
	It(test5){Assert::That(uncensor("*l*ph*nt", "Eea"), Equals("Elephant"));}
};

*/

void tasks::task2_7()
{
	std::cout << "Hello Task2_7!" << std::endl;
}

/* Task 2_8 - ReverseAndNot

Write a function that takes an integer i and returns a string with the integer backwards followed by the original integer.

To illustrate:

"123"
We reverse "123" to get "321" and then add "123" to the end, resulting in "321123".

Examples
reverseAndNot(123) ➞ "321123"
reverseAndNot(152) ➞ "251152"
reverseAndNot(123456789) ➞ "987654321123456789"

Notes
i is a non-negative integer.

std::string reverseAndNot(int i) {

}

Describe(ReverseAnd_Not) {
	It(T1){Assert::That(reverseAndNot(123), Equals("321123"));}
	It(T2){Assert::That(reverseAndNot(123456789), Equals("987654321123456789"));}
	It(T3){Assert::That(reverseAndNot(111), Equals("111111"));}
	It(T4){Assert::That(reverseAndNot(152), Equals("251152"));}
};

*/

void tasks::task2_8()
{
	std::cout << "Hello Task2_8!" << std::endl;
}

/* Task 2_9 - Simulate the Game "Rock, Paper, Scissors"

Create a function which simulates the game "rock, paper, scissors". The function takes the input of both players (rock, paper or scissors), first parameter from first player, second from second player. The function returns the result as such:

"Player 1 wins"
"Player 2 wins"
"TIE" (if both inputs are the same)
The rules of rock, paper, scissors, if not known:

Both players have to say either "rock", "paper" or "scissors" at the same time.
Rock beats scissors, paper beats rock, scissors beat paper.

Examples
rps("rock", "paper") ➞ "Player 2 wins"
rps("paper", "rock") ➞ "Player 1 wins"
rps("paper", "scissors") ➞ "Player 2 wins"
rps("scissors", "scissors") ➞ "TIE"
rps("scissors", "paper") ➞ "Player 1 wins"

Notes
There are several ways to solve this challenge.

std::string rps(std::string s1, std::string s2) {

}

Describe(tests)
{
  It(test1){Assert::That(rps("rock", "paper"), Equals("Player 2 wins"));}
	It(test2){Assert::That(rps("paper", "rock"), Equals("Player 1 wins"));}
	It(test3){Assert::That(rps("paper", "scissors"), Equals("Player 2 wins"));}
	It(test4){Assert::That(rps("scissors", "scissors"), Equals("TIE"));}
	It(test5){Assert::That(rps("scissors", "paper"), Equals("Player 1 wins"));}
};

*/

void tasks::task2_9()
{
	std::cout << "Hello Task2_9!" << std::endl;
}

/* Task 2_10 - XOR Swap Algorithm

This is more informational than a challenge. You can actually switch 2 variables with the XOR operation ^. XOR works with two arguments. It turns both arguments in their binary representation, and for each bit, returns 1 if they are different, 0 otherwise.
The return value is the decimal representation of the new binary string. So, if you don't know how to do it, go play around with it! After some time on paper, you will understand what is going on, and how it works.
Your job is to switch 2 variables using the XOR operator, which means your return statement should be return std::make_pair(a, b), but the variables need to be switched.

Examples
XOR(10, 41) ➞ (41, 10)
XOR(69, 420) ➞ (420, 69)
XOR(12345, 890412) ➞ (890412, 12345)

Notes
Remember to use std::make_pair() instead of just make_pair() (if you don't put using namespace std after #include <utility>).
If you're stuck, or don't have time to test out different cases, check the Resources tab.

#include <utility>
std::pair<int, int> XOR(int a, int b) {

}

Describe (tests){
	It (test1){Assert::That(XOR(10, 20), Equals(std::make_pair(20, 10)));}
	It (test2){Assert::That(XOR(1, 2), Equals(std::make_pair(2, 1)));}
	It (test3){Assert::That(XOR(555, 666), Equals(std::make_pair(666, 555)));}
	It (test4){Assert::That(XOR(3434, 4343), Equals(std::make_pair(4343, 3434)));}
	It (test5){Assert::That(XOR(5, 6), Equals(std::make_pair(6, 5)));}
	It (test6){Assert::That(XOR(666, 999), Equals(std::make_pair(999, 666)));}
};

*/

void tasks::task2_10()
{
	std::cout << "Hello Task2_10!" << std::endl;
}

/* Task 2_11 - Rectangle in Circle

Create a function that takes three numbers — the width and height of a rectangle, and the radius of a circle and returns true if the rectangle can fit inside the circle, false if it can't.

Examples
rectangleInCircle(8, 6, 5) ➞ true
rectangleInCircle(5, 9, 5) ➞ false
rectangleInCircle(4, 7, 4) ➞ false

Notes
N/A

bool rectangleInCircle(int w, int h, int radius) {

}

Describe(rectangle_in_circle)
{
  It(test1){Assert::That(rectangleInCircle(5, 12, 7), Equals(true));}
	It(test2){Assert::That(rectangleInCircle(5, 12, 6), Equals(false));}
	It(test3){Assert::That(rectangleInCircle(3, 7, 4), Equals(true));}
	It(test4){Assert::That(rectangleInCircle(4, 7, 4), Equals(false));}
	It(test5){Assert::That(rectangleInCircle(11, 1, 6), Equals(true));}
	It(test6){Assert::That(rectangleInCircle(21, 12, 12), Equals(false));}
};

*/

void tasks::task2_11()
{
	std::cout << "Hello Task2_11!" << std::endl;
}

/* Task 2_12 - Recursion: Reverse a String

Write a function that reverses a string. Make your function recursive.

Examples
reverse("hello") ➞ "olleh"
reverse("world") ➞ "dlrow"
reverse("a") ➞ "a"
reverse("") ➞ ""

Notes
For non-base cases, your function must call itself at least once.
Check the Resources tab for info on recursion.

std::string reverse(std::string str) {

}

Describe(reverse_string)
{
	It(Test1){Assert::That(reverse("hello"), Equals("olleh"));}
	It(Test2){Assert::That(reverse("world"), Equals("dlrow"));}
	It(Test3){Assert::That(reverse("a"), Equals("a"));}
	It(Test4){Assert::That(reverse(""), Equals(""));}
};

*/

void tasks::task2_12()
{
	std::cout << "Hello Task2_12!" << std::endl;
}

/* Task 2_13 - Perfect Square Patch

Create a function that takes an integer and outputs an n x n square solely consisting of the integer n.

Examples
squarePatch(3) ➞ [
  [3, 3, 3],
  [3, 3, 3],
  [3, 3, 3]
]

squarePatch(5) ➞ [
  [5, 5, 5, 5, 5],
  [5, 5, 5, 5, 5],
  [5, 5, 5, 5, 5],
  [5, 5, 5, 5, 5],
  [5, 5, 5, 5, 5]
]

squarePatch(1) ➞ [
  [1]
]

squarePatch(0) ➞ []

Notes
n >= 0.
If n = 0, return an empty array.

std::vector< std::vector<int> > squarePatch(int n) {

}

Describe(square_patch_tests)
{
	It(test1)
	{
		Assert::That(squarePatch(3), Equals(std::vector<std::vector<int>>({
			{3, 3, 3},
			{3, 3, 3},
			{3, 3, 3}
		})));
	}
	It(test2)
	{
		Assert::That(squarePatch(2), Equals(std::vector<std::vector<int>>({
			{2, 2},
			{2, 2}
		})));
	}
		It(test3)
	{
		Assert::That(squarePatch(4), Equals(std::vector<std::vector<int>>({
			{4, 4, 4, 4},
			{4, 4, 4, 4},
			{4, 4, 4, 4},
			{4, 4, 4, 4}
		})));
	}
	It(test4)
	{
		Assert::That(squarePatch(5), Equals(std::vector<std::vector<int>>({
			{5, 5, 5, 5, 5},
			{5, 5, 5, 5, 5},
			{5, 5, 5, 5, 5},
			{5, 5, 5, 5, 5},
			{5, 5, 5, 5, 5}
		})));
	}
		It(test5)
	{
		Assert::That(squarePatch(6), Equals(std::vector<std::vector<int>>({
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6},
			{6, 6, 6, 6, 6, 6}
		})));
	}
};

*/

void tasks::task2_13()
{
	std::cout << "Hello Task2_13!" << std::endl;
}

/* Task 2_14 - Simon Says

Create a function that takes in two arrays and returns true if the second array follows the first array by one element, and false otherwise. In other words, determine if the second array is the first array shifted to the right by 1.

Examples
simonSays([1, 2], [5, 1]) ➞ true
simonSays([1, 2], [5, 5]) ➞ false
simonSays([1, 2, 3, 4, 5], [0, 1, 2, 3, 4]) ➞ true
simonSays([1, 2, 3, 4, 5], [5, 5, 1, 2, 3]) ➞ false

Notes
Both input arrays will be of the same length, and will have a minimum length of 2.
The values of the 0-indexed element in the second list and the n-1th indexed element in the first list do not matter.

bool simonSays(std::vector<int> arr1, std::vector<int> arr2) {

}

Describe(simon_says)
{
	It(Test1){Assert::That(simonSays({1, 2, 3, 4, 5}, {0, 1, 2, 3, 4}), Equals(true));}
	It(Test2){Assert::That(simonSays({1, 2, 3, 4, 5}, {5, 5, 1, 2, 3}), Equals(false));}
	It(Test3){Assert::That(simonSays({1, 2}, {5, 1}), Equals(true));}
	It(Test4){Assert::That(simonSays({1, 2, 3, 4, 5}, {0, 1, 2, 3, 3}), Equals(false));}
	It(Test5){Assert::That(simonSays({1, 2, 3}, {0, 1, 2}), Equals(true));}
};

*/

void tasks::task2_14()
{
	std::cout << "Hello Task2_14!" << std::endl;
}

/* Task 2_15 - Calculate the Median

Create a function that takes an array of numbers and return its median. If the input array is even length, take the average of the two medians, else, take the single median.

Examples
median([2, 5, 6, 2, 6, 3, 4]) ➞ 4
median([21.4323, 432.54, 432.3, 542.4567]) ➞ 432.4
median([-23, -43, -29, -53, -67]) ➞ -43

Notes
Input can be any negative or positive number.
Input array will contain at least four numbers.
See Resources tab for info on calculating the median.

float median(std::vector<int> arr) {

}

Describe(get_median_tests)
{
	// Even number of integers
	It(even_number_of_integers_1){Assert::That(median({342, 98, 5456, 32, 786, 432, 890, 321}), Equals(387));}
	It(even_number_of_integers_2){Assert::That(median({32786, 7837, 83736, 83736, 10383, 738393}), Equals(58261));}
	It(even_number_of_integers_3){Assert::That(median({0, 0, 0, 0}), Equals(0));}
	It(even_number_of_integers_4){Assert::That(median({238, 432, 897, 710}), Equals(571));}
	// Odd number of integers
	It(odd_number_of_integers_1){Assert::That(median({20, 40, 20, 30, 50, 60, 70, 0, 20}), Equals(30));}
	It(odd_number_of_integers_2){Assert::That(median({32, 5, 78, 32, 4, 5, 3}), Equals(5));}
	It(odd_number_of_integers_3){Assert::That(median({7685, 83736, 38376, 73638, 7337}), Equals(38376));}
	// Should work with a float median
	It(should_work_with_a_float_median){Assert::That(median({1, 0, 1, 0, 0, 0, 1, 1}), Equals(0.5));}
	// Should work with negative values
	It(should_work_with_negative_values_1){Assert::That(median({-20, 40, 30, -2, 40, -13}), Equals(14));}
	It(should_work_with_negative_values_2){Assert::That(median({-30, -42, -60, -10, -30, -50}), Equals(-36));}
};

*/

void tasks::task2_15()
{
	std::cout << "Hello Task2_15!" << std::endl;
}

/* Task 2_16 - Pi to N Decimal Places

Given a number n, write a function that returns PI to n decimal places.

Examples
myPi(5) ➞ 3.14159
myPi(4) ➞ 3.1416
myPi(15) ➞ 3.141592653589793

Notes
n will not be above 15, to keep this challenge simple.
Round up the last digit if the next digit in PI is greater or equal to 5 (see second example above).
The return value must be a number, not a string.

double myPi(int n) {

}

Describe(my_pi_tests)
{
  It(test1){Assert::That(myPi(0), Equals(3));}
  It(test2){Assert::That(myPi(1), Equals(3.1));}
  It(test3){Assert::That(myPi(2), Equals(3.14));}
  It(test4){Assert::That(myPi(3), Equals(3.142));}
  It(test5){Assert::That(myPi(4), Equals(3.1416)); }
  It(test6){Assert::That(myPi( 5), Equals(3.14159));}
  It(test7){Assert::That(myPi( 6), Equals(3.141593));}
  It(test8){Assert::That(myPi( 7), Equals(3.1415927));}
  It(test9){Assert::That(myPi( 8), Equals(3.14159265));}
  It(test10){Assert::That(myPi( 9), Equals(3.141592654));}
  It(test11){Assert::That(myPi(10), Equals(3.1415926536));}
  It(test12){Assert::That(myPi(11), Equals(3.14159265359));}
  It(test13){Assert::That(myPi(12), Equals(3.141592653590));}
  It(test14){Assert::That(myPi(13), Equals(3.1415926535898));}
  It(test15){Assert::That(myPi(14), Equals(3.14159265358979));}
  It(test16){Assert::That(myPi(15), Equals(3.141592653589793));}
};

*/

void tasks::task2_16()
{
	std::cout << "Hello Task2_16!" << std::endl;
}

/* Task 2_17 - GCD and LCM ( Part 1)

Create a function that takes two numbers as arguments and returns the Greatest Common Divisor (GCD) of the two numbers.

Examples
gcd(3, 5) ➞ 1
gcd(14, 28) ➞ 14
gcd(4, 18) ➞ 2

Notes
The GCD is the highest number that can divide both arguments without a remainder.

int gcd(int a, int b) {

}

Describe(basic_tests)
{
	It(test1){Assert::That(gcd(6, 10), Equals(2));}
	It(test2){Assert::That(gcd(17, 85), Equals(17));}
	It(test3){Assert::That(gcd(18, 153), Equals(9));}
	It(test4){Assert::That(gcd(14, 14), Equals(14));}
	It(test5){Assert::That(gcd(6, 31), Equals(1));}
};

*/

void tasks::task2_17()
{
	std::cout << "Hello Task2_17!" << std::endl;
}

/* Task 2_18 - Joining Digits Together

Create a function which takes in a number n as input and returns all numbers up to and including n joined together in a string. Separate each digit from each other with the character "-".

Examples
joinDigits(4) ➞ "1-2-3-4"
joinDigits(11) ➞ "1-2-3-4-5-6-7-8-9-1-0-1-1"
joinDigits(15) ➞ "1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5"

Notes
Remember to start at 1 and include n as the last number.

std::string joinDigits(int n) {

}

Describe(joinDigits_){
It(test1){Assert::That(joinDigits(1), Equals("1"));}
It(test2){Assert::That(joinDigits(2), Equals("1-2"));}
It(test3){Assert::That(joinDigits(3), Equals("1-2-3"));}
It(test4){Assert::That(joinDigits(4), Equals("1-2-3-4"));}
It(test5){Assert::That(joinDigits(5), Equals("1-2-3-4-5"));}
It(test6){Assert::That(joinDigits(6), Equals("1-2-3-4-5-6"));}
It(test7){Assert::That(joinDigits(7), Equals("1-2-3-4-5-6-7"));}
It(test8){Assert::That(joinDigits(8), Equals("1-2-3-4-5-6-7-8"));}
It(test9){Assert::That(joinDigits(9), Equals("1-2-3-4-5-6-7-8-9"));}
It(test10){Assert::That(joinDigits(10), Equals("1-2-3-4-5-6-7-8-9-1-0"));}
It(test11){Assert::That(joinDigits(11), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1"));}
It(test12){Assert::That(joinDigits(12), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2"));}
It(test13){Assert::That(joinDigits(13), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3"));}
It(test14){Assert::That(joinDigits(14), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4"));}
It(test15){Assert::That(joinDigits(15), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5"));}
It(test16){Assert::That(joinDigits(16), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6"));}
It(test17){Assert::That(joinDigits(17), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7"));}
It(test18){Assert::That(joinDigits(18), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8"));}
It(test19){Assert::That(joinDigits(19), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9"));}
It(test20){Assert::That(joinDigits(20), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0"));}
It(test21){Assert::That(joinDigits(21), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1"));}
It(test22){Assert::That(joinDigits(22), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2"));}
It(test23){Assert::That(joinDigits(23), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3"));}
It(test24){Assert::That(joinDigits(24), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4"));}
It(test25){Assert::That(joinDigits(25), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5"));}
It(test26){Assert::That(joinDigits(26), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6"));}
It(test27){Assert::That(joinDigits(27), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7"));}
It(test28){Assert::That(joinDigits(28), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8"));}
It(test29){Assert::That(joinDigits(29), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9"));}
It(test30){Assert::That(joinDigits(30), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0"));}
It(test31){Assert::That(joinDigits(31), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1"));}
It(test32){Assert::That(joinDigits(32), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2"));}
It(test33){Assert::That(joinDigits(33), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3"));}
It(test34){Assert::That(joinDigits(34), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4"));}
It(test35){Assert::That(joinDigits(35), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5"));}
It(test36){Assert::That(joinDigits(36), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6"));}
It(test37){Assert::That(joinDigits(37), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7"));}
It(test38){Assert::That(joinDigits(38), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8"));}
It(test39){Assert::That(joinDigits(39), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9"));}
It(test40){Assert::That(joinDigits(40), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0"));}
It(test41){Assert::That(joinDigits(41), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1"));}
It(test42){Assert::That(joinDigits(42), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2"));}
It(test43){Assert::That(joinDigits(43), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2-4-3"));}
It(test44){Assert::That(joinDigits(44), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2-4-3-4-4"));}
It(test45){Assert::That(joinDigits(45), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2-4-3-4-4-4-5"));}
It(test46){Assert::That(joinDigits(46), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2-4-3-4-4-4-5-4-6"));}
It(test47){Assert::That(joinDigits(47), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2-4-3-4-4-4-5-4-6-4-7"));}
It(test48){Assert::That(joinDigits(48), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2-4-3-4-4-4-5-4-6-4-7-4-8"));}
It(test49){Assert::That(joinDigits(49), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2-4-3-4-4-4-5-4-6-4-7-4-8-4-9"));}
It(test50){Assert::That(joinDigits(50), Equals("1-2-3-4-5-6-7-8-9-1-0-1-1-1-2-1-3-1-4-1-5-1-6-1-7-1-8-1-9-2-0-2-1-2-2-2-3-2-4-2-5-2-6-2-7-2-8-2-9-3-0-3-1-3-2-3-3-3-4-3-5-3-6-3-7-3-8-3-9-4-0-4-1-4-2-4-3-4-4-4-5-4-6-4-7-4-8-4-9-5-0"));}
};

*/

void tasks::task2_18()
{
	std::cout << "Hello Task2_18!" << std::endl;
}

/* Task 2_19 - Owofied a Sentence

Create a function that takes a sentence and turns every "i" into "wi" and "e" into "we", and add "owo" at the end.

Examples
owofied("I'm gonna ride 'til I can't no more")
➞ "I'm gonna rwidwe 'twil I can't no morwe owo"
owofied("Do you ever feel like a plastic bag")
➞ "Do you wevwer fwewel lwikwe a plastwic bag owo"
owofied("Cause baby you're a firework")
➞ "Causwe baby you'rwe a fwirwework owo"

Notes
Don't forget to return the value!
There's a space in front of owo!

std::string owofied(std::string sentence) {

}

Describe(tests)
{
  It(test1){Assert::That(owofied("I'm gonna ride 'til I can't no more"), Equals("I'm gonna rwidwe 'twil I can't no morwe owo"));}
	It(test2){Assert::That(owofied("Do you ever feel like a plastic bag"), Equals("Do you wevwer fwewel lwikwe a plastwic bag owo"));}
	It(test3){Assert::That(owofied("Cause baby you're a firework"), Equals("Causwe baby you'rwe a fwirwework owo"));}
	It(test4){Assert::That(owofied("Never gonna give you up"), Equals("Nwevwer gonna gwivwe you up owo"));}
	It(test5){Assert::That(owofied("We've known each other for so long"), Equals("Wwe'vwe known weach othwer for so long owo"));}
	It(test6){Assert::That(owofied("Never gonna let you down"), Equals("Nwevwer gonna lwet you down owo"));}
	It(test7){Assert::That(owofied("Shine bright like a diamond"), Equals("Shwinwe brwight lwikwe a dwiamond owo"));}
};

*/

void tasks::task2_19()
{
	std::cout << "Hello Task2_19!" << std::endl;
}

/* Task 2_20 - Hot Pics of Danny DeVito!

I'm trying to watch some lectures to study for my next exam but I keep getting distracted by meme compilations, vine compilations, anime, and more on my favorite video platform.

Your job is to help me create a function that takes a string and checks to see if it contains the following words or phrases:

"anime"
"meme"
"vines"
"roasts"
"Danny DeVito"
If it does, return "NO!". Otherwise, return "Safe watching!".

Examples
preventDistractions("vines that butter my eggroll") ➞ "NO!"
preventDistractions("Hot pictures of Danny DeVito") ➞ "NO!"
preventDistractions("How to ace BC Calculus in 5 Easy Steps") ➞ "Safe watching!"

Notes
N/A

std::string preventDistractions(std::string str) {

}

Describe(danny_devito)
{
  It(test1){Assert::That(preventDistractions("vines that butter my eggroll"), Equals("NO!"));}
	It(test2){Assert::That(preventDistractions("Hot pictures of Danny DeVito"), Equals("NO!"));}
	It(test3){Assert::That(preventDistractions("top 10 insert random yt celebrity roasts"), Equals("NO!"));}
	It(test4){Assert::That(preventDistractions("best anime food ever!"), Equals("NO!"));}
	It(test5){Assert::That(preventDistractions("How to Be a Productive Member of Society"), Equals("Safe watching!"));}
};

*/

void tasks::task2_20()
{
	std::cout << "Hello Task2_20!" << std::endl;
}

/* Task 2_21 - Check if the String is a Palindrome

A palindrome is a word, phrase, number or other sequence of characters which reads the same backward or forward, such as madam or kayak.

Write a function that takes a string and determines whether it's a palindrome or not. The function should return a boolean (true or false value).

Examples
isPalindrome("Neuquen") ➞ true
isPalindrome("Not a palindrome") ➞ false
isPalindrome("A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!") ➞ true

Notes
Should be case insensitive.
Special characters (punctuation or spaces) should be ignored.

bool isPalindrome(std::string str) {

}

Describe(palindrome_tests)
{
	It(test1){Assert::That(isPalindrome("A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!"), Equals(true));}
	It(test2){Assert::That(isPalindrome("Neuquen"), Equals(true));}
	It(test3){Assert::That(isPalindrome("Not a palindrome"), Equals(false));}
};

*/

void tasks::task2_21()
{
	std::cout << "Hello Task2_21!" << std::endl;
}

/* Task 2_22 - Find the nth Tetrahedral Number https://edabit.com/challenge/kkyKnXoSqtbGnmqah

A tetrahedron is a pyramid with a triangular base and three sides. A tetrahedral number is a number of items within a tetrahedron.

Create a function that takes an integer n and returns the nth tetrahedral number.

Alternative Text (img, follow the link)

Examples
tetra(2) ➞ 4
tetra(5) ➞ 35
tetra(6) ➞ 56

Notes
There is a formula for the nth tetrahedral number.

int tetra(int n) {

}

Describe(Tetra_) {
	It(T1){Assert::That(tetra(1), Equals(1));}
  It(T2){Assert::That(tetra(2), Equals(4));}
  It(T3){Assert::That(tetra(3), Equals(10));}
	It(T4){Assert::That(tetra(4), Equals(20));}
	It(T5){Assert::That(tetra(5), Equals(35));}
	It(T6){Assert::That(tetra(9), Equals(165));}
};

*/

void tasks::task2_22()
{
	std::cout << "Hello Task2_22!" << std::endl;
}

/* Task 2_23 - Is One Array a Subset of Another?

Create a function that returns true if the first array is a subset of the second. Return false otherwise.

Examples
isSubset([3, 2, 5], [5, 3, 7, 9, 2]) ➞ true
isSubset([8, 9], [7, 1, 9, 8, 4, 5, 6]) ➞ true
isSubset([1, 2], [3, 5, 9, 1]) ➞ false

Notes
Both arrays will contain only unique values.

bool isSubset(std::vector<int> arr1, std::vector<int> arr2) {

}

Describe(subset_validation)
{
	It(T1){Assert::That(isSubset({3, 2, 5}, {5, 3, 7, 9, 2}), Equals(true));}
	It(T2){Assert::That(isSubset({8, 9}, {7, 1, 9, 8, 4, 5, 6}), Equals(true));}
	It(T3){Assert::That(isSubset({1, 2}, {1, 2, 3}), Equals(true));}
	It(T4){Assert::That(isSubset({1, 2}, {3, 5, 9, 1}), Equals(false));}
	It(T5){Assert::That(isSubset({1, 2, 3, 4}, {4, 3, 2, 1}), Equals(true));}
	It(T6){Assert::That(isSubset({7, 9, 8, 4, 2}, {7, 9, 5, 8, 4}), Equals(false));}
};

*/

void tasks::task2_23()
{
	std::cout << "Hello Task2_23!" << std::endl;
}

/* Task 2_24 - Capitalize the Names

Create a function that takes an array of names and returns an array where only the first letter of each name is capitalized.

Examples
capMe(["mavis", "senaida", "letty"]) ➞ ["Mavis", "Senaida", "Letty"]
capMe(["samuel", "MABELLE", "letitia", "meridith"]) ➞ ["Samuel", "Mabelle", "Letitia", "Meridith"]
capMe(["Slyvia", "Kristal", "Sharilyn", "Calista"]) ➞ ["Slyvia", "Kristal", "Sharilyn", "Calista"]

Notes
Don't change the order of the original array.
Notice in the second example above, "MABELLE" is returned as "Mabelle".

std::vector<std::string> capMe(std::vector<std::string> arr) {

}

Describe(cap_me)
{
  It(test1){Assert::That(capMe({"mavis", "senaida", "letty"}), Equals(std::vector<std::string>({"Mavis", "Senaida", "Letty"})));}
  It(test2){Assert::That(capMe({"samuel", "MABELLE", "letitia", "meridith"}), Equals(std::vector<std::string>({"Samuel", "Mabelle", "Letitia", "Meridith"})));}
  It(test3){Assert::That(capMe({"Slyvia", "Kristal", "Sharilyn", "Calista"}), Equals(std::vector<std::string>({"Slyvia", "Kristal", "Sharilyn", "Calista"})));}
  It(test4){Assert::That(capMe({"krisTopher", "olIva", "herminiA"}), Equals(std::vector<std::string>({"Kristopher", "Oliva", "Herminia"})));}
  It(test5){Assert::That(capMe({"luke", "marsha", "stanford"}), Equals(std::vector<std::string>({"Luke", "Marsha", "Stanford"})));}
  It(test6){Assert::That(capMe({"kara"}), Equals(std::vector<std::string>({"Kara"})));}
  It(test7){Assert::That(capMe({"mARIANN", "jOI", "gEORGEANN"}), Equals(std::vector<std::string>({"Mariann", "Joi", "Georgeann"})));}
};

*/

void tasks::task2_24()
{
	std::cout << "Hello Task2_24!" << std::endl;
}

/* Task 2_25 - Adding Parity Bits

Parity bits are used as a very simple checksum to ensure that binary data isn't corrupted during transit. Here's how they work:

If a binary string has an odd number of 1's, the parity bit is a 1.
If a binary string has an even number of 1's, the parity bit is a 0.
The parity bit is appended to the end of the binary string.
Create a function that adds the correct parity bit to a binary string.

Worked Example
addParityBit("1011011") ➞ "10110111"

// There are five 1's.
// Since five is odd, the parity bit should be a 1.
// Add the parity bit to the end of the string.
// Return the result.
Examples
addParityBit("0010110") ➞ "00101101"
addParityBit("1100000") ➞ "11000000"

Notes
All inputs will be 7-bits long (so that the parity bit makes it a full byte).

std::string addParityBit(std::string b) {

}

Describe(addParityBit_) {
	It(test1){Assert::That(addParityBit("0010110"), Equals("00101101"));}
	It(test2){Assert::That(addParityBit("1100000"), Equals("11000000"));}
	It(test3){Assert::That(addParityBit("1111111"), Equals("11111111"));}
	It(test4){Assert::That(addParityBit("1010011"), Equals("10100110"));}
};

*/

void tasks::task2_25()
{
	std::cout << "Hello Task2_25!" << std::endl;
}

/* Task 2_26 - Prefixes vs. Suffixes

Create two functions: isPrefix(word, prefix-) and isSuffix(word, -suffix).

isPrefix should return true if it begins with the prefix argument.
isSuffix should return true if it ends with the suffix argument.
Otherwise return false.

Examples
isPrefix("automation", "auto-") ➞ true
isSuffix("arachnophobia", "-phobia") ➞ true
isPrefix("retrospect", "sub-") ➞ false
isSuffix("vocation", "-logy") ➞ false

Notes
The prefix and suffix arguments have dashes - in them.

bool isPrefix(std::string word, std::string prefix) {

}

bool isSuffix(std::string word, std::string suffix) {

}

Describe(prefix_suffix_tests)
{
	// Prefix tests
	It(prefix_test_1){Assert::That(isPrefix("automation", "auto-"), Equals(true));}
	It(prefix_test_2){Assert::That(isPrefix("superfluous", "super-"), Equals(true));}
	It(prefix_test_3){Assert::That(isPrefix("oration", "mega-"), Equals(false));}
	It(prefix_test_4){Assert::That(isPrefix("retrospect", "sub-"), Equals(false));}
	// Suffix tests
	It(suffix_test_1){Assert::That(isSuffix("arachnophobia", "-phobia"), Equals(true));}
	It(suffix_test_2){Assert::That(isSuffix("rhinoplasty", "-plasty"), Equals(true));}
	It(suffix_test_3){Assert::That(isSuffix("movement", "-scope"), Equals(false));}
	It(suffix_test_4){Assert::That(isSuffix("vocation", "-logy"), Equals(false));}
};

*/

void tasks::task2_26()
{
	std::cout << "Hello Task2_26!" << std::endl;
}

/* Task 2_27 - Geometry 1: Length of Line Segment

Write a function that takes coordinates of two points on a two-dimensional plane and returns the length of the line segment connecting those two points.

Examples
lineLength([15, 7], [22, 11]) ➞ 8.06
lineLength([0, 0], [0, 0]) ➞ 0
lineLength([0, 0], [1, 1]) ➞ 1.41

Notes
The order of the given numbers is X, Y.
This challenge is easier than it looks.
Round your result to two decimal places.

float lineLength(std::pair<int,int> a1, std::pair<int,int> a2) {

}

Describe(lineLength_){
It(test1){Assert::That(lineLength({15, 7}, {22, 11}), Equals(8.06f));}
It(test2){Assert::That(lineLength({0, 0}, {0, 0}), Equals(0));}
It(test3){Assert::That(lineLength({0, 0}, {1, 1}), Equals(1.41f));}
It(test4){Assert::That(lineLength({30, 10}, {13, -5}), Equals(22.67f));}
};

*/

void tasks::task2_27()
{
	std::cout << "Hello Task2_27!" << std::endl;
}

/* Task 2_28 - Calculate the Mean

Create a function that takes an array of numbers and returns the mean (average) of all those numbers.

Examples
mean([1, 0, 4, 5, 2, 4, 1, 2, 3, 3, 3]) ➞ 2.55
mean([2, 3, 2, 3]) ➞ 2.50
mean([3, 3, 3, 3, 3]) ➞ 3.00

Notes
Round to two decimal places.
You can expect a number ranging from 0 to 10,000.

float mean(std::vector<int> arr) {

}

Describe(tests)
{
  It(test1){Assert::That(mean({1, 0, 4, 5, 2, 4, 1, 2, 3, 3, 3}), Equals(float(2.55)));}
  It(test2){Assert::That(mean({324, 543, 654, 9876}), Equals(float(2849.25)));}
  It(test3){Assert::That(mean({0, 0, 0, 0}), Equals(float(0.00)));}
  It(test4){Assert::That(mean({30, 40, 20, 100, 30}), Equals(float(44.00)));}
  It(test5){Assert::That(mean({1, 1, 1, 0}), Equals(float(0.75)));}
  It(test6){Assert::That(mean({1, 1, 0, 1, 2, 1, 1, 1, 0, 0}), Equals(float(0.80)));}
  It(test7){Assert::That(mean({10000}), Equals(float(10000.00)));}
};

*/

void tasks::task2_28()
{
	std::cout << "Hello Task2_28!" << std::endl;
}

/* Task 2_29 - A Capital Challenge

Given two strings, s1 and s2, select only the characters in each string where the character in the same position in the other string is in uppercase. Return these as a single string.
To illustrate, given the strings s1 = "heLLo" and s2 = "GUlp", we select the letters "he" from s1, because "G" and "U" are uppercase. We then select "lp" from s2, because "LL" is in uppercase. Finally, we join these together and return "help".

Examples
selectLetters("heLLO", "GUlp") ➞ "help"
selectLetters("1234567", "XxXxX")  ➞ "135"
selectLetters("EVERYTHING", "SomeThings") ➞  "EYSomeThings"

Notes
The strings don't have to be the same length.
Strings can contain non-alphabetic characters.

std::string selectLetters(std::string s1, std::string s2) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(selectLetters("heLLO", "GUlp"), Equals("help"));}
	It(test2){Assert::That(selectLetters("1234567", "XxXxX"), Equals("135"));}
	It(test3){Assert::That(selectLetters("EVERYTHING", "SomeThings"), Equals("EYSomeThings"));}
	It(test4){Assert::That(selectLetters("PaTtErN", "pAtTeRn"), Equals("atrpten"));}
	It(test5){Assert::That(selectLetters("nothing", "nothing"), Equals(""));}
	It(test6){Assert::That(selectLetters("What do you think of it so far?", "RUBBISH!"), Equals("What doR"));}
};

*/

void tasks::task2_29()
{
	std::cout << "Hello Task2_29!" << std::endl;
}

/* Task 2_30 - Filter Repeating Character Strings

Create a function that keeps only strings with repeating identical characters (in other words, it has a set size of 1).

Examples
identicalFilter(["aaaaaa", "bc", "d", "eeee", "xyz"])
➞ ["aaaaaa", "d", "eeee"]
identicalFilter(["88", "999", "22", "545", "133"])
➞ ["88", "999", "22"]
identicalFilter(["xxxxo", "oxo", "xox", "ooxxoo", "oxo"])
➞ []

Notes
A string with a single character is trivially counted as a string with repeating identical characters.
If there are no strings with repeating identical characters, return an empty array (see example #3).

std::vector<std::string> identicalFilter(std::vector<std::string> arr) {

}

Describe(filter_identical_chars)
{
	It(test1){Assert::That(identicalFilter({"aaaaaa", "bc", "d", "eeee", "xyz"}), Equals(std::vector<std::string>({"aaaaaa", "d", "eeee"})));}
	It(test2){Assert::That(identicalFilter({"88", "999", "22", "545", "133"}), Equals(std::vector<std::string>({"88", "999", "22"})));}
	It(test3){Assert::That(identicalFilter({"xxxxo", "oxo", "xox", "ooxxoo", "oxo"}), Equals(std::vector<std::string>({})));}
	It(test4){Assert::That(identicalFilter({"1", "2", "3"}), Equals(std::vector<std::string>({"1", "2", "3"})));}
};

*/

void tasks::task2_30()
{
	std::cout << "Hello Task2_30!" << std::endl;
}

/* Task 2_31 - Odd Up, Even Down — N Times

Create a function that performs an even-odd transform to an array, n times. Each even-odd transformation:
Adds two (+2) to each odd integer.
Subtracts two (-2) to each even integer.

Examples
evenOddTransform([3, 4, 9], 3) ➞ [9, -2, 15]  // Since [3, 4, 9] => [5, 2, 11] => [7, 0, 13] => [9, -2, 15]
evenOddTransform([0, 0, 0], 10) ➞ [-20, -20, -20]
evenOddTransform([1, 2, 3], 1) ➞ [3, 0, 5]

Notes
N/A

std::vector<int> evenOddTransform(std::vector<int> arr, int n) {

}

Describe(odd_even_transform)
{
	It(T1){Assert::That(evenOddTransform({3, 4, 9}, 3), Equals(std::vector<int>({9, -2, 15})));}
	It(T2){Assert::That(evenOddTransform({0, 0, 0}, 10), Equals(std::vector<int>({-20, -20, -20})));}
	It(T3){Assert::That(evenOddTransform({1, 2, 3}, 1), Equals(std::vector<int>({3, 0, 5})));}
	It(T4){Assert::That(evenOddTransform({55, 90, 830}, 2), Equals(std::vector<int>({59, 86, 826})));}
};

*/

void tasks::task2_31()
{
	std::cout << "Hello Task2_31!" << std::endl;
}

/* Task 2_32 - Lexicographically First and Last

Write a function that returns the lexicographically first and lexicographically last rearrangements of a string. Output the results in the following manner:

firstAndLast(string) ➞ [first, last]

Examples
firstAndLast("marmite") ➞ ["aeimmrt", "trmmiea"]
firstAndLast("bench") ➞ ["bcehn", "nhecb"]
firstAndLast("scoop") ➞ ["coops", "spooc"]

Notes
Lexicographically first: the permutation of the string that would appear first in the English dictionary (if the word existed).
Lexicographically last: the permutation of the string that would appear last in the English dictionary (if the word existed).

std::vector<std::string> firstAndLast(std::string s) {

}

Describe(lexicographically_first_last_tests)
{
	It(test1){Assert::That(firstAndLast("marmite"), Equals(std::vector<std::string>({"aeimmrt", "trmmiea"})));}
	It(test2){Assert::That(firstAndLast("bench"), Equals(std::vector<std::string>({"bcehn", "nhecb"})));}
	It(test3){Assert::That(firstAndLast("scoop"), Equals(std::vector<std::string>({"coops", "spooc"})));}
	It(test4){Assert::That(firstAndLast("fanatic"), Equals(std::vector<std::string>({"aacfint", "tnifcaa"})));}
};

*/

void tasks::task2_32()
{
	std::cout << "Hello Task2_32!" << std::endl;
}

/* Task 2_33 - Mini Peaks

Write a function that returns all the elements in an array that are strictly greater than their adjacent left and right neighbors.

Examples
miniPeaks([4, 5, 2, 1, 4, 9, 7, 2]) ➞ [5, 9] // 5 has neighbours 4 and 2, both are less than 5.
miniPeaks([1, 2, 1, 1, 3, 2, 5, 4, 4]) ➞ [2, 3, 5]
miniPeaks([1, 2, 3, 4, 5, 6]) ➞ []

Notes
Do not count boundary numbers, since they only have one left/right neighbor.
If no such numbers exist, return an empty array.

using namespace std;
vector<int> miniPeaks(vector<int> arr) {

}

Describe(mini_peak_tests)
{
	It(test1){Assert::That(miniPeaks({4, 5, 2, 1, 4, 9, 7, 2}), Equals(std::vector<int>({5, 9})));}
	It(test2){Assert::That(miniPeaks({1, 2, 1, 1, 3, 2, 5, 4, 4}), Equals(std::vector<int>({2, 3, 5})));}
	It(test3){Assert::That(miniPeaks({1, 2, 3, 4, 5, 6}), Equals(std::vector<int>({})));}
	It(test4){Assert::That(miniPeaks({6, 4, 3}), Equals(std::vector<int>({})));}
	It(test5){Assert::That(miniPeaks({1, 1, 1, 1, 2, 1, 1, 1}), Equals(std::vector<int>({2})));}
	It(test6){Assert::That(miniPeaks({1, 9, 1, 8, 2, 7, 6}), Equals(std::vector<int>({9, 8, 7})));}
	It(test7){Assert::That(miniPeaks({7, 8, 7, 8, 7, 8, 5, 1, 2, 0}), Equals(std::vector<int>({8, 8, 8, 2})));}
};

*/

void tasks::task2_33()
{
	std::cout << "Hello Task2_33!" << std::endl;
}

/* Task 2_34 - Check if the Same Case

Create a function that returns true if an input string contains only uppercase or only lowercase letters.

Examples
sameCase("hello") ➞ true
sameCase("HELLO") ➞ true
sameCase("Hello") ➞ false
sameCase("ketcHUp") ➞ false

Notes
N/A

bool sameCase(std::string str) {

}

Describe(same_case_tests) {
	It(test1){Assert::That(sameCase("HELLO"), Equals(true));}
	It(test2){Assert::That(sameCase("HEllo"), Equals(false));}
	It(test3){Assert::That(sameCase("mArmALadE"), Equals(false));}
	It(test4){Assert::That(sameCase("marmalade"), Equals(true));}
	It(test5){Assert::That(sameCase("MARMALADE"), Equals(true));}
	It(test6){Assert::That(sameCase("ketchUP"), Equals(false));}
	It(test7){Assert::That(sameCase("pickle"), Equals(true));}
	It(test8){Assert::That(sameCase("MUSTARD"), Equals(true));}
};

*/

void tasks::task2_34()
{
	std::cout << "Hello Task2_34!" << std::endl;
}

/* Task 2_35 - Reverse Coding Challenge #6

This is a reverse coding challenge. Normally you're given explicit directions with how to create a function. Here, you must generate your own function to satisfy the relationship between the inputs and outputs.
Your task is to create a function that, when fed the inputs below, produces the sample outputs shown.

Examples
mystery_func(152) ➞ 10
mystery_func(832) ➞ 48
mystery_func(19) ➞ 9
mystery_func(133) ➞ 9

Notes
N/A

int mystery_func(int num) {

}

Describe(mystery_function)
{
	It(test1){Assert::That(mystery_func(152), Equals(10));}
	It(test2){Assert::That(mystery_func(832), Equals(48));}
	It(test3){Assert::That(mystery_func(5511), Equals(25));}
	It(test4){Assert::That(mystery_func(19), Equals(9));}
	It(test5){Assert::That(mystery_func(133), Equals(9));}
};

*/

void tasks::task2_35()
{
	std::cout << "Hello Task2_35!" << std::endl;
}

/* Task 2_36 - Longest Sequence of Consecutive Zeroes

Write a function that returns the longest sequence of consecutive zeroes in a binary string.

Examples
longestZero("01100001011000") ➞ "0000"
longestZero("100100100") ➞ "00"
longestZero("11111") ➞ ""

Notes
If no zeroes exist in the input, return an empty string.

std::string longestZero(std::string str) {

}

Describe(longest_zero_tests)
{
	It(test1){Assert::That(longestZero("01100001011000"), Equals("0000"));}
	It(test2){Assert::That(longestZero("100100100"), Equals("00"));}
	It(test3){Assert::That(longestZero("111101"), Equals("0"));}
	It(test4){Assert::That(longestZero("1000000000011101"), Equals("0000000000"));}
	It(test5){Assert::That(longestZero("100001110000100000"), Equals("00000"));}
	It(test6){Assert::That(longestZero("101001101"), Equals("00"));}
	It(test7){Assert::That(longestZero("101010101"), Equals("0"));}
	It(test8){Assert::That(longestZero("1001001"), Equals("00"));}
	It(test9){Assert::That(longestZero("111111"), Equals(""));}
};
*/

void tasks::task2_36()
{
	std::cout << "Hello Task2_36!" << std::endl;
}

/* Task 2_37 - Extend the Vowels

Create a function that takes a word and extends all vowels by a number num.

Examples
extendVowels("Hello", 5) ➞ "Heeeeeelloooooo"
extendVowels("Edabit", 3) ➞ "EEEEdaaaabiiiit"
extendVowels("Extend", 0) ➞ "Extend"

Notes
Return "invalid" if num isn't 0 or a positive integer.

std::string extendVowels(std::string word, int num) {

}

Describe(extendVowels_){
It(test1){Assert::That(extendVowels("Hello", 5), Equals("Heeeeeelloooooo"));}
It(test2){Assert::That(extendVowels("Edabit", 3), Equals("EEEEdaaaabiiiit"));}
It(test3){Assert::That(extendVowels("Extend", 0), Equals("Extend"));}
It(test4){Assert::That(extendVowels("A", 10), Equals("AAAAAAAAAAA"));}
It(test5){Assert::That(extendVowels("Z", 93), Equals("Z"));}
It(test6){Assert::That(extendVowels("Vowel", -5), Equals("invalid"));}
It(test7){Assert::That(extendVowels("Nice", -8), Equals("invalid"));}
};

*/

void tasks::task2_37()
{
	std::cout << "Hello Task2_37!" << std::endl;
}

/* Task 2_38 - Is the Water Boiling?

Create a function that determines if the temp of the water is considered boiling or not. temp will be measured in fahrenheit and celsius.

Examples
isBoiling("212F") ➞ true
isBoiling("100C") ➞ true
isBoiling("0F") ➞ false

Notes
The boiling point of water is 212F in fahrenheit and 100C in celsius.

bool isBoiling(std::string temp) {

}

Describe(isBoiling_){
It(test1){Assert::That(isBoiling("212F"), Equals(true));}
It(test2){Assert::That(isBoiling("100C"), Equals(true));}
It(test3){Assert::That(isBoiling("0F"), Equals(false));}
It(test4){Assert::That(isBoiling("-1F"), Equals(false));}
It(test5){Assert::That(isBoiling("213F"), Equals(true));}
It(test6){Assert::That(isBoiling("104C"), Equals(true));}
It(test7){Assert::That(isBoiling("-10F"), Equals(false));}
};

*/

void tasks::task2_38()
{
	std::cout << "Hello Task2_38!" << std::endl;
}

/* Task 2_39 - Sum of Digits Between Two Numbers

Create a function that sums the total number of digits between two numbers, inclusive. For example, between the numbers 19 and 22 we have:
// 19, 20, 21, 22
(1 + 9) + (2 + 0) + (2 + 1) + (2 + 2) = 19

Examples
sumDigits(7, 8) ➞ 15
sumDigits(17, 20) ➞ 29
sumDigits(10, 12) ➞ 6

Notes
N/A

int sumDigits(int a, int b) {

}

Describe(sum_digits)
{
	It(test1){Assert::That(sumDigits(7, 8), Equals(15));}
	It(test2){Assert::That(sumDigits(17, 20), Equals(29));}
	It(test3){Assert::That(sumDigits(10, 12), Equals(6));}
	It(test4){Assert::That(sumDigits(500, 506), Equals(56));}
	It(test5){Assert::That(sumDigits(66, 789), Equals(9324));}
};

*/

void tasks::task2_39()
{
	std::cout << "Hello Task2_39!" << std::endl;
}

/* Task 2_40 - Recursion: GCD

Write a function that calculates the GCD (Greatest Common Divisor) of two numbers recursively.

Examples
gcd(10, 20) ➞ 10
gcd(1, 3) ➞ 1
gcd(5, 7) ➞ 1
gcd(2, 6) ➞ 2

Notes
N/A

int gcd(int a, int b) {

}

Describe(greatest_common_divisor)
{
  It(test1){Assert::That(gcd(10, 20), Equals(10));}
	It(test2){Assert::That(gcd(1, 3), Equals(1));}
	It(test3){Assert::That(gcd(5, 7), Equals(1));}
	It(test4){Assert::That(gcd(2, 6), Equals(2));}
	It(test5){Assert::That(gcd(13, 39), Equals(13));}
	It(test6){Assert::That(gcd(50, 5), Equals(5));}
	It(test7){Assert::That(gcd(70, 35), Equals(35));}
	It(test8){Assert::That(gcd(100, 8), Equals(4));}
	It(test9){Assert::That(gcd(11, 45), Equals(1));}
};

*/

void tasks::task2_40()
{
	std::cout << "Hello Task2_40!" << std::endl;
}

/* Task 2_41 - Recursion: String Palindromes

Write a function that recursively determines if a string is a palindrome.

Examples
isPalindrome("ad") ➞ false
isPalindrome("abcba") ➞ true
isPalindrome("abbbbb") ➞ false

Notes
An empty string counts as a palindrome.

bool isPalindrome(std::string str) {

}

Describe(string_palindromes)
{
  It(test1){Assert::That(isPalindrome("abcba"), Equals(true));}
	It(test2){Assert::That(isPalindrome("abbba"), Equals(true));}
	It(test3){Assert::That(isPalindrome("abbbba"), Equals(true));}
	It(test4){Assert::That(isPalindrome("abccdba"), Equals(false));}
	It(test5){Assert::That(isPalindrome("abbaa"), Equals(false));}
	It(test6){Assert::That(isPalindrome("abbbbb"), Equals(false));}
	It(test7){Assert::That(isPalindrome("ad"), Equals(false));}
	It(test8){Assert::That(isPalindrome("b"), Equals(true));}
	It(test9){Assert::That(isPalindrome(""), Equals(true));}
};

*/

void tasks::task2_41()
{
	std::cout << "Hello Task2_41!" << std::endl;
}

/* Task 2_42 - The Fibonacci Number

Create a function that, given a number, returns the corresponding value of that index in the Fibonacci series.
The Fibonacci Sequence is the series of numbers:
1, 1, 2, 3, 5, 8, 13, 21, 34, ...

The next number is found by adding the two numbers before it:
The 2 is found by adding the two numbers before it (1+1).
The 3 is found by adding the two numbers before it (1+2).
The 5 is (2+3), and so on!

Examples
fibonacci(3) ➞ 3
fibonacci(7) ➞ 21
fibonacci(12) ➞ 233

Notes
The first number in the sequence starts at 1 (not 0).

int fibonacci(int num) {

}

Describe(fibonacci_number)
{
  It(test1){Assert::That(fibonacci(3), Equals(3));}
	It(test2){Assert::That(fibonacci(7), Equals(21));}
	It(test3){Assert::That(fibonacci(12), Equals(233));}
	It(test4){Assert::That(fibonacci(0), Equals(1));}
	It(test5){Assert::That(fibonacci(1), Equals(1));}
};

*/

void tasks::task2_42()
{
	std::cout << "Hello Task2_42!" << std::endl;
}

/* Task 2_43 - Parity Bit Validation

Parity bits are used as very simple checksum to ensure that binary data isn't corrupted during transit. Here's how they work:

If a binary string has an odd number of 1s, the parity bit is a 1.
If a binary string has an even number of 1s, the parity bit is a 0.
The parity bit is appended to the end of the binary string.
Create a function that validates whether a binary string is valid, using parity bits.

Worked Example
validateBinary("10110010") ➞ true

// The last digit is the parity bit.
// 0 is the last digit.
// 0 means that there should be an even number of 1s.
// There are four 1s.
// Return True.

Examples
validateBinary("00101101") ➞ true
validateBinary("11000000") ➞ true
validateBinary("11000001") ➞ false

Notes
All inputs will be a byte long (8 characters).
You can find another parity bit involved challenge here!

bool validateBinary(std::string b) {

}

Describe(validateBinary_) {
	It(test1){Assert::That(validateBinary("00101101"), Equals(true));}
	It(test2){Assert::That(validateBinary("11000000"), Equals(true));}
	It(test3){Assert::That(validateBinary("11000001"), Equals(false));}
	It(test4){Assert::That(validateBinary("10010010"), Equals(false));}
};

*/

void tasks::task2_43()
{
	std::cout << "Hello Task2_43!" << std::endl;
}

/* Task 2_44 - Zip It, If You Can?

Given an array of women and an array of men, either:

Return "Empty 2D Array" if the two arrays have different sizes.
If the sizes match, return an array of pairs, with the first woman paired with the first man, second woman paired with the second man, etc.

Examples
zipIt(["Elise", "Mary"], ["John", "Rick"])➞ [["Elise", "John"], ["Mary", "Rick"]]
zipIt(["Ana", "Amy", "Lisa"], ["Bob", "Josh"])➞ [[]]]
zipIt(["Ana", "Amy", "Lisa"], ["Bob", "Josh", "Tim"])➞ [["Ana", "Bob"], ["Amy", "Josh"],["Lisa", "Tim"]]

 Notes
N/A


using namespace std;
vector<vector<string>> zipIt(vector<string> women, vector<string> men) {

}

Describe(zipIt_) {
	It(T1){Assert::That(zipIt({"Elise", "Mary"}, {"John", "Rick"}), Equals(vector<vector<string>>{{"Elise", "John"}, {"Mary", "Rick"}}));}
	It(T2){Assert::That(zipIt({"Ana", "Amy", "Lisa"}, {"Bob", "Josh"}), Equals(vector<vector<string>>{{}}));}
	It(T3){Assert::That(zipIt({"Ana", "Amy", "Lisa"}, {"Bob", "Josh", "Tim"}), Equals(vector<vector<string>>{{"Ana", "Bob"}, {"Amy", "Josh"}, {"Lisa", "Tim"}}));}
	It(T4){Assert::That(zipIt({"Ana", "Amy", "Lisa", "Katty"}, {"Bob", "Josh", "Tim"}), Equals(vector<vector<string>>{{}}));}
	It(T5){Assert::That(zipIt({"Katty", "Ana", "Amy", "Lisa"}, {"Bob", "Josh", "Tim", "Aaron"}), Equals(vector<vector<string>>{{"Katty", "Bob"}, {"Ana", "Josh"}, {"Amy", "Tim"}, {"Lisa", "Aaron"}}));}
};

*/

void tasks::task2_44()
{
	std::cout << "Hello Task2_44!" << std::endl;
}

/* Task 2_45 - Accumulating Product

Your job is to create a function, that takes 3 numbers: a, b, c and returns true if the last digit of a * b = the last digit of c. Check the examples below for an explanation.
Create a function that takes an array and returns an array of the accumulating product.

Examples
accumulatingProduct([1, 2, 3, 4]) ➞ [1, 2, 6, 24] // [1, 2, 6, 24] can be written as [1, 1 x 2, 1 x 2 x 3, 1 x 2 x 3 x 4]
accumulatingProduct([1, 5, 7]) ➞ [1, 5, 35]
accumulatingProduct([1, 0, 1, 0]) ➞ [1, 0, 0, 0]
accumulatingProduct([]) ➞ []

Notes
An empty array should return an empty array [].

std::vector<int> accumulatingProduct(std::vector<int> arr) {

}

Describe(accumulating_product_tests)
{
	It(test1){Assert::That(accumulatingProduct({1, 2, 3, 4}), Equals(std::vector<int>({1, 2, 6, 24})));}
	It(test2){Assert::That(accumulatingProduct({5, 10, 1, 1}), Equals(std::vector<int>({5, 50, 50, 50})));}
	It(test3){Assert::That(accumulatingProduct({1, 5, 7}), Equals(std::vector<int>({1, 5, 35})));}
	It(test4){Assert::That(accumulatingProduct({1, 0, 1, 0}), Equals(std::vector<int>({1, 0, 0, 0})));}
	It(test5){Assert::That(accumulatingProduct({1}), Equals(std::vector<int>({1})));}
	It(test6){Assert::That(accumulatingProduct({1, 2, 2, 2, 2, 2, 2}), Equals(std::vector<int>({1, 2, 4, 8, 16, 32, 64})));}
	It(test7){Assert::That(accumulatingProduct({1, 1, 1, 1, 1, 1, 1}), Equals(std::vector<int>({1, 1, 1, 1, 1, 1, 1})));}
	It(should_work_on_an_empty_array){Assert::That(accumulatingProduct({}), Equals(std::vector<int>({})));}
};

*/

void tasks::task2_45()
{
	std::cout << "Hello Task2_45!" << std::endl;
}

/* Task 2_46 - Tower of Hanoi https://edabit.com/challenge/hjmadKkCtejKpvpc6

There are three towers. The objective of the game is to move all the disks over to tower #3, but you can't place a larger disk onto a smaller disk. To play the game or learn more about the Tower of Hanoi, check the Resources tab.

Tower of Hanoi

Create a function that takes a number discs as an argument and returns the minimum amount of steps needed to complete the game.

Examples
towerHanoi(3) ➞ 7
towerHanoi(5) ➞ 31
towerHanoi(0) ➞ 0

Notes
The amount of discs is always a positive integer.
1 disc can be changed per move.

int towerHanoi(int discs) {

}

Describe(tower_of_hanoi)
{
  It(test1){Assert::That(towerHanoi(3), Equals(7));}
	It(test2){Assert::That(towerHanoi(5), Equals(31));}
	It(test3){Assert::That(towerHanoi(8), Equals(255));}
	It(test4){Assert::That(towerHanoi(19), Equals(524287));}
	It(test5){Assert::That(towerHanoi(9), Equals(511));}
	It(test6){Assert::That(towerHanoi(13), Equals(8191));}
	It(test7){Assert::That(towerHanoi(0), Equals(0));}
};

*/

void tasks::task2_46()
{
	std::cout << "Hello Task2_46!" << std::endl;
}

/* Task 2_47 - Recursion: Array Sum 

Write a function that finds the sum of an array. Make your function recursive.

Examples
sum([1, 2, 3, 4]) ➞ 10
sum([1, 2]) ➞ 3
sum([1]) ➞ 1
sum([]) ➞ 0

Notes
Return 0 for an empty array.
Check the Resources tab for info on recursion.

int sum(std::vector<int> arr) {

}

Describe(sum_){
It(test1){Assert::That(sum({1, 2, 3, 4}), Equals(10));}
It(test2){Assert::That(sum({-1, -1, -1}), Equals(-3));}
It(test3){Assert::That(sum({1}), Equals(1));}
It(test4){Assert::That(sum({}), Equals(0));}
};

*/

void tasks::task2_47()
{
	std::cout << "Hello Task2_47!" << std::endl;
}

/* Task 2_48 - Total Number of Unique Characters

Given two strings, create a function that returns the total number of unique characters from the combined string.

Examples
countUnique("apple", "play") ➞ 5
// "appleplay" has 5 unique characters:
// "a", "e", "l", "p", "y"
countUnique("sore", "zebra") ➞ 7
// "sorezebra" has 7 unique characters:
// "a", "b", "e", "o", "r", "s", "z"
countUnique("a", "soup") ➞ 5

Notes
Each word will contain at least one letter.
All words will be lower cased.

int countUnique(std::string str1, std::string str2) {

}

Describe(number_of_unique_characters)
{
	It(test1){Assert::That(countUnique("apple", "play"), Equals(5));}
	It(test2){Assert::That(countUnique("sore", "zebra"), Equals(7));}
	It(test3){Assert::That(countUnique("pip", "geeks"), Equals(6));}
	It(test4){Assert::That(countUnique("a", "soup"), Equals(5));}
	It(test5){Assert::That(countUnique("maniac", "maniac"), Equals(5));}
};

*/

void tasks::task2_48()
{
	std::cout << "Hello Task2_48!" << std::endl;
}

/* Task 2_49 - Are Letters in the Second String Present in the First?

Create a function that accepts an array of two strings and checks if the letters in the second string are present in the first string.

Examples
letterCheck(["trances", "nectar"]) ➞ true
letterCheck(["compadres", "DRAPES"]) ➞ true
letterCheck(["parses", "parsecs"]) ➞ false

Notes
Function should not be case sensitive (as indicated in the second example).
Both strings are presented as a single argument in the form of an array.
Bonus: Solve this without RegEx.

using namespace std;
bool letterCheck(vector<string> arr) {

}

Describe(letters_in_second_string_present_in_first_tests)
{
	It(test1){Assert::That(letterCheck({"trances", "nectar"}), Equals(true));}
	It(test2){Assert::That(letterCheck({"assert", "staring"}), Equals(false));}
	It(test3){Assert::That(letterCheck({"arches", "later"}), Equals(false));}
	It(test4){Assert::That(letterCheck({"dale", "caller"}), Equals(false));}
	It(test5){Assert::That(letterCheck({"parses", "parsecs"}), Equals(false));}
	It(test6){Assert::That(letterCheck({"replays", "adam"}), Equals(false));}
	It(test7){Assert::That(letterCheck({"mastering", "streaming"}), Equals(true));}
	It(test8){Assert::That(letterCheck({"drapes", "compadres"}), Equals(false));}
	It(test9){Assert::That(letterCheck({"deltas", "slated"}), Equals(true));}
	It(should_work_for_capital_letters_and_spaces){Assert::That(letterCheck({"THE EYES", "they see"}), Equals(true));}
};

*/

void tasks::task2_49()
{
	std::cout << "Hello Task2_49!" << std::endl;
}

/* Task 2_50 - Phone Number Word Decoder https://edabit.com/challenge/xvn39anpoEjrcocyA

Create a program that converts a phone number with letters to one with only numbers.

Number	Letter
0	none
1	none
2	ABC
3	DEF
4	GHI
5	JKL
6	MNO
7	PQRS
8	TUV
9	WXYZ

Examples
textToNum("123-647-EYES") ➞ "123-647-3937"
textToNum("(325)444-TEST") ➞ "(325)444-8378"
textToNum("653-TRY-THIS") ➞ "653-879-8447"
textToNum("435-224-7613") ➞ "435-224-7613"

Notes
All inputs will be formatted as a string representing a proper phone number in the format XXX-XXX-XXXX or (XXX)XXX-XXXX, using numbers and capital letters.
Check the Resources tab for more info on telephone keypads.

std::string textToNum(std::string phone) {

}

Describe(convert_phone_number_tests)
{
	It(test1){Assert::That(textToNum("123-647-EYES"), Equals("123-647-3937"));}
	It(test2){Assert::That(textToNum("(325)444-TEST"), Equals("(325)444-8378"));}
	It(test3){Assert::That(textToNum("653-TRY-THIS"), Equals("653-879-8447"));}
	It(test4){Assert::That(textToNum("435-224-7613"), Equals("435-224-7613"));}
	It(test5){Assert::That(textToNum("(33D)ONT-FAIL"), Equals("(333)668-3245"));}
	It(test6){Assert::That(textToNum("(025)445-6741"), Equals("(025)445-6741"));}
};

*/

void tasks::task2_50()
{
	std::cout << "Hello Task2_50!" << std::endl;
}
