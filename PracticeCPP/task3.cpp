/*
https://edabit.com/challenges

Hard tasks

*/
#include <iostream>
#include "task3.h"

void tasks::task3()
{
	std::cout << "Hello Task3!" << std::endl;
}

/* Task 3_1 - Letter Distance

Given two words, the letter distance is calculated by taking the absolute value of the difference in character codes and summing up the difference.
If one word is longer than another, add the difference in lengths towards the score.

To illustrate:
letterDistance("house", "fly") = dist("h", "f") + dist("o", "l") + dist("u", "y") + dist(house.length, fly.length)
= |104 - 102| + |111 - 108| + |117 - 121| + |5 - 3|
= 2 + 3 + 4 + 2
= 11

Examples
letterDistance("sharp", "sharq") ➞ 1
letterDistance("abcde", "Abcde") ➞ 32
letterDistance("abcde", "bcdef") ➞ 5

Notes
Always start comparing the two strings from their first letter.
Excess letters are not counted towards distance.
Capital letters are included.

int letterDistance(std::string str1, std::string str2) {

}

Describe(letter_distance_tests)
{
	It(test1){Assert::That(letterDistance("house", "fly"), Equals(11));}
	It(test2){Assert::That(letterDistance("sharp", "sharq"), Equals(1));}
	It(test3){Assert::That(letterDistance("abcde", "bcdef"), Equals(5));}
	It(test4){Assert::That(letterDistance("abcde", "a"), Equals(4));}
	It(test5){Assert::That(letterDistance("abcde", "e"), Equals(8));}
	It(test6){Assert::That(letterDistance("very", "fragile"), Equals(67));}
	It(tests_with_capital_letters_1){Assert::That(letterDistance("abcde", "Abcde"), Equals(32));}
	It(tests_with_capital_letters_2){Assert::That(letterDistance("abcde", "A"), Equals(36));}
};

*/

void tasks::task3_1()
{
	std::cout << "Hello Task3_1!" << std::endl;
}

/* Task 3_2 - Find the Odd Integer

Create a function that takes an array and finds the integer which appears an odd number of times.

Examples
findOdd([1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5]) ➞ -1
findOdd([20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5]) ➞ 5
findOdd([10]) ➞ 10

Notes
There will always only be one integer that appears an odd number of times.

using namespace std;
int findOdd(vector<int> arr) {

}

Describe(find_odd_integer_tests)
{
	It(test1){Assert::That(findOdd({20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5}), Equals(5));}
	It(test2){Assert::That(findOdd({1,1,2,-2,5,2,4,4,-1,-2,5}), Equals(-1));}
	It(test3){Assert::That(findOdd({20,1,1,2,2,3,3,5,5,4,20,4,5}), Equals(5));}
	It(test4){Assert::That(findOdd({10}), Equals(10));}
	It(test5){Assert::That(findOdd({1,1,1,1,1,1,10,1,1,1,1}), Equals(10));}
	It(test6){Assert::That(findOdd({5,4,3,2,1,5,4,3,2,10,10}), Equals(1));}
};

*/

void tasks::task3_2()
{
	std::cout << "Hello Task3_2!" << std::endl;
}

/* Task 3_3 - Tweaking Letters

Create a function that tweaks letters by one forward (+1) or backwards (-1) according to an array.

Examples
tweakLetters("apple", {0, 1, -1, 0, -1}) ➞ "aqold" // "p" + 1 => "q"; "p" - 1 => "o"; "e" - 1 => "d"
tweakLetters("many", {0, 0, 0, -1}) ➞ "manx"
tweakLetters("rhino", {1, 1, 1, 1, 1}) ➞ "sijop"

Notes
Don't worry about capital letters.

std::string tweakLetters(std::string s, std::vector<int> arr) {

}

Describe(tweaking_letters_tests)
{
	It(test1){Assert::That(tweakLetters("apple", {0, 1, -1, 0, -1}), Equals("aqold"));}
	It(test2){Assert::That(tweakLetters("many", {0, 0, 0, -1}), Equals("manx"));}
	It(test3){Assert::That(tweakLetters("rhino", {1, 1, 1, 1, 1}), Equals("sijop"));}
	It(should_work_for_modulo_cases_1){Assert::That(tweakLetters("xyz", {1, 1, 1}), Equals("yza"));}
	It(should_work_for_modulo_cases_2){Assert::That(tweakLetters("abc", {-1, -1, -1}), Equals("zab"));}
};

*/

void tasks::task3_3()
{
	std::cout << "Hello Task3_3!" << std::endl;
}

/* Task 3_4 - Get the Area of a Country

Create a function that takes a country's name and its area as arguments and returns the area of the country's proportion of the total world's landmass.

Examples
areaOfCountry("Russia", 17098242) ➞ "Russia is 11.48% of the total world's landmass"
areaOfCountry("USA", 9372610), "USA is 6.29% of the total world's landmass"
areaOfCountry("Iran", 1648195) ➞ "Iran is 1.11% of the total world's landmass"

Notes
The total world's landmass is 148,940,000 [Km^2]
Round the result to two decimal places.

std::string areaOfCountry(std::string name, unsigned int area) {

}

Describe(areaOfCountry_) {
	It(test8){Assert::That(areaOfCountry("Pakistan", 881912), Equals("Pakistan is 0.59% of the total world's landmass"));}
	It(test1){Assert::That(areaOfCountry("USA", 9372610), Equals("USA is 6.29% of the total world's landmass"));}
	It(test2){Assert::That(areaOfCountry("Russia", 17098242), Equals("Russia is 11.48% of the total world's landmass"));}
	It(test3){Assert::That(areaOfCountry("Iran", 1648195), Equals("Iran is 1.11% of the total world's landmass"));}
	It(test4){Assert::That(areaOfCountry("India", 3287590), Equals("India is 2.21% of the total world's landmass"));}
	It(test5){Assert::That(areaOfCountry("China", 9706961), Equals("China is 6.52% of the total world's landmass"));}
	It(test6){Assert::That(areaOfCountry("Yemen", 527968), Equals("Yemen is 0.35% of the total world's landmass"));}
	It(test7){Assert::That(areaOfCountry("Switzerland", 41284), Equals("Switzerland is 0.03% of the total world's landmass"));}
};

*/

void tasks::task3_4()
{
	std::cout << "Hello Task3_4!" << std::endl;
}

/* Task 3_5 - Consecutive Numbers

Create a function that determines whether elements in an array can be re-arranged to form a consecutive list of numbers where each number appears exactly once.

Examples
cons([5, 1, 4, 3, 2]) ➞ true // Can be re-arranged to form [1, 2, 3, 4, 5]
cons([5, 1, 4, 3, 2, 8]) ➞ false
cons([5, 6, 7, 8, 9, 9]) ➞ false // 9 appears twice

Notes
N/A

bool cons(std::vector<int> arr) {

}

Describe(consecutive_numbers)
{
	It(T1){Assert::That(cons({5, 1, 4, 3, 2}), Equals(true));}
	It(T2){Assert::That(cons({55, 59, 58, 56, 57}), Equals(true));}
	It(T3){Assert::That(cons({-3, -2, -1, 1, 0}), Equals(true));}
	It(T4){Assert::That(cons({5, 1, 4, 3, 2, 8}), Equals(false));}
	It(T5){Assert::That(cons({5, 6, 7, 8, 9, 9}), Equals(false));}
	It(T6){Assert::That(cons({5, 3}), Equals(false));}
};

*/

void tasks::task3_5()
{
	std::cout << "Hello Task3_5!" << std::endl;
}

/* Task 3_6 - Making a Box

Create a function that creates a box based on dimension n.

Examples
makeBox(5) ➞ [
  "#####",
  "#   #",
  "#   #",
  "#   #",
  "#####"
]

makeBox(3) ➞ [
  "###",
  "# #",
  "###"
]

makeBox(2) ➞ [
  "##",
  "##"
]

makeBox(1) ➞ [
  "#"
]
Notes
N/A

std::vector<std::string> makeBox(int n) {

}

Describe(make_box)
{
	It(T1){Assert::That(makeBox(5), Equals(std::vector<std::string>({
		"#####",
		"#   #",
		"#   #",
		"#   #",
		"#####"
	})));}
	It(T2){Assert::That(makeBox(6), Equals(std::vector<std::string>({
		"######",
		"#    #",
		"#    #",
		"#    #",
		"#    #",
		"######"
	})));}
	It(T3){Assert::That(makeBox(4), Equals(std::vector<std::string>({
		"####",
		"#  #",
		"#  #",
		"####"
	})));}
	It(T4){Assert::That(makeBox(2), Equals(std::vector<std::string>({
		"##",
		"##"
	})));}
	It(T5){Assert::That(makeBox(1), Equals(std::vector<std::string>({
		"#"
	})));}
};

*/

void tasks::task3_6()
{
	std::cout << "Hello Task3_6!" << std::endl;
}

/* Task 3_7 - Atbash Cipher

The Atbash cipher is an encryption method in which each letter of a word is replaced with its "mirror" letter in the alphabet: A <=> Z; B <=> Y; C <=> X; etc.

Create a function that takes a string and applies the Atbash cipher to it.

Examples
atbash("apple") ➞ "zkkov"
atbash("Hello world!") ➞ "Svool dliow!"
atbash("Christmas is the 25th of December") ➞ "Xsirhgnzh rh gsv 25gs lu Wvxvnyvi"

Notes
Capitalisation should be retained.
Non-alphabetic characters should not be altered.

std::string atbash(std::string str) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(atbash("abcdefghijklmnopqrstuvwxyz"), Equals("zyxwvutsrqponmlkjihgfedcba"));}
	It(test2){Assert::That(atbash("ABCDEFGHIJKLMNOPQRSTUVWXYZ"), Equals("ZYXWVUTSRQPONMLKJIHGFEDCBA"));}
	It(test3){Assert::That(atbash("The word 'atbash' derives from the the first and last 2 letters of the Hebrew alphabet."), Equals("Gsv dliw 'zgyzhs' wvirevh uiln gsv gsv urihg zmw ozhg 2 ovggvih lu gsv Svyivd zokszyvg."));}
	It(test4){Assert::That(atbash("Vmxibkgrlm zmw wvxibkgrlm ziv rwvmgrxzo uli gsv Zgyzhs xrksvi."), Equals("Encryption and decryption are identical for the Atbash cipher."));}
};

*/

void tasks::task3_7()
{
	std::cout << "Hello Task3_7!" << std::endl;
}

/* Task 3_8 - Mini Sudoku

A Sudoku is a 9x9 grid that is completed when every 3x3 square, row and column consist of the numbers 1-9.
For this task, you will be given a completed 3x3 square, in the form of a two-dimensional array. Create a function that checks to make sure this 3x3 square contains each number from 1-9 exactly once. Make sure there are no duplicates, and no numbers outside this range.

Examples
isMiniSudoku([[1, 3, 2], [9, 7, 8], [4, 5, 6]]) ➞ true
isMiniSudoku([[1, 1, 3], [6, 5, 4], [8, 7, 9]]) ➞ false // The 1 is repeated twice
isMiniSudoku([[0, 1, 2], [6, 4, 5], [9, 8, 7]]) ➞ false // The 0 is included (outside range)
isMiniSudoku([[8, 9, 2], [5, 6, 1], [3, 7, 4]]) ➞ true

Notes
N/A

bool isMiniSudoku(std::vector<std::vector<int>> square) {

}

Describe(is_mini_sudoku)
{
	It(T1){Assert::That(isMiniSudoku({
		{1, 3, 2},
		{9, 7, 8},
		{4, 5, 6}
	}), Equals(true));}
	It(T2){Assert::That(isMiniSudoku({
		{1, 3, 2},
		{9, 0, 8},
		{4, 5, 6}
	}), Equals(false));}
	It(T3){Assert::That(isMiniSudoku({
		{1, 1, 2},
		{9, 7, 8},
		{4, 5, 6}
	}), Equals(false));}
	It(T4){Assert::That(isMiniSudoku({
		{8, 9, 2},
		{5, 6, 1},
		{3, 7, 4}
	}), Equals(true));}
	It(T5){Assert::That(isMiniSudoku({
		{8, 7, 2},
		{5, 6, 1},
		{3, 7, 4}
	}), Equals(false));}
	It(T6){Assert::That(isMiniSudoku({
		{6, 5, 9},
		{4, 3, 8},
		{2, 1, 7}
	}), Equals(true));}
	It(T7){Assert::That(isMiniSudoku({
		{4, 3, 5},
		{8, 1, 2},
		{9, 6, 7}
	}), Equals(true));}
	It(T8){Assert::That(isMiniSudoku({
		{4, 3, 5},
		{8, 1, 3},
		{9, 5, 7}
	}), Equals(false));}
};

*/

void tasks::task3_8()
{
	std::cout << "Hello Task3_8!" << std::endl;
}

/* Task 3_9 - Letters Shared Between Two Words

Create a function that returns the number of characters shared between two words.

Examples
sharedLetters("apple", "meaty") ➞ 2 // Since "ea" is shared between "apple" and "meaty".
sharedLetters("fan", "forsook") ➞ 1
sharedLetters("spout", "shout") ➞ 4

Notes
N/A

int sharedLetters(std::string str1, std::string str2) {

}

Describe(shared_letters)
{
	It(T1){Assert::That(sharedLetters("apple", "meaty"), Equals(2));}
	It(T2){Assert::That(sharedLetters("fan", "forsook"), Equals(1));}
	It(T3){Assert::That(sharedLetters("spout", "shout"), Equals(4));}
	It(T4){Assert::That(sharedLetters("took", "taken"), Equals(2));}
	It(T5){Assert::That(sharedLetters("mentor", "terminal"), Equals(5));}
	It(T6){Assert::That(sharedLetters("class", "last"), Equals(3));}
};

*/

void tasks::task3_9()
{
	std::cout << "Hello Task3_9!" << std::endl;
}

/* Task 3_10 - Pronouncing the Xs

Create a function which replaces all the x's in the string in the following ways:

Replace all x's with "cks" UNLESS:
The word begins with "x", therefore replace it with "z".
The word is just the letter "x", therefore replace it with "ecks".

Examples
xPronounce("Inside the box was a xylophone") ➞ "Inside the bocks was a zylophone"
xPronounce("The x ray is excellent") ➞ "The ecks ray is eckscellent"
xPronounce("OMG x box unboxing video x D") ➞ "OMG ecks bocks unbocksing video ecks D"

Notes
All x's are lowercase.
I know that not all words with x's follow this rule, but there are too many edge cases to count!

std::string xPronounce(std::string sentence) {

}

Describe(tests)
{
  It(test1){Assert::That(xPronounce("Inside the box was a xylophone"), Equals("Inside the bocks was a zylophone"));}
	It(test2){Assert::That(xPronounce("The x ray is excellent"), Equals("The ecks ray is eckscellent"));}
	It(test3){Assert::That(xPronounce("OMG x box unboxing video x D"), Equals("OMG ecks bocks unbocksing video ecks D"));}
	It(test4){Assert::That(xPronounce("I gotta make bux but the clox are ticking!"), Equals("I gotta make bucks but the clocks are ticking!"));}
	It(test5){Assert::That(xPronounce("this test does not have an x in it"), Equals("this test does not have an ecks in it"));}
	It(test6){Assert::That(xPronounce("Max bax pax"), Equals("Macks backs packs"));}
	It(test7){Assert::That(xPronounce("Anti vax"), Equals("Anti vacks"));}
	It(test8){Assert::That(xPronounce("Who is xavier and why does he have my car"), Equals("Who is zavier and why does he have my car"));}
	It(test9){Assert::That(xPronounce("OMG xylem unboxing video x D"), Equals("OMG zylem unbocksing video ecks D"));}
};

*/

void tasks::task3_10()
{
	std::cout << "Hello Task3_10!" << std::endl;
}

/* Task 3_11 - Minimum Removals to Make Two Strings Anagrams

Create a function that returns the smallest number of letter removals so that two strings are anagrams of each other.

Examples
minRemovals("abcde", "cab") ➞ 2 // Remove "d", "e" to make "abc" and "cab".
minRemovals("deafk", "kfeap") ➞ 2 // Remove "d" and "p" from the first and second word, respectively.
minRemovals("acb", "ghi") ➞ 6 // Remove all letters from both words to get "" and "".

Notes
An anagram is any string that can be formed by shuffling the characters of the original string. For example: baedc is an anagram of abcde.
An empty string can be considered an anagram of itself.
Characters won't be used more than once per string.

int minRemovals(std::string str1, std::string str2) {

}

Describe(minimum_removals)
{
	It(T1){Assert::That(minRemovals("abcde", "cab"), Equals(2));}
	It(T2){Assert::That(minRemovals("deafk", "kfeap"), Equals(2));}
	It(T3){Assert::That(minRemovals("abc", "ghi"), Equals(6));}
	It(T4){Assert::That(minRemovals("abcxyz", "ghixytz"), Equals(7));}
};

*/

void tasks::task3_11()
{
	std::cout << "Hello Task3_11!" << std::endl;
}

/* Task 3_12 - Number of Two or More Consecutive Ones

Create a function that counts the number of blocks of two or more adjacent 1s in an array.

Examples
countOnes([1, 0, 0, 1, 1, 0, 1, 1, 1]) ➞ 2 // Two instances: [1, 1] (middle) and [1, 1, 1] (end)
countOnes([1, 0, 1, 0, 1, 0, 1, 0]) ➞ 0
countOnes([1, 1, 1, 1, 0, 0, 0, 0]) ➞ 1
countOnes([0, 0, 0]) ➞ 0

Notes
A single 1 by itself (surrounded by a zero on its left and right), does not count towards the total (see first example).
Each input will contain only zeroes and ones.

int countOnes(std::vector<int> arr) {

}

Describe(count_ones)
{
	It(T1){Assert::That(countOnes({1, 1, 1, 1, 1}), Equals(1));}
	It(T2){Assert::That(countOnes({1, 1, 1, 1, 0}), Equals(1));}
	It(T3){Assert::That(countOnes({0, 0, 0, 0, 0}), Equals(0));}
	It(T4){Assert::That(countOnes({1, 0, 0, 0, 0}), Equals(0));}
	It(T5){Assert::That(countOnes({1, 0, 1, 0, 1}), Equals(0));}
	It(T6){Assert::That(countOnes({1, 0, 0, 0, 1, 0, 0, 1, 1, 0}), Equals(1));}
	It(T7){Assert::That(countOnes({1, 1, 0, 1, 1, 0, 0, 1, 1}), Equals(3));}
	It(T8){Assert::That(countOnes({1, 0, 0, 1, 1, 0, 0, 1, 1}), Equals(2));}
	It(T9){Assert::That(countOnes({1, 0, 1, 1, 1, 0, 1, 1, 1}), Equals(2));}
	It(T10){Assert::That(countOnes({1, 0, 1, 0, 1, 0, 1, 0}), Equals(0));}
	It(T11){Assert::That(countOnes({1, 1, 1, 1, 0, 0, 0, 0}), Equals(1));}
	It(T12){Assert::That(countOnes({1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1}), Equals(3));}
};

*/

void tasks::task3_12()
{
	std::cout << "Hello Task3_12!" << std::endl;
}

/* Task 3_13 - Mystery Challenge

Write a function that takes an integer n and turns it into the ouput. No further instructions.

Examples
mysteryFunc(521) ➞ "151211"
mysteryFunc(5211255) ➞ "1512211225"
mysteryFunc(513515) ➞ "151113151115"

Notes
The result has to do with counting something.
Check the Tests tab for some extra hints.

std::string mysteryFunc(int n) {

}

Describe (mysterious)
{
	// count digits, and then for each digit, add "the amount of the digit
	// in a row (and the) digit"
	// 15 = 1*1 1*5(1115)
	It(test1){Assert::That(mysteryFunc(15),Equals("1115"));}
	It(test2){Assert::That(mysteryFunc(15212),Equals("1115121112"));}
	It(test3){Assert::That(mysteryFunc(111111422),Equals("611422"));}
	It(test4){Assert::That(mysteryFunc(1),Equals("11"));}
	It(test5){Assert::That(mysteryFunc(513515),Equals("151113151115"));}
	It(test6){Assert::That(mysteryFunc(666),Equals("36"));}
	It(test7){Assert::That(mysteryFunc(69),Equals("1619"));}
};

*/

void tasks::task3_13()
{
	std::cout << "Hello Task3_13!" << std::endl;
}

/* Task 3_14 - Blackjack

Create a function that takes an array of card numbers and checks if the sum of their value exceeds 21. If the sum exceeds 21, return true and if the sum is under or equal to 21, return false. Values of the cards are as follows:

2-10 are their value.
J-K (face cards) count as 10.
Aces count either as 1 or 11 - play conservatively, so that if giving an ace a value of 11 causes you to lose and 1 allows you to win, then go with 1.

Examples
overTwentyOne(["2", "8", "J"]) ➞ false
overTwentyOne(["A", "J", "K"]) ➞ false
overTwentyOne(["5", "5", "3", "9"]) ➞ true
overTwentyOne(["2", "6", "4", "4", "5"]) ➞ false
overTwentyOne(["J", "Q", "K"]) ➞ true

Notes
There will be a maximum of one ace in each hand.

bool overTwentyOne(std::vector<char> cards) {

}

Describe(blackjack_tests)
{
	It(test1){Assert::That(overTwentyOne({'A', '2', '3'}), Equals(false));}
	It(test2){Assert::That(overTwentyOne({'A', 'J', 'K'}), Equals(false));}
	It(test3){Assert::That(overTwentyOne({'A', 'J', 'K', 'Q'}), Equals(true));}
	It(test4){Assert::That(overTwentyOne({'5', '3', '6', '6', '7', '9'}), Equals(true));}
};

*/

void tasks::task3_14()
{
	std::cout << "Hello Task3_14!" << std::endl;
}

/* Task 3_15 - Valid Hex Code

Create a function that determines whether a string is a valid hex code.

A hex code must begin with a pound key # and is exactly 6 characters in length. Each character must be a digit from 0-9 or an alphabetic character from A-F. All alphabetic characters may be uppercase or lowercase.

Examples
isValidHexCode("#CD5C5C") ➞ true
isValidHexCode("#EAECEE") ➞ true
isValidHexCode("#eaecee") ➞ true
isValidHexCode("#CD5C58C") ➞ false // Length exceeds 6
isValidHexCode("#CD5C5Z") ➞ false // Not all alphabetic characters in A-F
isValidHexCode("#CD5C&C") ➞ false // Contains unacceptable character
isValidHexCode("CD5C5C") ➞ false // Missing #

Notes
N/A

bool isValidHexCode(std::string str) {

}

Describe(valid_hex_code_tests)
{
	// Valid HEX codes
	It(valid_hex_codes_1){Assert::That(isValidHexCode("#CD5C5C"), Equals(true));}
	It(valid_hex_codes_2){Assert::That(isValidHexCode("#EAECEE"), Equals(true));}
	It(valid_hex_codes_3){Assert::That(isValidHexCode("#eaecee"), Equals(true));}
	It(valid_hex_codes_4){Assert::That(isValidHexCode("#123456"), Equals(true));}
	It(valid_hex_codes_5){Assert::That(isValidHexCode("#987654"), Equals(true));}
	It(valid_hex_codes_6){Assert::That(isValidHexCode("#CCCCCC"), Equals(true));}
	// Length cannot exceed 6
	It(length_cannot_exceed_6_test_1){Assert::That(isValidHexCode("#CD5C58C"), Equals(false));}
	It(length_cannot_exceed_6_test_2){Assert::That(isValidHexCode("#123CCCD"), Equals(false));}
	It(length_cannot_exceed_6_test_3){Assert::That(isValidHexCode("#9876543"), Equals(false));}
	// Cannot have letters outside A F
	It(cannot_have_letters_outside_A_F_test_1){Assert::That(isValidHexCode("#ZCCZCC"), Equals(false));}
	It(cannot_have_letters_outside_A_F_test_2){Assert::That(isValidHexCode("#Z88Z99"), Equals(false));}
	It(cannot_have_letters_outside_A_F_test_3){Assert::That(isValidHexCode("#CD5C5Z"), Equals(false));}
	// Cannot have other unacceptable chars
	It(cannot_have_other_unacceptable_chars_1){Assert::That(isValidHexCode("#Z88!99"), Equals(false));}
	It(cannot_have_other_unacceptable_chars_2){Assert::That(isValidHexCode("#CD5C&C"), Equals(false));}
	It(cannot_have_other_unacceptable_chars_3){Assert::That(isValidHexCode("CD5CD#C"), Equals(false));}
	// Should hav a hash as first character
	It(should_have_a_hash_as_first_character){Assert::That(isValidHexCode("CD5C5C"), Equals(false)); }
};

*/

void tasks::task3_15()
{
	std::cout << "Hello Task3_15!" << std::endl;
}

/* Task 3_16 - Replace Letters With Position In Alphabet

Create a function that takes a string and replaces each letter with its appropriate position in the alphabet. "a" is 1, "b" is 2, "c" is 3, etc, etc.

Examples
alphabetIndex("Wow, does that work?")➞ "23 15 23 4 15 5 19 20 8 1 20 23 15 18 11"
alphabetIndex("The river stole the gods.")➞ "20 8 5 18 9 22 5 18 19 20 15 12 5 20 8 5 7 15 4 19"
alphabetIndex("We have a lot of rain in June.")➞ "23 5 8 1 22 5 1 12 15 20 15 6 18 1 9 14 9 14 10 21 14 5"

Notes
If any character in the string isn't a letter, ignore it.

using namespace std;
string alphabetIndex(string str) {

}

Describe(replace_letters_w_position_tests)
{
	It(test1){Assert::That(alphabetIndex("Wow, does that work?"), Equals("23 15 23 4 15 5 19 20 8 1 20 23 15 18 11"));}
	It(test2){Assert::That(alphabetIndex("We have a lot of rain in June."), Equals("23 5 8 1 22 5 1 12 15 20 15 6 18 1 9 14 9 14 10 21 14 5"));}
	It(test3){Assert::That(alphabetIndex("Check back tomorrow; I will see if the book has arrived."), Equals("3 8 5 3 11 2 1 3 11 20 15 13 15 18 18 15 23 9 23 9 12 12 19 5 5 9 6 20 8 5 2 15 15 11 8 1 19 1 18 18 9 22 5 4"));}
	It(test4){Assert::That(alphabetIndex("Wednesday is hump day, but has anyone asked the camel if he’s happy about it?"), Equals("23 5 4 14 5 19 4 1 25 9 19 8 21 13 16 4 1 25 2 21 20 8 1 19 1 14 25 15 14 5 1 19 11 5 4 20 8 5 3 1 13 5 12 9 6 8 5 19 8 1 16 16 25 1 2 15 21 20 9 20"));}
	It(test5){Assert::That(alphabetIndex("Sixty-Four comes asking for bread."), Equals("19 9 24 20 25 6 15 21 18 3 15 13 5 19 1 19 11 9 14 7 6 15 18 2 18 5 1 4"));}
	It(test6){Assert::That(alphabetIndex("The#b00k$is*in^fr0nt#0f!the_taBle."), Equals("20 8 5 2 11 9 19 9 14 6 18 14 20 6 20 8 5 20 1 2 12 5"));}
	It(test7){Assert::That(alphabetIndex("Lets all be unique together until we realise we are all the same."), Equals("12 5 20 19 1 12 12 2 5 21 14 9 17 21 5 20 15 7 5 20 8 5 18 21 14 20 9 12 23 5 18 5 1 12 9 19 5 23 5 1 18 5 1 12 12 20 8 5 19 1 13 5"));}
	It(test8){Assert::That(alphabetIndex("The river stole the gods."), Equals("20 8 5 18 9 22 5 18 19 20 15 12 5 20 8 5 7 15 4 19"));}
	It(test9){Assert::That(alphabetIndex("If Purple People Eaters are real… where do they find purple people to eat?"), Equals("9 6 16 21 18 16 12 5 16 5 15 16 12 5 5 1 20 5 18 19 1 18 5 18 5 1 12 23 8 5 18 5 4 15 20 8 5 25 6 9 14 4 16 21 18 16 12 5 16 5 15 16 12 5 20 15 5 1 20"));}
	It(test10){Assert::That(alphabetIndex("Abstraction is often one floor above you."), Equals("1 2 19 20 18 1 3 20 9 15 14 9 19 15 6 20 5 14 15 14 5 6 12 15 15 18 1 2 15 22 5 25 15 21"));}
};

*/

void tasks::task3_16()
{
	std::cout << "Hello Task3_16!" << std::endl;
}

/* Task 3_17 - Initialize

Create a function that takes in an array of full names and returns the initials.

Examples
initialize(["Stephen Hawking"]) ➞ ["S. H."]
initialize(["Harry Potter", "Ron Weasley"]) ➞ ["H. P.", "R. W."]
initialize(["Sherlock Holmes", "John Watson", "Irene Adler"]) ➞ ["S. H.", "J. W.", "I. A."]

Notes
Each initial is followed by a dot.
Names will always be made of two words, separated by a space.

using namespace std;
vector<string> initialize(vector<string> names) {

}

using namespace std;
Describe(initialize_tests)
{
	It(test1) {
		vector<string> r1 = {"S. H.", "J. W.", "I. A."};
		Assert::That(initialize({"Sherlock Holmes", "John Watson", "Irene Adler"}), Equals(r1));
	}

	It(test2) {
		vector<string> r2 = {"H. P.", "R. W."};
		Assert::That(initialize({"Harry Potter", "Ronald Weasley"}), Equals(r2));
	}

	It(test3) {
		vector<string> r3 = {"S. H."};
		Assert::That(initialize({"Stephen Hawking"}), Equals(r3));
	}

	It(test4) {
		vector<string> r4 = {"A. F."};
		Assert::That(initialize({"Attic Finch"}), Equals(r4));
	}

	It(test5) {
		vector<string> r5 = {"L. D."};
		Assert::That(initialize({"Leonardo Dicaprio"}), Equals(r5));
	}
};

*/

void tasks::task3_17()
{
	std::cout << "Hello Task3_17!" << std::endl;
}

/* Task 3_18 - Uno (Part 1)

This question is inspired by the popular Uno card game.
Write a function that takes in two arguments: (1) a player's current hand and (2) the current face-up card on the table. The function will return true if the player can make a play, or false if the player has to draw from the deck.
A player can make a play if either:
They have a card that is the same color as the face-up card.
They have a card that is the same number as the face-up card.
canPlay(["yellow 3", "yellow 7", "blue 8", "red 9", "red 2"], "red 1") => true // Since the player has two red cards, and the face-up card is red.
canPlay(["yellow 3", "yellow 7"], "blue 7") => true // Since the player has a 7, and the face-up card is a 7.

Examples
canPlay(["yellow 3", "yellow 5", "red 8"], "red 2") ➞ true
canPlay(["yellow 3", "yellow 5", "red 8"], "blue 5") ➞ true
canPlay(["yellow 3", "blue 5", "red 8", "red 9"], "green 4") ➞ false
canPlay(["yellow 3", "red 8"], "green 2") ➞ false

Notes
Return false if the player is not holding any cards (an empty array).
There are no special cards or wild cards in this deck.

bool canPlay(std::vector<std::string> hand, std::string face) {

}

Describe(uno_tests)
{
	It(test1){Assert::That(canPlay({"yellow 3", "yellow 5", "red 8"}, "red 2"), Equals(true));}
	It(test2){Assert::That(canPlay({"yellow 3", "yellow 5", "red 8"}, "blue 5"), Equals(true));}
	It(test3){Assert::That(canPlay({"yellow 3", "blue 5", "red 8", "red 9"}, "green 4"), Equals(false));}
	It(test4){Assert::That(canPlay({"yellow 3", "red 8"}, "green 2"), Equals(false));}
	It(test5){Assert::That(canPlay({"yellow 5", "yellow 8", "red 0", "blue 0", "green 4"}, "green 2"), Equals(true));}
	It(test6){Assert::That(canPlay({}, "green 2"), Equals(false));}
	It(test7){Assert::That(canPlay({"red 2"}, "red 0"), Equals(true));}
	It(test8){Assert::That(canPlay({"red 2", "red 8", "red 5"}, "blue 1"), Equals(false));}
};

*/

void tasks::task3_18()
{
	std::cout << "Hello Task3_18!" << std::endl;
}

/* Task 3_19 - Growing and Shrinking Potions

There are two types of potions:

Growing potion: "A"
Shrinking potion: "B"
If "A" immediately follows a digit, add 1 to the digit.
If "B" immediately follows a digit, subtract 1 from the digit.
Create a function that returns a string according to these rules, removing the potions once they've been consumed.

Examples
afterPotion("3A78B51") ➞ "47751" // 3 grows to 4, 8 shrinks to 7
afterPotion("9999B") ➞ "9998"
afterPotion("9A123") ➞ "10123"
afterPotion("567") ➞ "567"

Notes
Digits that do not have a potion on their immediate right should be left alone.
A digit will always either be followed by zero or exactly 1 potion.

std::string afterPotion(std::string s) {

}

Describe(shrinking_growing_potions)
{
	It(test1){Assert::That(afterPotion("567"), Equals("567"));}
	It(test2){Assert::That(afterPotion("3A78B51"), Equals("47751"));}
	It(test3){Assert::That(afterPotion("9999B"), Equals("9998"));}
	It(test4){Assert::That(afterPotion("9A123"), Equals("10123"));}
	It(test5){Assert::That(afterPotion("1A2A3A4A"), Equals("2345"));}
	It(test6){Assert::That(afterPotion("9B8B7B6A"), Equals("8767"));}
};

*/

void tasks::task3_19()
{
	std::cout << "Hello Task3_19!" << std::endl;
}

/* Task 3_20 - Reverse Coding Challenge #1

This is a reverse coding challenge. Normally you're given explicit directions with how to create a function. Here, you must generate your own function to satisfy the relationship between the inputs and outputs.
Your task is to create a function that, when fed the inputs below, produce the sample outputs shown.

Examples
"A4B5C2" ➞ "AAAABBBBBCC"
"C2F1E5" ➞ "CCFEEEEE"
"T4S2V2" ➞ "TTTTSSVV"
"A1B2C3D4" ➞ "ABBCCCDDDD"

Notes
If you get stuck, check the Comments for help.

std::string mysteryFunc(std::string s) {

}

Describe(mystery_challenge_tests)
{
	It(test1){Assert::That(mysteryFunc("A4B5C2"), Equals("AAAABBBBBCC"));}
	It(test2){Assert::That(mysteryFunc("C2F1E5"), Equals("CCFEEEEE"));}
	It(test3){Assert::That(mysteryFunc("T4S2V2"), Equals("TTTTSSVV"));}
	It(test4){Assert::That(mysteryFunc("A1B2C3D4"), Equals("ABBCCCDDDD"));}
};

*/

void tasks::task3_20()
{
	std::cout << "Hello Task3_20!" << std::endl;
}

/* Task 3_21 - Find the First Non-Repeated Character

Create a function that accepts a string as an argument and returns the first non-repeated character.

Examples
firstNonRepeatedCharacter("g") ➞ "g"
firstNonRepeatedCharacter("it was then the frothy word met the round night") ➞ "a"
firstNonRepeatedCharacter("the quick brown fox jumps then quickly blows air") ➞ "f"
firstNonRepeatedCharacter("hheelloo") ➞ "Invalid"
firstNonRepeatedCharacter("") ➞ "Invalid"

Notes
An empty string should return "Invalid".
If every character repeats, return "Invalid".
Don't worry about case sensitivity or non-alphanumeric characters.

std::string firstNonRepeatedCharacter(std::string str) {

}

Describe(first_non_repeated_char)
{
  It(test1){Assert::That(firstNonRepeatedCharacter("the quick brown fox jumps then quickly blows air"), Equals("f"));}
	It(test2){Assert::That(firstNonRepeatedCharacter("the misty examination pleases into the drab county"), Equals("x"));}
	It(test3){Assert::That(firstNonRepeatedCharacter("it was then the darling top met the whispering wing"), Equals("d"));}
	It(test4){Assert::That(firstNonRepeatedCharacter("it was then the frothy word met the round night"), Equals("a"));}
	It(test5){Assert::That(firstNonRepeatedCharacter("is the remind zone better than the section"), Equals("m"));}
	It(test6){Assert::That(firstNonRepeatedCharacter("b"), Equals("b"));}
	It(test7){Assert::That(firstNonRepeatedCharacter("what if the brainy boss ate the afternoon"), Equals("w"));}
	It(test8){Assert::That(firstNonRepeatedCharacter("the sympathetic mixture rejects into the leafy objective"), Equals("p"));}
	It(invalid_if_every_character_repeats){Assert::That(firstNonRepeatedCharacter("hheelloo"), Equals("Invalid"));}
	It(invalid_if_empty_string){Assert::That(firstNonRepeatedCharacter(""), Equals("Invalid"));}
};

*/

void tasks::task3_21()
{
	std::cout << "Hello Task3_21!" << std::endl;
}

/* Task 3_22 - Multiplicity of Numbers

Write a function that returns an array of elements [number, multiplicity]. The multiplicity of a number refers to the number of times it occurs in the array.

To illustrate:
[5, 5, 1, 1, 5, 5, 3]
[[5, 4], [1, 2], [3, 1]]

// Since 5 appears 4 times, 1 appears twice, and 3 appears once.
The final array should only include unique elements, and the elements should be ordered by when they first appeared in the original array.

Examples
multiplicity([1, 1, 1, 2, 2, 3]) ➞ [[1, 3], [2, 2], [3, 1]]
multiplicity([1, 1, 1, 1, 1]) ➞ [[1, 5]]
multiplicity([1, 5, 4, 3, 2]) ➞ [[1, 1], [5, 1], [4, 1], [3, 1], [2, 1]]

Notes
N/A

std::vector<std::vector<int>> multiplicity(std::vector<int> arr) {

}

Describe(multiplicity_tests)
{
	It(test1){Assert::That(multiplicity({1, 1, 1, 2, 2, 3}), Equals(std::vector<std::vector<int>>({{1, 3}, {2, 2}, {3, 1}})));}
	It(test2){Assert::That(multiplicity({1, 1, 1, 1, 1}), Equals(std::vector<std::vector<int>>({{1, 5}})));}
	It(test3){Assert::That(multiplicity({1, 5, 4, 3, 2}), Equals(std::vector<std::vector<int>>({{1, 1}, {5, 1}, {4, 1}, {3, 1}, {2, 1}})));}
	It(test4){Assert::That(multiplicity({5, 5, 5, 5, 8}), Equals(std::vector<std::vector<int>>({{5, 4}, {8, 1}})));}
	It(test5){Assert::That(multiplicity({3, 3, 3, 0}), Equals(std::vector<std::vector<int>>({{3, 3}, {0, 1}})));}
	It(test6){Assert::That(multiplicity({1, 1, 2, 2, 3, 3, 4, 4}), Equals(std::vector<std::vector<int>>({{1, 2}, {2, 2}, {3, 2}, {4, 2}})));}
	It(test7){Assert::That(multiplicity({4, 4, 3, 3, 2, 2, 1, 1}), Equals(std::vector<std::vector<int>>({{4, 2}, {3, 2}, {2, 2}, {1, 2}})));}
};

*/

void tasks::task3_22()
{
	std::cout << "Hello Task3_22!" << std::endl;
}

/* Task 3_23 - Star Shorthand

Write a function that converts a string into star shorthand. If a character is repeated n times, convert it into character*n.

Examples
toStarShorthand("abbccc") ➞ "ab*2c*3"
toStarShorthand("77777geff") ➞ "7*5gef*2"
toStarShorthand("abc") ➞ "abc"
toStarShorthand("") ➞ ""

Notes
Leave lone occurrences of a character as is.
Return an empty string if given an empty string input.

std::string toStarShorthand(std::string str) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(toStarShorthand("abbccc"), Equals("ab*2c*3"));}
	It(test2){Assert::That(toStarShorthand("haaaappyyyyy"), Equals("ha*4p*2y*5"));}
	It(test3){Assert::That(toStarShorthand("77777geff"), Equals("7*5gef*2"));}
	It(test4){Assert::That(toStarShorthand("11223344"), Equals("1*22*23*24*2"));}
	It(test5){Assert::That(toStarShorthand("abc"), Equals("abc"));}
	It(test6){Assert::That(toStarShorthand(""), Equals(""));}
};

*/

void tasks::task3_23()
{
	std::cout << "Hello Task3_23!" << std::endl;
}

/* Task 3_24 - Longest Common Ending

Write a function that returns the longest common ending between two strings.

Examples
longestCommonEnding("multiplication", "ration") ➞ "ation"
longestCommonEnding("potent", "tent") ➞ "tent"
longestCommonEnding("skyscraper", "carnivore") ➞ ""

Notes
Return an empty string if there exists no common ending.

using namespace std;
string longestCommonEnding(string s1, string s2) {

}

Describe(longest_common_substring)
{
	It(test1){Assert::That(longestCommonEnding("pitiful", "beautiful"), Equals("tiful"));}
	It(test2){Assert::That(longestCommonEnding("truck", "trick"), Equals("ck"));}
	It(test3){Assert::That(longestCommonEnding("vote", "asymptote"), Equals("ote"));}
	It(test4){Assert::That(longestCommonEnding("multiplication", "ration"), Equals("ation"));}
	It(test5){Assert::That(longestCommonEnding("potent", "tent"), Equals("tent"));}
	It(should_work_for_no_common_ending){Assert::That(longestCommonEnding("skyscraper", "carnivore"), Equals(""));}
};

*/

void tasks::task3_24()
{
	std::cout << "Hello Task3_24!" << std::endl;
}

/* Task 3_25 - Majority Vote

Create a function that returns the majority vote in an array. A majority vote is an element that occurs > N/2 times in an array (where N is the length of the array).

Examples
majorityVote(["A", "A", "B"]) ➞ "A"
majorityVote(["A", "A", "A", "B", "C", "A"]) ➞ "A"
majorityVote(["A", "B", "B", "A", "C", "C"]) ➞ "None"

Notes
The frequency of the majority element must be strictly greater than 1/2.
If there is no majority element, return "None".

std::string majorityVote(std::vector<std::string> arr) {

}

Describe(majority_vote)
{
	It(T1){Assert::That(majorityVote({"A", "B", "B", "B", "A", "A"}), Equals("None"));}
	It(T2){Assert::That(majorityVote({"B", "B", "B"}), Equals("B"));}
	It(T3){Assert::That(majorityVote({"A", "B", "B"}), Equals("B"));}
	It(T4){Assert::That(majorityVote({"A", "A", "B"}), Equals("A"));}
	It(T5){Assert::That(majorityVote({"A", "A", "A", "B", "C", "A"}), Equals("A"));}
	It(T6){Assert::That(majorityVote({"B", "A", "B", "B", "C", "A", "B", "B"}), Equals("B"));}
	It(T7){Assert::That(majorityVote({"A", "B", "B", "A", "C", "C"}), Equals("None"));}
	It(T8){Assert::That(majorityVote({"A", "B"}), Equals("None"));}
};

*/

void tasks::task3_25()
{
	std::cout << "Hello Task3_25!" << std::endl;
}

/* Task 3_26 - Fridge Poetry

Write a function that returns true if it's possible to build a phrase str1 using only the characters from another phrase str2.

Examples
canBuild("got 2 go", "gogogo 2 today") ➞ true
canBuild("sit on top", "its a moo point") ➞ true
canBuild("long high add or", "highway road go long") ➞ false
canBuild("fill tuck mid", "truck falls dim") ➞ false

Notes
All letters will be in lower case.
Numbers and special characters included.
Ignore whitespaces.
Do not count white space as a character.

bool canBuild(std::string str1, std::string str2) {

}

Describe(true_tests)
{
  It(test1){Assert::That(canBuild("got 2 go", "go go go 2 today"), Equals(true));}
	It(test2){Assert::That(canBuild("for an angel", "angel forest nymph awaken"), Equals(true));}
	It(test3){Assert::That(canBuild("sit on top", "its a moo point"), Equals(true));}
	It(test4){Assert::That(canBuild("solar to oven", "love desolate rose thorn"), Equals(true));}
	It(test5){Assert::That(canBuild("gate im in", "magnetizing"), Equals(true));}
	It(test6){Assert::That(canBuild("moreso", "mount rushmore"), Equals(true));}
};

Describe(false_tests)
{
	It(test1){Assert::That(canBuild("dool", "ken doll"), Equals(false));}
	It(test2){Assert::That(canBuild("world of make believe", "make believe world"), Equals(false));}
	It(test3){Assert::That(canBuild("long high add or", "highway road go long"), Equals(false));}
	It(test4){Assert::That(canBuild("fill tuck mid", "truck falls dim"), Equals(false));}
	It(test5){Assert::That(canBuild("skin man i", "man in mask"), Equals(false));}
	It(test6){Assert::That(canBuild("foolish prides", "foolish pride"), Equals(false));}
};

*/

void tasks::task3_26()
{
	std::cout << "Hello Task3_26!" << std::endl;
}

/* Task 3_27 - Digits Battle!

Starting from the left side of an integer, adjacent digits pair up in "battle" and the larger digit wins. If two digits are the same, they both lose. A lone digit automatically wins.

Create a function that returns the victorious digits.

To illustrate:

battleOutcome(578921445) ➞ 7925
// [57]: 7 wins; [89] 9 wins; [21] 2 wins;
// [44] neither wins; 5 (automatically) wins

Examples
battleOutcome(32531) ➞ 351 // 3 deffeats 2, 5 defeats 3, 1 is a single.
battleOutcome(111) ➞ 1 // 1 and 1 tie, so neither move on, last 1 is a single.
battleOutcome(78925) ➞ 895

Notes
There are no winners in a battle with equal digits (neither should be printed).
If the length of the number is odd, the lone digit should be printed at the end of the number.

int battleOutcome(int num) {

}

Describe(battle_outcome)
{
	It(T1){Assert::That(battleOutcome(32531), Equals(351));}
	It(T2){Assert::That(battleOutcome(111), Equals(1));}
	It(T3){Assert::That(battleOutcome(5289), Equals(59));}
	It(T4){Assert::That(battleOutcome(76811), Equals(781));}
	It(T5){Assert::That(battleOutcome(3245196), Equals(3596));}
	It(T6){Assert::That(battleOutcome(93552129), Equals(929));}
};

*/

void tasks::task3_27()
{
	std::cout << "Hello Task3_27!" << std::endl;
}

/* Task 3_28 - Anonymous Name

You are in the process of creating a chat application and want to add an anonymous name feature. This anonymous name feature will create an alias that consists of two capitalized words beginning with the same letter as the users first name.
Create a function that determines if the array of users is mapped to an array of anonymous names correctly.

Examples
isCorrectAliases(["Adrian M.", "Harriet S.", "Mandy T."], ["Amazing Artichoke", "Hopeful Hedgehog", "Marvelous Mouse"]) ➞ true
isCorrectAliases(["Rachel F.", "Pam G.", "Fred Z.", "Nancy K."], ["Reassuring Rat", "Peaceful Panda", "Fantastic Frog", "Notable Nickel"]) ➞ true
isCorrectAliases(["Beth T."], ["Brandishing Mimosa"]) ➞ false // Both words in "Brandishing Mimosa" should begin with a "B" - "Brandishing Beaver" would do the trick.

Notes
Both words in the alias should be capitalized.

using namespace std;
bool isCorrectAliases(vector<string> names, vector<string> aliases) {

}

Describe(anonymous_alias_tests)
{
	It(test1){Assert::That(isCorrectAliases({"Adrian M.", "Harriet S.", "Mandy T."}, {"Amazing Artichoke", "Hopeful Hedgehog", "Marvelous Mouse"}), Equals(true));}
	It(test2){Assert::That(isCorrectAliases({"Rachel F.", "Pam G.", "Fred Z.", "Nancy K."}, {"Reassuring Rat", "Peaceful Panda", "Fantastic Frog", "Notable Nickel"}), Equals(true));}
	It(test3){Assert::That(isCorrectAliases({"Beth T."}, {"Brandishing Mimosa"}), Equals(false));}
	It(test4){Assert::That(isCorrectAliases({"Mick S.", "Sam R.", "Val W."}, {"Magnificent Mint", "Sly Serpent", "Victorious Viceroy"}), Equals(true));}
	It(test5){Assert::That(isCorrectAliases({"Bella T.", "Tom H.", "Ben C."}, {"Beautiful Barn", "Talented Tapestry", "Cool Bamboo"}), Equals(false));}
	It(test6){Assert::That(isCorrectAliases({"Bella T.", "Tom H.", "Ben C."}, {"Beautiful Barn", "Talented Tapestry", "Bountiful Bamboo"}), Equals(true));}
};

*/

void tasks::task3_28()
{
	std::cout << "Hello Task3_28!" << std::endl;
}

/* Task 3_29 - Two Distinct Elements

In each input array, every number repeats at least once, except for two. Write a function that returns the two unique numbers.

Examples
returnUnique([1, 9, 8, 8, 7, 6, 1, 6]) ➞ [9, 7]
returnUnique([5, 5, 2, 4, 4, 4, 9, 9, 9, 1]) ➞ [2, 1]
returnUnique([9, 5, 6, 8, 7, 7, 1, 1, 1, 1, 1, 9, 8]) ➞ [5, 6]

Notes
Keep the same ordering in the output.

std::vector<int> returnUnique(std::vector<int> arr) {

}

Describe(find_two_unique_numbers)
{
	It(test1){Assert::That(returnUnique({1, 9, 8, 8, 7, 6, 1, 6}), Equals(std::vector<int>({9, 7})));}
	It(test2){Assert::That(returnUnique({5, 5, 2, 4, 4, 4, 9, 9, 9, 1}), Equals(std::vector<int>({2, 1})));}
	It(test3){Assert::That(returnUnique({9, 5, 6, 8, 7, 7, 1, 1, 1, 1, 1, 9, 8}), Equals(std::vector<int>({5, 6})));}
	It(test4){Assert::That(returnUnique({4, 3, 9, 9, 1, 1, 6, 1, 6, 2, 4}), Equals(std::vector<int>({3, 2})));}
	It(test5){Assert::That(returnUnique({44, 44, 44, 2, 55, 55, 55, 0, 66, 66, 66}), Equals(std::vector<int>({2, 0})));}
	It(test6){Assert::That(returnUnique({-9, -9, -9, 7, -9, -9, 1}), Equals(std::vector<int>({7, 1})));}
	It(test7){Assert::That(returnUnique({2, 2, -19, 2, 7, 7, 4, 9, 9, 0, 0, 3, 3, 3}), Equals(std::vector<int>({-19, 4})));}
};

*/

void tasks::task3_29()
{
	std::cout << "Hello Task3_29!" << std::endl;
}

/* Task 3_30 - Persistent Little Bugger

Create a function that takes a number and returns its multiplicative persistence, which is the number of times you must multiply the digits in num until you reach a single digit.

Examples
bugger(39) ➞ 3 // Because 3 * 9 = 27, 2 * 7 = 14, 1 * 4 = 4 and 4 has only one digit.
bugger(999) ➞ 4 // Because 9 * 9 * 9 = 729, 7 * 2 * 9 = 126, 1 * 2 * 6 = 12, and finally 1 * 2 = 2.
bugger(4) ➞ 0 // Because 4 is already a one-digit number.

Notes
N/A

int bugger(int num) {

}

Describe(persistent_bugger_tests)
{
	It(test1){Assert::That(bugger(39), Equals(3));}
	It(test2){Assert::That(bugger(4), Equals(0));}
	It(test3){Assert::That(bugger(25), Equals(2));}
	It(test4){Assert::That(bugger(999), Equals(4));}
};

*/

void tasks::task3_30()
{
	std::cout << "Hello Task3_30!" << std::endl;
}

/* Task 3_31 - Return the Sum of Two Numbers (on the Moon)

When two numbers are added together, the strange Lunar arithmetic is used on the Moon. The Lunar sum of two numbers is not determined by the sum of their individual digits, but by the highest digit of the two taken into account at each step, in columnar form.

2  4  6  +
3  1  7  =
--------
3  4  7

// 3 > 2 | 4 > 1 | 7 > 6

1  3  4  +
   5  4  =
--------
1  5  4

//  1 > 0 | 5 > 3 | 4 == 4
// Blank spots in the columnar form are equals to 0

   2  0  +
1  4  0  =
-------
1  4  0

// 1 > 0 | 4 > 2 | 0 == 0
Given two positive integers number1 and number2, implement a function that returns their sum as a new integer.

Examples
lunarSum(246, 317) ➞ 347
lunarSum(134, 54) ➞ 154
lunarSum(20, 140) ➞ 140

Notes
The given numbers will be always positive integers: no exceptions to handle.

int lunarSum(int number1, int number2) {

}

Describe(tests)
{
  It(test1){Assert::That(lunarSum(246, 317), Equals(347));}
	It(test2){Assert::That(lunarSum(134, 54), Equals(154));}
	It(test3){Assert::That(lunarSum(20, 140), Equals(140));}
	It(test4){Assert::That(lunarSum(1, 1), Equals(1));}
	It(test5){Assert::That(lunarSum(198, 44), Equals(198));}
	It(test6){Assert::That(lunarSum(36602, 696), Equals(36696));}
	It(test7){Assert::That(lunarSum(91, 8823), Equals(8893));}
	It(test8){Assert::That(lunarSum(123, 8), Equals(128));}
	It(test9){Assert::That(lunarSum(2289, 98211285), Equals(98212289));}
	It(test10){Assert::That(lunarSum(9, 11), Equals(19));}
	It(test11){Assert::That(lunarSum(11, 22), Equals(22));}
};

*/

void tasks::task3_31()
{
	std::cout << "Hello Task3_31!" << std::endl;
}

/* Task 3_32 - Combined Consecutive Sequence

Write a function that returns true if two arrays, when combined, form a consecutive sequence. A consecutive sequence is a sequence without any gaps in the integers, e.g. 1, 2, 3, 4, 5 is a consecutive sequence, but 1, 2, 4, 5 is not.

Examples
consecutiveCombo([7, 4, 5, 1], [2, 3, 6]) ➞ true
consecutiveCombo([1, 4, 6, 5], [2, 7, 8, 9]) ➞ false
consecutiveCombo([1, 4, 5, 6], [2, 3, 7, 8, 10]) ➞ false
consecutiveCombo([44, 46], [45]) ➞ true

Notes
The input arrays will have unique values.
The input arrays can be in any order.

using namespace std;
bool consecutiveCombo(vector<int> a1, vector<int> a2) {

}

Describe(consecutive_Combo) {
	It(T1){Assert::That(consecutiveCombo({1, 4, 5, 7}, {2, 3, 6}), Equals(true));}
	It(T2){Assert::That(consecutiveCombo({1, 4, 5, 6}, {2, 7, 8, 9}), Equals(false));}
	It(T3){Assert::That(consecutiveCombo({1, 4, 5, 6}, {2, 3, 7, 8, 10}), Equals(false));}
	It(T4){Assert::That(consecutiveCombo({7, 5, 4, 1}, {2, 3, 6, 8}), Equals(true));}
	It(T5){Assert::That(consecutiveCombo({33, 34, 40}, {39, 38, 37, 36, 35, 32, 31, 30}), Equals(true));}
	It(T6){Assert::That(consecutiveCombo({1, 4, 5, 6}, {2, 3, 7, 8, 10}), Equals(false));}
	It(T7){Assert::That(consecutiveCombo({44, 46}, {45}), Equals(true));}
	It(T8){Assert::That(consecutiveCombo({4, 3, 1}, {2, 5}), Equals(true));}
	It(T9){Assert::That(consecutiveCombo({4, 3, 1}, {2, 5, 7, 6}), Equals(true));}
	It(T10){Assert::That(consecutiveCombo({4, 3, 1}, {7, 6, 5}), Equals(false));}
	It(T11){Assert::That(consecutiveCombo({4, 3, 1}, {0, 7, 6, 5}), Equals(false));}
	It(T12){Assert::That(consecutiveCombo({44, 46}, {45}), Equals(true));}
};

*/

void tasks::task3_32()
{
	std::cout << "Hello Task3_32!" << std::endl;
}

/* Task 3_33 - All Rotations of a String

Create a left rotation and a right rotation function that returns all the left rotations and right rotations of a string.

Examples
leftRotations("abc") ➞ ["abc", "bca", "cab"]
rightRotations("abc") ➞ ["abc", "cab", "bca"]
leftRotations("abcdef") ➞ ["abcdef", "bcdefa", "cdefab", "defabc", "efabcd", "fabcde"]
rightRotations("abcdef") ➞ ["abcdef", "fabcde", "efabcd", "defabc", "cdefab", "bcdefa"]

Notes
N/A

std::vector<std::string> leftRotations(std::string str) {

}

std::vector<std::string> rightRotations(std::string str) {

}

Describe(all_left_rotations)
{
	It(T1){Assert::That(leftRotations("abc"), Equals(std::vector<std::string>({
		"abc",
		"bca",
		"cab"
	})));}

	It(T2){Assert::That(leftRotations("abcdef"), Equals(std::vector<std::string>({
		"abcdef",
		"bcdefa",
		"cdefab",
		"defabc",
		"efabcd",
		"fabcde"
	})));}

	It(T3){Assert::That(leftRotations("himalaya"), Equals(std::vector<std::string>({
		"himalaya",
		"imalayah",
	  "malayahi",
		"alayahim",
		"layahima",
		"ayahimal",
		"yahimala",
		"ahimalay"
	})));}

	It(T4){Assert::That(leftRotations("aab"), Equals(std::vector<std::string>({
		"aab",
		"aba",
		"baa"
	})));}
};


Describe(all_right_rotations)
{
	It(T1){Assert::That(rightRotations("abc"), Equals(std::vector<std::string>({
		"abc",
		"cab",
		"bca"
	})));}

	It(T2){Assert::That(rightRotations("abcdef"), Equals(std::vector<std::string>({
		"abcdef",
		"fabcde",
		"efabcd",
		"defabc",
		"cdefab",
		"bcdefa"
	})));}

	It(T3){Assert::That(rightRotations("himalaya"), Equals(std::vector<std::string>({
		"himalaya",
		"ahimalay",
		"yahimala",
		"ayahimal",
		"layahima",
		"alayahim",
		"malayahi",
		"imalayah"
	})));}

	It(T4){Assert::That(rightRotations("aab"), Equals(std::vector<std::string>({
		"aab",
		"baa",
		"aba"
	})));}
};

*/

void tasks::task3_33()
{
	std::cout << "Hello Task3_33!" << std::endl;
}

/* Task 3_34 - Possible Palindrome

Create a function that determines whether it is possible to build a palindrome from the characters in a string.

Examples
possiblePalindrome("acabbaa") ➞ true // Can make the following palindrome: "aabcbaa"
possiblePalindrome("aacbdbc") ➞ true // Can make the following palindrome: "abcdcba"
possiblePalindrome("aacbdb") ➞ false
possiblePalindrome("abacbb") ➞ false

Notes
N/A

bool possiblePalindrome(std::string s) {

}

Describe(possible_palindrome_tests)
{
	It(test1){Assert::That(possiblePalindrome("acabbaa"), Equals(true));}
	It(test2){Assert::That(possiblePalindrome("aacbdbc"), Equals(true));}
	It(test3){Assert::That(possiblePalindrome("aacbdb"), Equals(false));}
	It(test4){Assert::That(possiblePalindrome("abacbb"), Equals(false));}
	It(test5){Assert::That(possiblePalindrome("abb"), Equals(true));}
	It(test6){Assert::That(possiblePalindrome("bbb"), Equals(true));}
	It(test7){Assert::That(possiblePalindrome("bbaa"), Equals(true));}
	It(test8){Assert::That(possiblePalindrome("bbaacc"), Equals(true));}
	It(test9){Assert::That(possiblePalindrome("bbaaccd"), Equals(true));}
	It(test10){Assert::That(possiblePalindrome("bbaacd"), Equals(false));}
	It(test11){Assert::That(possiblePalindrome("abc"), Equals(false));}
	It(test12){Assert::That(possiblePalindrome("ab"), Equals(false));}
	It(test13){Assert::That(possiblePalindrome("aabbccddef"), Equals(false));}
};

*/

void tasks::task3_34()
{
	std::cout << "Hello Task3_34!" << std::endl;
}

/* Task 3_35 - All or Nothing

Suppose a student can earn 100% on an exam by getting the answers all correct or all incorrect. Given a potentially incomplete answer key and the student's answers, write a function that determines whether or not a student can still score 100%. Questions with missing answers are marked with an underscore, "_".

["A", "_", "C", "_", "B"]   // answer key
["A", "D", "C", "E", "B"]   // student's solution

➞ true

// Possible for student to get all questions correct.

["B", "_", "B"]   // answer key
["B", "D", "C"]   // student's solution

➞ false

// First question is correct but third is wrong, so not possible to score 100%.

["T", "_", "F", "F", "F"]   // answer key
["F", "F", "T", "T", "T"]   // student's solution

➞ true

// Possible for student to get all questions incorrect.

Examples
possiblyPerfect(["B", "A", "_", "_"], ["B", "A", "C", "C"]) ➞ true
possiblyPerfect(["A", "B", "A", "_"], ["B", "A", "C", "C"]) ➞ true
possiblyPerfect(["A", "B", "C", "_"], ["B", "A", "C", "C"]) ➞ false
possiblyPerfect(["B", "_"], ["C", "A"]) ➞ true
possiblyPerfect(["B", "A"], ["C", "A"]) ➞ false
possiblyPerfect(["B"], ["B"]) ➞ true

Notes
Test has at least one question.

bool possiblyPerfect(std::vector<char> key, std::vector<char> answers) {

}

Describe(possibly_perfect_grades_tests)
{
	It(test1){Assert::That(possiblyPerfect({'A', '_', 'C', '_', 'B'}, {'A', 'D', 'C', 'E', 'B'}), Equals(true));}
	It(test2){Assert::That(possiblyPerfect({'B', '_', 'B'}, {'B', 'D', 'C'}), Equals(false));}
	It(test3){Assert::That(possiblyPerfect({'T', '_', 'F', 'F', 'F'}, {'F', 'F', 'T', 'T', 'T'}), Equals(true));}
	It(test4){Assert::That(possiblyPerfect({'B', 'A', '_', '_'}, {'B', 'A', 'C', 'C'}), Equals(true));}
	It(test5){Assert::That(possiblyPerfect({'A', 'B', 'A', '_'}, {'B', 'A', 'C', 'C'}), Equals(true));}
	It(test6){Assert::That(possiblyPerfect({'A', 'B', 'C', '_'}, {'B', 'A', 'C', 'C'}), Equals(false));}
	It(test7){Assert::That(possiblyPerfect({'B', '_'}, {'C', 'A'}), Equals(true));}
	It(test8){Assert::That(possiblyPerfect({'B', 'A'}, {'C', 'A'}), Equals(false));}
	It(test9){Assert::That(possiblyPerfect({'B'}, {'B'}), Equals(true));}
	It(test10){Assert::That(possiblyPerfect({'_', 'T', '_', '_'}, {'T', 'F', 'F', 'F'}), Equals(true));}
	It(test11){Assert::That(possiblyPerfect({'_', 'T', '_', '_'}, {'T', 'T', 'F', 'T'}), Equals(true));}
	It(test12){Assert::That(possiblyPerfect({'_', 'T', 'T', 'T'}, {'T', 'T', 'F', 'T'}), Equals(false));}
	It(test13){Assert::That(possiblyPerfect({'_', 'T', 'T', 'T'}, {'T', 'T', 'T', 'T'}), Equals(true));}
	It(test14){Assert::That(possiblyPerfect({'_', 'T', 'T', 'T'}, {'F', 'F', 'F', 'F'}), Equals(true));}
};

*/

void tasks::task3_35()
{
	std::cout << "Hello Task3_35!" << std::endl;
}

/* Task 3_36 - Reverse Coding Challenge #5

This is a reverse coding challenge. Normally you're given explicit directions with how to create a function. Here, you must generate your own function to satisfy the relationship between the inputs and outputs.
Your task is to create a function that, when fed the inputs below, produce the sample outputs shown.

Examples
832 ➞ 594
51 ➞ 36
7977 ➞ 198
1 ➞ 0
665 ➞ 99
149 ➞ 0

Notes
If you get stuck, see Comments for a hint.

int mysteryFunc(int num) {

}

Describe(mystery_func_tests)
{
	It(test1){Assert::That(mysteryFunc(832), Equals(594));}
	It(test2){Assert::That(mysteryFunc(51), Equals(36));}
	It(test3){Assert::That(mysteryFunc(7977), Equals(198));}
	It(test4){Assert::That(mysteryFunc(1), Equals(0));}
	It(test5){Assert::That(mysteryFunc(665), Equals(99));}
	It(test6){Assert::That(mysteryFunc(149), Equals(0));}
};

*/

void tasks::task3_36()
{
	std::cout << "Hello Task3_36!" << std::endl;
}

/* Task 3_37 - Moran Numbers

A Harshad number is a number which is divisible by the sum of its digits. For example, 132 is divisible by 6 (1+3+2).
A subset of the Harshad numbers are the Moran numbers. Moran numbers yield a prime when divided by the sum of their digits. For example, 133 divided by 7 (1+3+3) yields 19, a prime.
Create a function that takes a number and returns "M" if the number is a Moran number, "H" if it is a (non-Moran) Harshad number, or "Neither".

Examples
moran(132) ➞ "H"
moran(133) ➞ "M"
moran(134) ➞ "Neither"

Notes
N/A

std::string moran(int n) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(moran(132), Equals("H"));}
	It(test2){Assert::That(moran(133), Equals("M"));}
	It(test3){Assert::That(moran(134), Equals("Neither"));}
	It(test4){Assert::That(moran(3033), Equals("M"));}
	It(test5){Assert::That(moran(3030), Equals("H"));}
	It(test6){Assert::That(moran(491423), Equals("Neither"));}
	It(test7){Assert::That(moran(20937), Equals("M"));}
};

*/

void tasks::task3_37()
{
	std::cout << "Hello Task3_37!" << std::endl;
}

/* Task 3_38 - How Many "Prime Numbers" Are There?

Create a function that finds how many prime numbers there are, up to the given integer.

Examples
primeNumbers(10) ➞ 4 // 2, 3, 5 and 7
primeNumbers(20) ➞ 8 // 2, 3, 5, 7, 11, 13, 17 and 19
primeNumbers(30) ➞ 10 // 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29

Notes
N/A

int primeNumbers(int num) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(primeNumbers(20), Equals(8));}
	It(test2){Assert::That(primeNumbers(30), Equals(10));}
	It(test3){Assert::That(primeNumbers(100), Equals(25));}
	It(test4){Assert::That(primeNumbers(200), Equals(46));}
	It(test5){Assert::That(primeNumbers(1000), Equals(168));}
	It(test6){Assert::That(primeNumbers(-5), Equals(0));}
	It(test7){Assert::That(primeNumbers(66), Equals(18));}
	It(test8){Assert::That(primeNumbers(133), Equals(32));}
	It(test9){Assert::That(primeNumbers(99), Equals(25));}
};

*/

void tasks::task3_38()
{
	std::cout << "Hello Task3_38!" << std::endl;
}

/* Task 3_39 - Split String by Identical Characters

Create a function that splits a string into an array of identical clusters.

Examples
splitGroups("555") ➞ ["555"]
splitGroups("5556667788") ➞ ["555", "666", "77", "88"]
splitGroups("aaabbbaabbab") ➞ ["aaa", "bbb", "aa", "bb", "a", "b"]
splitGroups("abbbcc88999&&!!!_") ➞ ["a", "bbb", "cc", "88", "999", "&&", "!!!", "_"]

Notes
Each cluster should only have one unique character.
The resulting array should be in the same order as the input string.
Should work with letters, numbers and other characters.

std::vector<std::string> splitGroups(std::string s) {

}

Describe(split_strings_by_identical_groups_tests)
{
	It(test1){Assert::That(splitGroups("aaabbbaabbab"), Equals(std::vector<std::string>({"aaa", "bbb", "aa", "bb", "a", "b"})));}
	It(test2){Assert::That(splitGroups("5556667788"), Equals(std::vector<std::string>({"555", "666", "77", "88"})));}
	It(test3){Assert::That(splitGroups("abbbcc88999&&!!!_"), Equals(std::vector<std::string>({"a", "bbb", "cc", "88", "999", "&&", "!!!", "_"})));}
	It(test4){Assert::That(splitGroups("555"), Equals(std::vector<std::string>({"555"})));}
	It(test5){Assert::That(splitGroups("AABBCC"), Equals(std::vector<std::string>({"AA", "BB", "CC"})));}
};

*/

void tasks::task3_39()
{
	std::cout << "Hello Task3_39!" << std::endl;
}

/* Task 3_40 - Divide Array into Chunks

Create a function that divides an array into chunks of size n, where n is the length of each chunk.

Examples
chunkify([2, 3, 4, 5], 2) ➞ [[2, 3], [4, 5]]
chunkify([2, 3, 4, 5, 6], 2) ➞ [[2, 3], [4, 5], [6]]
chunkify([2, 3, 4, 5, 6, 7], 3) ➞ [[2, 3, 4], [5, 6, 7]]
chunkify([2, 3, 4, 5, 6, 7], 1) ➞ [[2], [3], [4], [5], [6], [7]]
chunkify([2, 3, 4, 5, 6, 7], 7) ➞ [[2, 3, 4, 5, 6, 7]]

Notes
It's O.K. if the last chunk is not completely filled (see example #2).
Integers will always be single-digit.

using namespace std;
vector<vector<int>> chunkify(vector<int> arr, int size) {

}

Describe(chunkify_tests)
{
	It(basic_tests)
	{
		Assert::That(chunkify({2, 3, 4, 5, 6, 7}, 3), Equals(std::vector<std::vector<int>>({{2, 3, 4}, {5, 6, 7}})));
		Assert::That(chunkify({2, 3, 4, 5}, 2), Equals(std::vector<std::vector<int>>({{2, 3}, {4, 5}})));
		Assert::That(chunkify({2, 3, 4, 5, 6, 7}, 1), Equals(std::vector<std::vector<int>>({{2}, {3}, {4}, {5}, {6}, {7}})));
	}
	It(chunk_size_exceeds_array_size)
	{
		Assert::That(chunkify({2, 3, 4, 5, 6, 7}, 7), Equals(std::vector<std::vector<int>>({{2, 3, 4, 5, 6, 7}})));
	}
	It(leftover_chunks_okay)
	{
		Assert::That(chunkify({2, 3, 4, 5}, 3), Equals(std::vector<std::vector<int>>({{2, 3, 4}, {5}})));
		Assert::That(chunkify({2, 3, 4, 5, 6, 7, 8}, 3), Equals(std::vector<std::vector<int>>({{2, 3, 4}, {5, 6, 7}, {8}})));
		Assert::That(chunkify({2, 3, 4, 5, 6}, 2), Equals(std::vector<std::vector<int>>({{2, 3}, {4, 5}, {6}})));
	}
};

*/

void tasks::task3_40()
{
	std::cout << "Hello Task3_40!" << std::endl;
}

/* Task 3_41 - Number of Even or Odd Digits

Create a function that takes in an array of integers returns the number of even or odd digits for each number, depending on the parameter.

Examples
countDigits([22, 53, 99, 61, 777, 8], "odd") ➞ [0, 2, 2, 1, 3, 0]
countDigits([22, 53, 99, 61, 777, 8], "even") ➞ [2, 0, 0, 1, 0, 1]
countDigits([54, 113, 89, 10], "odd") ➞ [1, 3, 1, 1]
countDigits([54, 113, 89, 10], "even") ➞ [1, 0, 1, 1]

Notes
N/A

std::vector<int> countDigits(std::vector<int> arr, std::string type) {

}

Describe(count_digits)
{
	It(test1){Assert::That(countDigits({22, 53, 99, 61, 777, 8}, "odd"), Equals(std::vector<int>({0, 2, 2, 1, 3, 0})));}
	It(test2){Assert::That(countDigits({54, 113, 89, 10}, "odd"), Equals(std::vector<int>({1, 3, 1, 1})));}
	It(test3){Assert::That(countDigits({1, 2, 3}, "even"), Equals(std::vector<int>({0, 1, 0})));}
	It(test4){Assert::That(countDigits({5, 8, 9, 12}, "even"), Equals(std::vector<int>({0, 1, 0, 1})));}
};

*/

void tasks::task3_41()
{
	std::cout << "Hello Task3_41!" << std::endl;
}
 
/* Task 3_42 - Tally Marks

Create a function that can convert from normal notation to tally-mark notation and vice versa. In tally-mark notation, a number can be decomposed as the sum of 5s + remainder.

The function will look like this: switchNotation([current scores], desired notation)

Ex.1 Normal: 3, 24, 4, 9
Ex.1 Tally: 3, 55554, 4, 54

Ex.2 Normal: 2, 12, 2, 4
Ex.2 Tally: 2, 552, 2, 4

Examples
switchNotation([51], "normal") ➞ [6]
switchNotation([3, 55, 55551], "normal") ➞ [3, 10, 21]
switchNotation([15, 29, 5, 3], "tally") ➞ [555, 555554, 5, 3]

Notes
N/A

std::vector<int> switchNotation(std::vector<int> scores, std::string desired_notation) {

}

Describe(tally_marks_tests)
{
	// Tally to normal
	It(tally_to_normal_test_1){Assert::That(switchNotation({3, 55, 55551}, "normal"), Equals(std::vector<int>({3, 10, 21})));}
	It(tally_to_normal_test_2){Assert::That(switchNotation({553, 55, 51}, "normal"), Equals(std::vector<int>({13, 10, 6})));}
	It(tally_to_normal_test_3){Assert::That(switchNotation({51}, "normal"), Equals(std::vector<int>({6})));}
	It(tally_to_normal_test_4){Assert::That(switchNotation({555, 55, 5}, "normal"), Equals(std::vector<int>({15, 10, 5})));}
	// Normal to tally
	It(normal_to_tally_test_1){Assert::That(switchNotation({15, 29, 5, 3}, "tally"), Equals(std::vector<int>({555, 555554, 5, 3})));}
	It(normal_to_tally_test_2){Assert::That(switchNotation({3, 8, 8, 6}, "tally"), Equals(std::vector<int>({3, 53, 53, 51})));}
	It(normal_to_tally_test_3){Assert::That(switchNotation({3, 44, 8, 21}, "tally"), Equals(std::vector<int>({3, 555555554, 53, 55551})));}
};

*/

void tasks::task3_42()
{
	std::cout << "Hello Task3_42!" << std::endl;
}

/* Task 3_43 - Matrix Transpose

Create a function that transposes a 2D matrix.

Examples
transposeMatrix([
  [1, 1, 1],
  [2, 2, 2],
  [3, 3, 3]
]) ➞ [
  [1, 2, 3],
  [1, 2, 3],
  [1, 2, 3]
]

transposeMatrix([
  [5, 5],
  [6, 7],
  [9, 1]
]) ➞ [
  [5, 6, 9],
  [5, 7, 1]
]

Notes
N/A

using namespace std;
vector<vector<int>> transposeMatrix(vector<vector<int>> arr) {

}

Describe(transpose_matrix) {
	It(T1){Assert::That(transposeMatrix({
		{1, 1, 1},
		{2, 2, 2},
		{3, 3, 3}
	}), Equals(std::vector<std::vector<int>> ({
		{1, 2, 3},
		{1, 2, 3},
		{1, 2, 3}
	})));}

	It(T2){Assert::That(transposeMatrix({
		{1, 1, 1},
		{2, 2, 2}
	}), Equals(std::vector<std::vector<int>> ({
		{1, 2},
		{1, 2},
		{1, 2}
	})));}

	It(T3){Assert::That(transposeMatrix({
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	}), Equals(std::vector<std::vector<int>> ({
		{1, 5, 9},
		{2, 6, 10},
		{3, 7, 11},
		{4, 8, 12}
	})));}
};

*/

void tasks::task3_43()
{
	std::cout << "Hello Task3_43!" << std::endl;
}

/* Task 3_44 - Repeating Cycle

Below is an example of a repeating cycle.

isRepeatingCycle([1, 2, 3, 1, 2], 3) => true // Since the first two elements of [1, 2, 3] equals [1, 2]
Below is an example of a non-repeating cycle.

isRepeatingCycle([1, 2, 3, 1, 3], 3) => false // Since [1, 2, 3] != [1, 3]
You are tasked with writing a function that takes in two inputs:

An array of integers.
The length of each cycle.
Return the boolean value true if the array is a repeating cycle, and false if the array is a non-repeating cycle.

Examples
isRepeatingCycle([1, 2, 3, 1, 2, 3, 1], 3) ➞ true
isRepeatingCycle([1, 2, 3, 4, 2, 3, 1], 4) ➞ false
isRepeatingCycle([1, 2, 1, 2, 2], 2) ➞ false
isRepeatingCycle([1, 1, 1, 1], 3) ➞ true

Notes
All cycles begin with the first element of the array.
Return true if the cycle length is greater than the array length.

bool isRepeatingCycle(std::vector<int> arr, int length) {

}

Describe(repeating_cycle_tests)
{
	It(test1){Assert::That(isRepeatingCycle({1, 2, 3, 1, 2, 3, 1}, 3), Equals(true));}
	It(test2){Assert::That(isRepeatingCycle({1, 2, 3, 4, 2, 3, 1}, 4), Equals(false));}
	It(test3){Assert::That(isRepeatingCycle({1, 2, 1, 2, 2}, 2), Equals(false));}
	It(test4){Assert::That(isRepeatingCycle({1, 2, 1, 2, 1, 2, 1}, 3), Equals(false));}
	It(test5){Assert::That(isRepeatingCycle({1, 2, 1, 2, 1, 2, 1}, 2), Equals(true));}
	It(test6){Assert::That(isRepeatingCycle({1, 2, 1, 2, 1, 2, 1}, 4), Equals(true));}
	It(these_cycles_are_trivially_repeating_1){Assert::That(isRepeatingCycle({1, 1, 1, 1}, 3), Equals(true));}
	It(these_cycles_are_trivially_repeating_2){Assert::That(isRepeatingCycle({1, 2, 1, 9}, 4), Equals(true));}
	It(these_cycles_are_trivially_repeating_3){Assert::That(isRepeatingCycle({1, 1, 3, 1, 1}, 7), Equals(true));}
};

*/

void tasks::task3_44()
{
	std::cout << "Hello Task3_44!" << std::endl;
}

/* Task 3_45 - Get SHA-256 Hash

Hash algorithms are easy to do one way, but essentially impossible to do in reverse. For example, if you hash something simple, like password123, it will give you a long code, unique to that word or phrase. Ideally, there's no way to do this in reverse. You can't take the hash code and go back to the word or phrase you started with.
Make a function that returns the SHA-256 secure hash for a given string. The hash should be formatted in a hexadecimal digit string.

Examples
getSha256Hash("password123") ➞ "ef92b778bafe771e89245b89ecbc08a44a4e166c06659911881f383d4473e94f"
getSha256Hash("Fluffy@home") ➞ "dcc1ac3a7148a2d9f47b7dbe3d733040c335b2a3d8adc7984e0c483c5b2c1665"
getSha256Hash("Hey dude!") ➞ "14f997f08b8ad032dcb274198684f995d34043f9da00acd904dc72836359ae0f"

Notes
Bonus if you can do it without importing any libraries ;)

std::string getSha256Hash(std::string str) {

}

Describe(tests)
{
  It(test1){Assert::That(getSha256Hash("hi"), Equals("8f434346648f6b96df89dda901c5176b10a6d83961dd3c1ac88b59b2dc327aa4"));}
	It(test2){Assert::That(getSha256Hash("password123"), Equals("ef92b778bafe771e89245b89ecbc08a44a4e166c06659911881f383d4473e94f"));}
	It(test3){Assert::That(getSha256Hash("don't use easy passwords"), Equals("9fdfef802f06e384101080935fd3c938c60f92f528d520528b5c0491471a2be1"));}
};

*/

void tasks::task3_45()
{
	std::cout << "Hello Task3_45!" << std::endl;
}

/* Task 3_46 - Uno (Part 2)

This problem is a continuation of Uno Part 1 (although you don't need to complete that problem to complete this one).

It's your turn to play again. Create a function that takes as its arguments (1) your hand (an array of cards), and (2) the face-up card. In Uno, you are able to play a card from your hand if either:

One of the card colors in your hand matches the face-up card's color.
One of the card numbers in your hand matches the face-up card's number.
Write a function that will return:

"Uno!" if after playing your card, you are left with a single card.
"You won!" if after playing your card, you are left with zero cards (an empty array).
"Keep going..." otherwise.

Examples
decision(["yellow 3", "red 3"], "red 10") ➞ "Uno!"
decision(["blue 1"], "blue 5") ➞ "You won!"
decision(["blue 1", "green 2", "yellow 4", "red 2"], "blue 5") ➞ "Keep going..."

Notes
N/A

std::string decision(std::vector<std::string> hand, std::string face) {

}

Describe(decision_){
It(test1){Assert::That(decision({"yellow 3", "red 3"}, "red 10"), Equals("Uno!"));}
It(test2){Assert::That(decision({"blue 1"}, "blue 5"), Equals("You won!"));}
It(test3){Assert::That(decision({"red 1"}, "blue 5"), Equals("Uno!"));}
It(test4){Assert::That(decision({"red 1", "blue 10"}, "blue 5"), Equals("Uno!"));}
It(test5){Assert::That(decision({"red 1", "blue 10", "green 7"}, "blue 5"), Equals("Keep going..."));}
It(test6){Assert::That(decision({"red 1", "green 7"}, "green 2"), Equals("Uno!"));}
It(test7){Assert::That(decision({"green 7"}, "green 2"), Equals("You won!"));}
It(test8){Assert::That(decision({"blue 7"}, "green 7"), Equals("You won!"));}
It(test9){Assert::That(decision({"blue 1", "green 2", "yellow 4", "red 2"}, "blue 5"), Equals("Keep going..."));}
};

*/

void tasks::task3_46()
{
	std::cout << "Hello Task3_46!" << std::endl;
}
 
/* Task 3_47 - Dance for Cash

Your local bank has decided to upgrade its ATM machines by incorporating motion sensor technology. The machines now interpret a series of consecutive dance moves in place of a PIN number.
Create a program that converts a customer's PIN number to its dance equivalent. There is one dance move per digit in the PIN number. A list of dance moves is given in the code.

Examples
danceConvert("0000") ➞ ["Shimmy", "Shake", "Pirouette", "Slide"]
danceConvert("3856") ➞ [ "Slide", "Arabesque", "Pop", "Arabesque" ]
danceConvert("9999") ➞ [ "Arabesque", "Shimmy", "Shake", "Pirouette" ]
danceConvert("32a1") ➞ ["Invalid input."]

Notes
Each dance move will be selected from a list by index based on the current digit's value plus that digit's index value. If this value is greater than the last index value of the dance list, it should cycle to the beginning of the list.
Valid input will always be a string of four digits. Output will be a string array.
If the input is not four valid numbers, return the array with a single element: "Invalid input."

using namespace std;
vector<string> danceConvert(string pin) {
	vector<string> moves = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};

}

Describe(ATM_dance_tests)
{
	// Should return a dance seqence
	It(should_return_a_dance_sequence_1){Assert::That(danceConvert("0000"), Equals(std::vector<std::string>({"Shimmy", "Shake", "Pirouette", "Slide"})));}
	It(should_return_a_dance_sequence_2){Assert::That(danceConvert("5555"), Equals(std::vector<std::string>({"Headspin", "Dosado", "Pop", "Lock"})));}
	It(should_return_a_dance_sequence_3){Assert::That(danceConvert("8888"), Equals(std::vector<std::string>({"Lock", "Arabesque", "Shimmy", "Shake"})));}
	It(should_return_a_dance_sequence_4){Assert::That(danceConvert("0123"), Equals(std::vector<std::string>({"Shimmy", "Pirouette", "Box Step", "Dosado"})));}
	It(should_return_a_dance_sequence_5){Assert::That(danceConvert("8765"), Equals(std::vector<std::string>({"Lock", "Lock", "Lock", "Lock"})));}
	It(should_return_a_dance_sequence_6){Assert::That(danceConvert("9104"), Equals(std::vector<std::string>({"Arabesque", "Pirouette", "Pirouette", "Pop"})));}
	It(should_return_a_dance_sequence_7){Assert::That(danceConvert("3619"), Equals(std::vector<std::string>({"Slide", "Pop", "Slide", "Pirouette"})));}
	It(should_return_a_dance_sequence_8){Assert::That(danceConvert("9742"), Equals(std::vector<std::string>({"Arabesque", "Lock", "Dosado", "Headspin"})));}
	// Should return invalid input for non 4 digit entries
	It(should_return_invalid_input_for_non_4_digit_entries_1){Assert::That(danceConvert("a95f"), Equals(std::vector<std::string>({"Invalid input."})));}
	It(should_return_invalid_input_for_non_4_digit_entries_2){Assert::That(danceConvert("834"), Equals(std::vector<std::string>({"Invalid input."})));}
	It(should_return_invalid_input_for_non_4_digit_entries_3){Assert::That(danceConvert("+493"), Equals(std::vector<std::string>({"Invalid input."})));}
	It(should_return_invalid_input_for_non_4_digit_entries_4){Assert::That(danceConvert("-324"), Equals(std::vector<std::string>({"Invalid input."})));}
};

*/

void tasks::task3_47()
{
	std::cout << "Hello Task3_47!" << std::endl;
}

/* Task 3_48 - Replace Every Nth Instance of a Character

Create a function that takes a string and replaces every nth instance of oldChar with newChar. Your function will have four parameters:

str — The original input text to be processed.
nth — The nth instance to be replaced.
oldChar — The character being replaced.
newChar — The character replacing oldChar.
In other words, if str is "abababa", nth is 3, oldChar is "a" and newChar is "Z", you would replace the 3rd insrtance of "a" with "Z", returning "ababZba".

Examples
replaceNth("A glittering gem is not enough.", 0, "o", "-")➞ "A glittering gem is not enough."
replaceNth("Vader said: No, I am your father!", 2, "a", "o")➞ "Vader soid: No, I am your fother!"
replaceNth("Writing a list of random sentences is harder than I initially thought it would be.", 2, "i", "3")➞ "Writ3ng a list of random sentences 3s harder than I in3tially thought 3t would be."

Notes
If nth is 0, negative or larger than instances of oldChar, return the original string.
Tests are case sensitive.

std::string replaceNth(std::string str, int nth, std::string oldChar, std::string newChar) {

}

Describe(replace_nth_char)
{
  It(test1){Assert::That(replaceNth("Sometimes it is better to just walk away from things and go back to them later when you’re in a better frame of mind.", 3, "e", "_"), Equals("Sometimes it is b_tter to just walk away from things and go back to them lat_r when you’re in a b_tter frame of mind."));}
	It(test2){Assert::That(replaceNth("The clock within this blog and the clock on my laptop are 1 hour different from each other.", 1, "o", "@"), Equals("The cl@ck within this bl@g and the cl@ck @n my lapt@p are 1 h@ur different fr@m each @ther."));}
	It(test3){Assert::That(replaceNth("Lets all be unique together until we realise we are all the same.", 4, "l", "#"), Equals("Lets all be unique together until we rea#ise we are all the same."));}
	It(test4){Assert::That(replaceNth("Is it free?", 100, "e", "Y"), Equals("Is it free?"));}
	It(test5){Assert::That(replaceNth("A glittering gem is not enough.", 0, "o", "-"), Equals("A glittering gem is not enough."));}
	It(test6){Assert::That(replaceNth("Please wait outside of the house.", -3, "s", "s"), Equals("Please wait outside of the house."));}
	It(test7){Assert::That(replaceNth("Joe made the sugar cookies; Susan decorated them.", 5, "e", "*"), Equals("Joe made the sugar cookies; Susan d*corated them."));}
	It(test8){Assert::That(replaceNth("Writing a list of random sentences is harder than I initially thought it would be.", 2, "i", "3"), Equals("Writ3ng a list of random sentences 3s harder than I in3tially thought 3t would be."));}
	It(test9){Assert::That(replaceNth("The book is in front of the table.", 3, "f", "K"), Equals("The book is in front of the table."));}
	It(tests_are_case_sensative){Assert::That(replaceNth("Sometimes, all you NEED to do is completely make an ass of yourself and laugh it off to realise that LIFE isn’t so bad AFTER all.", 2, "E", "x"), Equals("Sometimes, all you NExD to do is completely make an ass of yourself and laugh it off to realise that LIFE isn’t so bad AFTxR all."));}
};

*/

void tasks::task3_48()
{
	std::cout << "Hello Task3_48!" << std::endl;
}

/* Task 3_49 - Ice Cream Sandwich

An ice cream sandwich is a string that is formed by two identical ends and a different middle.

Some examples of ice cream sandwiches:
"AABBBAA"

"3&&3"

"yyyyymmmmmmmmyyyyy"

"hhhhhhhhmhhhhhhhh"
Notice how left and right ends of the sandwich are identical in both length and in repeating character. The middle section is distinctly different.

Not ice cream sandwiches:
"BBBBB" // You can't have just plain icecream.
"AAACCCAA" // You can't have unequal sandwich ends.
"AACDCAA" // You can't have more than one filling.
"A" // You can't have fewer than 3 characters.

Write a function that returns true if a string is an ice cream sandwich and false otherwise.

Examples
isIcecreamSandwich("CDC") ➞ true
isIcecreamSandwich("AAABB") ➞ false
isIcecreamSandwich("AA") ➞ false

Notes
An ice cream sandwich must have a minimum length of 3 characters, and at least two of these characters must be distinct (you can't only have the filling!).

bool isIcecreamSandwich(std::string str) {

}

Describe(icecream_tests)
{
	It(valid_icecream_sandwiches)
	{
			Assert::That(isIcecreamSandwich("AABBBAA"), Equals(true));
			Assert::That(isIcecreamSandwich("3&&3"), Equals(true));
			Assert::That(isIcecreamSandwich("yyyyymmmmmmmmyyyyy"), Equals(true));
			Assert::That(isIcecreamSandwich("hhhhhhhhmhhhhhhhh"), Equals(true));
			Assert::That(isIcecreamSandwich("CDC"), Equals(true));
	}
	It(should_not_only_have_filling)
	{
			Assert::That(isIcecreamSandwich("BBBBB"), Equals(false));
	}
	It(should_have_balanced_ends)
	{
			Assert::That(isIcecreamSandwich("AAACCCAA"), Equals(false));
	}
	It(should_have_only_one_flavor)
	{
			Assert::That(isIcecreamSandwich("AACDCAA"), Equals(false));
	}
	It(must_have_two_ends)
	{
			Assert::That(isIcecreamSandwich("AAABB"), Equals(false));
			Assert::That(isIcecreamSandwich("AA"), Equals(false));
			Assert::That(isIcecreamSandwich("A"), Equals(false));
			Assert::That(isIcecreamSandwich(""), Equals(false));
	}
};

*/

void tasks::task3_49()
{
	std::cout << "Hello Task3_49!" << std::endl;
}

/* Task 3_50 - The Happy Function https://edabit.com/challenge/KAkXmQFM4vPxnKo7P

In this challenge, you have to implement an algorithm to establish if a given positive integer num is a Happy number, and how many steps of the algorithm are needed to establish it.

You have to repeatedly transform the given num into the sum of its squared digits:

If after the transformation the new number is equal to 1, num is a Happy number and the algorithm stops.
If after the transformation, the new number is not equal to 1, you have to transform it again.
Happy Numbers

If a number can't be reduced to 1, sooner or later the algorithm will enter into an infinitely repeating loop:

... 20, 4, 16, 37, 58, 89, 145, 42, 20, 4 ...
Given a positive integer num, implement a function that returns:

If num is a Happy number, the string "HAPPY x" with the "x" being the number of steps necessary to reduce num to 1.
If num is not a Happy number, the string "SAD x" with the "x" being the number of steps necessary to enter into the infinite loop reaching so any number in the series 4, 16, 37, 58, 89, 145, 42, 20, plus the number of steps necessary to obtain again that number.
Look at the examples below for a better visualization.

Examples
happyAlgorithm(139) ➞ "HAPPY 5"

// Step 1: Transform 139
// 1² + 3² + 9² = 1 + 9 + 81 = 91

// Step 2: Transform 91
// 9² + 1² = 81 + 1 = 82

// Step 3: Transform 82
// 8² + 2² = 64 + 4 = 68

// Step 4: Transform 68
// 6² + 8² = 36 + 64 = 100

// Step 5: Transform 100
// 1² + 0² + 0² = 1 + 0 + 0 = 1

// The algorithm stops at step 5: 139 is a Happy number

happyAlgorithm(67) ➞ "SAD 10"

// Step 1: Transform 67
// 6² + 7² = 36 + 49 = 85

// Step 2: Transform 85
// 8² + 5² = 64 + 25 = 89
// It entered into the infinite loop...
// ...but we have to demonstrate that is a loop!

// Step 3: Transform 89
// 8² + 9² = 64 + 81 = 145

// Step 4: Transform 145: result is 42
// Step 5: Transform 42: result is 20
// Step 6: Transform 20: result is 4
// Step 7: Transform 4: result is 16
// Step 8: Transform 16: result is 37
// Step 9: Transform 37: result is 58
// Step 10: Transform 58: result is 89

// 89 was the result of step 2: it's a loop
// The algorithm stops at step 10: 67 is not a Happy number

happyAlgorithm(1) ➞ "HAPPY 1"

// Step 1: Transform 1
// 1² = 1

// The algorithm stops at step 1: 1 is a Happy number

happyAlgorithm(89) ➞ "SAD 8"

// Step 1: Transform 89: result is 145
// Step 2: Transform 145: result is 42
// Step 3: Transform 42: result is 20
// Step 4: Transform 20: result is 4
// Step 5: Transform 4: result is 16
// Step 6: Transform 16: result is 37
// Step 7: Transform 37: result is 58
// Step 8: Transform 58: result is 89

// 89 was the original number: it's a loop
// The algorithm stops at step 8: 89 is not a Happy number
Notes
The transformation of a single-digit number is, trivially, the square of the digit (see example #3).
If the given number is 1, a step is needed to establish if it's Happy (see example #3).
To establish if a number is not happy, you have to find the number of steps necessary to obtain again a number already found (it can be a number obtained through a transformation as in example #2 or the same given number as in example #4).
You can expect only positive integers as input, without exceptions to handle.

std::string happyAlgorithm(int num) {

}

Describe(tests)
{
  It(test1){Assert::That(happyAlgorithm(139), Equals("HAPPY 5"));}
	It(test2){Assert::That(happyAlgorithm(67), Equals("SAD 10"));}
	It(test3){Assert::That(happyAlgorithm(1), Equals("HAPPY 1"));}
	It(test4){Assert::That(happyAlgorithm(44), Equals("HAPPY 4"));}
	It(test5){Assert::That(happyAlgorithm(89), Equals("SAD 8"));}
	It(test6){Assert::That(happyAlgorithm(10), Equals("HAPPY 1"));}
	It(test7){Assert::That(happyAlgorithm(1327), Equals("SAD 17"));}
	It(test8){Assert::That(happyAlgorithm(2871), Equals("SAD 17"));}
	It(test9){Assert::That(happyAlgorithm(3970), Equals("HAPPY 6"));}
	It(test10){Assert::That(happyAlgorithm(5209), Equals("SAD 11"));}
	It(test11){Assert::That(happyAlgorithm(6329), Equals("HAPPY 3"));}
	It(test12){Assert::That(happyAlgorithm(8888), Equals("SAD 12"));}
	It(test13){Assert::That(happyAlgorithm(9331), Equals("HAPPY 2"));}
	It(test14){Assert::That(happyAlgorithm(10000), Equals("HAPPY 1"));}
};

*/

void tasks::task3_50()
{
	std::cout << "Hello Task3_50!" << std::endl;
}
