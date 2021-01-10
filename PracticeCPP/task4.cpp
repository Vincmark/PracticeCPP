/*
https://edabit.com/challenges

Very Hard tasks

*/
#include <iostream>
#include "task4.h"

void tasks::task4()
{
	std::cout << "Hello Task4!" << std::endl;
}

/* Task 4_1 - printf Format Security

Tprintf is a standard C function that's a great way to easily print data to the console using format specifiers. That being said, it's common knowledge that you should NEVER give a user the ability to directly set the first parameter of a function that can take format specifiers.

To pass this challenge, you need to find out why users shouldn't be given full control of printf. A vulnerable function will take a string you provide and pass it to printf along with a value you need to modify.

Examples
// No examples! The fun is finding the exploit yourself!
Notes
A format specifier is a character set like %s or %f. Look for one that writes to memory.

std::string input = "";

bool vulnerability()
{
  bool vuln = false;
  if (input.size() == 0)
	return false;
  printf(input.c_str(), &vuln);
  return vuln > 0;
}

Describe(return_true)
{
  It(test1)
  {
	  Assert::That(vulnerability(), Equals(true));
  }
};

*/

void tasks::task4_1()
{
	std::cout << "Hello Task4_1!" << std::endl;
}

/* Task 4_2 - Word Nests (Part 2)

A word nest is created by taking a starting word, and generating a new string by placing the word inside itself. This process is then repeated.

Nesting 3 times with the word "incredible":

start  = incredible
first  = incre(incredible)dible
second = increin(incredible)credibledible
third  = increinincr(incredible)ediblecredibledible
The final nest is increinincrincredibleediblecredibledible (depth = 3)

Valid word nests can always be collapsed to show the starting word, by reversing the process above:

word = "incredible"
nest = "increinincrincredibleediblecredibledible"

Steps:
=> "increinincrincredibleediblecredibledible" // starting nest
=> "increinincr(incredible)ediblecredibledible" // find word in nest
=> "increinincr            ediblecredibledible" // remove word
=> "increinincrediblecredibledible" // join remaining halves
=> "increin(incredible)credibledible" // find word in nest...

... repeat steps until single word remains

=> "incredible" (return true as "incredible" = word)
When invalid word nests are collapsed, the starting word isn't found:

word = "spring"
nest = "sprspspspringringringg"

Steps:
=> "sprspspspringringringg" // starting nest
=> "sprspsp(spring)ringringg" // find word in nest
=> "sprspsp        ringringg" // remove word
=> "sprspspringringg" // join remaining halves
=> "sprsp(spring)ringg" // find word in nest...

... repeat steps until single word remains

=> "sprg" (return false as "sprig" != "spring")
Given a starting word and a final word nest, return true if the word nest is valid. Return false otherwise.

Examples
validWordNest("deep", "deep") ➞ true

validWordNest("novel", "nonnonovnovnovelelelvelovelvel") ➞ true

validWordNest("painter", "ppaintppapaipainterinternteraintererainter") ➞ false
// Doesn't show starting word after being collapsed.

validWordNest("shape", "sssshapeshapehahapehpeape") ➞ false
// Word placed outside, not inside itself.
Notes
Valid word nests can only be created by repeatedly placing the word inside itself, so at any point when collapsing the nest, there should only be one instance of the word to be found.

bool validWordNest(std::string word, std::string nest) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(validWordNest("redeem", "rederedredrredredrerrrederedeememedeemedeemedeeemeemmedeemeemeemem"), Equals(false));}
	It(test2){Assert::That(validWordNest("survey", "sursursurvsurvssurssursusurveyrveyveyurveyveyurveyeyeyveyvey"), Equals(true));}
	It(test3){Assert::That(validWordNest("sensation", "sensatissenssensastssenensensasenssensensensationsationsationationtionsationatioionantionensationon"), Equals(false));}
	It(test4){Assert::That(validWordNest("feed", "feefeeded"), Equals(false));}
	It(test5){Assert::That(validWordNest("station", "ststatstasstatistationontationtionionation"), Equals(true));}
	It(test6){Assert::That(validWordNest("quarrel", "quaquarrquarrelrerell"), Equals(false));}
	It(test7){Assert::That(validWordNest("broadcast", "broadcbroadcastbroadcastast"), Equals(false));}
	It(test8){Assert::That(validWordNest("diet", "diet"), Equals(true));}
	It(test9){Assert::That(validWordNest("park", "pppappappapapapapparkarkarkrkrkrkrkkarkrkrarkark"), Equals(false));}
	It(test10){Assert::That(validWordNest("undermine", "undermiundermundermiunununderundermineminederminedermineneinene"), Equals(true));}
	It(test11){Assert::That(validWordNest("nail", "nannnailnailailil"), Equals(false));}
	It(test12){Assert::That(validWordNest("show", "sshssshowhowhowowhow"), Equals(true));}
	It(test13){Assert::That(validWordNest("demand", "dedemdeamademademandndndmandnd"), Equals(false));}
	It(test14){Assert::That(validWordNest("publicity", "publicppublicityublicityity"), Equals(true));}
	It(test15){Assert::That(validWordNest("relief", "rrerelirerreerrereliefliefelielifliefliefefliefelfeief"), Equals(false));}
	It(test16){Assert::That(validWordNest("pipe", "ppppppipeipeipeipeipeipe"), Equals(true));}
	It(test17){Assert::That(validWordNest("diagram", "diargdiadidiadiagramgramagramgramam"), Equals(false));}
	It(test18){Assert::That(validWordNest("salt", "ssaltalt"), Equals(true));}
	It(test19){Assert::That(validWordNest("pioneer", "pionpippipioppionpiopipioneeroneerneereerioneerneeroneerioneeroneereer"), Equals(true));}
};

*/

void tasks::task4_2()
{
	std::cout << "Hello Task4_2!" << std::endl;
}

/* Task 4_3 - Number of Paths Between Points

This challenge deals with finding and counting the number of paths between points on a rectilinear grid. A starting point (x, y) with non-negative integer coordinates is provided. You are only allowed to move horizontally and vertically along the grid. Hence, from (x, y) you may move to (x+1, y), (x-1, y), (x, y+1), or (x, y-1). Your goal is to return to the origin (0, 0) in such a way that you never increase the distance to the origin. The distance is counted as the minimum number of total vertical and horizontal steps to reach the origin.

Create a function that reads a starting location, (x, y) and returns the total number of different paths back to the origin. Two paths are different if there is at least one step on the path that is different even if most of the steps are the same.

Examples
paths(0, 0) ➞ 1

paths(2, 1) ➞ 3

paths(2, 2) ➞ 6
Notes
This function can be easily written using recursion. It is STRONGLY recommended (though not necessary) that you use some form of recursion in your solution.
The return type for this function is a positive integer.
x and y will always be integers greater than or equal to 0.

int paths(int x, int y) {

}

Describe(tests)
{
  It(test1){Assert::That(paths(0, 0), Equals(1));}
	It(test2){Assert::That(paths(2, 1), Equals(3));}
	It(test3){Assert::That(paths(2, 2), Equals(6));}
	It(test4){Assert::That(paths(6, 9), Equals(5005));}
	It(test5){Assert::That(paths(0, 8), Equals(1));}
	It(test6){Assert::That(paths(7, 0), Equals(1));}
	It(test7){Assert::That(paths(1, 99), Equals(100));}
};

*/

void tasks::task4_3()
{
	std::cout << "Hello Task4_3!" << std::endl;
}

/* Task 4_4 - Truncatable Primes

A left-truncatable prime is a prime number that contains no 0 digits and, when the first digit is successively removed, the result is always prime.

A right-truncatable prime is a prime number that contains no 0 digits and, when the last digit is successively removed, the result is always prime.

Create a function that takes an integer as an argument and:

If the integer is only a left-truncatable prime, return "left".
If the integer is only a right-truncatable prime, return "right".
If the integer is both, return "both".
Otherwise, return "none".
Examples
truncatable(9137) ➞ "left"
// Because 9137, 137, 37 and 7 are all prime.

truncatable(5939) ➞ "right"
// Because 5939, 593, 59 and 5 are all prime.

truncatable(317) ➞ "both"
// Because 317, 17 and 7 are all prime and 317, 31 and 3 are all prime.

truncatable(5) ➞ "both"
// The trivial case of single-digit primes is treated as truncatable from both directions.

truncatable(139) ➞ "none"
// 1 and 9 are non-prime, so 139 cannot be truncatable from either direction.

truncatable(103) ➞ "none"
// Because it contains a 0 digit (even though 103 and 3 are primes).
Notes
The input integers will not exceed 10^6.

std::string truncatable(int num) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(truncatable(47), Equals("left"));}
	It(test2){Assert::That(truncatable(347), Equals("left"));}
	It(test3){Assert::That(truncatable(62383), Equals("left"));}
	It(test4){Assert::That(truncatable(79), Equals("right"));}
	It(test5){Assert::That(truncatable(7331), Equals("right"));}
	It(test6){Assert::That(truncatable(233993), Equals("right"));}
	It(test7){Assert::That(truncatable(3797), Equals("both"));}
	It(test8){Assert::That(truncatable(739397), Equals("both"));}
	It(test9){Assert::That(truncatable(349), Equals("none"));}
	It(test10){
		std::cout << "Single digit number treated as both." << std::endl;
		Assert::That(truncatable(5), Equals("both"));
	}
	It(test11){
		std::cout << "Starting number is composite." << std::endl;
		Assert::That(truncatable(2317), Equals("none"));
	}
	It(test12){
		std::cout << "One is not a prime." << std::endl;
		Assert::That(truncatable(131), Equals("none"));
	}
	It(test13){
		std::cout << "Cannot contain a 0 digit." << std::endl;
		Assert::That(truncatable(6043), Equals("none"));
	}
};

*/

void tasks::task4_4()
{
	std::cout << "Hello Task4_4!" << std::endl;
}

/* Task 4_5 - Same Letter Patterns

Create a function that returns true if two strings share the same letter pattern, and false otherwise.

Examples
sameLetterPattern("ABAB", "CDCD") ➞ true

sameLetterPattern("ABCBA", "BCDCB") ➞ true

sameLetterPattern("FFGG", "CDCD") ➞ false

sameLetterPattern("FFFF", "ABCD") ➞ false
Notes
N/A

bool sameLetterPattern(std::string str1, std::string str2) {

}

Describe(true_tests)
{
  It(test1){Assert::That(sameLetterPattern("ABAB", "CDCD"), Equals(true));}
	It(test2){Assert::That(sameLetterPattern("AAABBB", "CCCDDD"), Equals(true));}
	It(test3){Assert::That(sameLetterPattern("ABCBA", "BCDCB"), Equals(true));}
	It(test4){Assert::That(sameLetterPattern("AAAA", "BBBB"), Equals(true));}
	It(test5){Assert::That(sameLetterPattern("BAAB", "ABBA"), Equals(true));}
	It(test6){Assert::That(sameLetterPattern("BAAB", "QZZQ"), Equals(true));}
	It(test7){Assert::That(sameLetterPattern("TTZZVV", "PPSSBB"), Equals(true));}
	It(test8){Assert::That(sameLetterPattern("ZYX", "ABC"), Equals(true));}
	It(test9){Assert::That(sameLetterPattern("AABAA", "SSCSS"), Equals(true));}
	It(test10){Assert::That(sameLetterPattern("AABAABAA", "SSCSSCSS"), Equals(true));}
	It(test11){Assert::That(sameLetterPattern("UBUBUBUB", "WEWEWEWE"), Equals(true));}
};

Describe(false_tests)
{
  It(test1){Assert::That(sameLetterPattern("FFGG", "FFG"), Equals(false));}
	It(test2){Assert::That(sameLetterPattern("FFGG", "CDCD"), Equals(false));}
	It(test3){Assert::That(sameLetterPattern("FFFG", "GGHI"), Equals(false));}
	It(test4){Assert::That(sameLetterPattern("FFFF", "ABCD"), Equals(false));}
	It(test5){Assert::That(sameLetterPattern("ABCA", "ABCD"), Equals(false));}
	It(test6){Assert::That(sameLetterPattern("ABCAAA", "DDABCD"), Equals(false));}
};

*/

void tasks::task4_5()
{
	std::cout << "Hello Task4_5!" << std::endl;
}

/* Task 4_6 - Swap the Numbers

Imagine you have three numbers: a, b, and c. c is equal to either a or b, but you don't know which one. Your task is to create a function that returns whatever number c isn't, out of a and b. So, if c is equal to a, return b, and if c is equal to b, return a. Here's what makes this challenge difficult: you cannot use any if statements.

Examples
swap(1, 0, 0) ➞ 1
// a = 1, b = 0, c = b
// return a

swap(1, 3, 1) ➞ 3
// a = 1, b = 3, c = a
// return b

swap(27, 31, 31) ➞ 27
// a = 27, b = 31, c = b
// return a
Notes
To prevent cheating, you also can't call any functions.
c will always be equal to either a or b.
a will never equal b.
a, b, and c will always be integers.

int swap(int a, int b, int c){

}

Describe(swap_){
It(test1){Assert::That(swap(1, 0, 0), Equals(1));}
It(test2){Assert::That(swap(1, 3, 1), Equals(3));}
It(test3){Assert::That(swap(27, 31, 31), Equals(27));}
It(test4){Assert::That(swap(1, 2, 2), Equals(1));}
It(test5){Assert::That(swap(-3, 4, -3), Equals(4));}
It(test6){Assert::That(swap(-2, 1, 1), Equals(-2));}
It(test7){Assert::That(swap(0, 2, 2), Equals(0));}
It(test8){Assert::That(swap(9, -9, 9), Equals(-9));}
It(test9){Assert::That(swap(-3, -29, -3), Equals(-29));}
};

*/

void tasks::task4_6()
{
	std::cout << "Hello Task4_6!" << std::endl;
}

/* Task 4_7 - Split 25 (Part 1)

About a month ago I stumbled upon an interesting problem — something called the 25 split. In the problem, you had to break up 25 into parts, and, from those parts that add to it, try to create the biggest product.

For example, 3 * 22 = 66 or 5 * 5 * 5 * 5 * 5 = 3125. With this first part, return the value of the biggest product possible using natural number parts from a given number, x.

Examples
split(5) ➞ 6
// 3 times 2

split(10) ➞ 36
// 3 * 3 * 4

split(1) ➞ 1
Notes
3's are useful...

int split(int num) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(split(25), Equals(8748));}
	It(test2){Assert::That(split(1), Equals(1));}
	It(test3){Assert::That(split(10), Equals(36));}
	It(test4){Assert::That(split(5), Equals(6));}
	It(test5){Assert::That(split(15), Equals(243));}
	It(test6){Assert::That(split(20), Equals(1458));}
};

*/

void tasks::task4_7()
{
	std::cout << "Hello Task4_7!" << std::endl;
}

/* Task 4_8 - Caesar's Cipher

Julius Caesar protected his confidential information by encrypting it using a cipher. Caesar's cipher (check Resources tab for more info) shifts each letter by a number of letters. If the shift takes you past the end of the alphabet, just rotate back to the front of the alphabet. In the case of a rotation by 3, w, x, y and z would map to z, a, b and c.

Create a function that takes a string s (text to be encrypted) and an integer k (the rotation factor). It should return an encrypted string.

Examples
caesarCipher("middle-Outz", 2) ➞ "okffng-Qwvb"

// m -> o
// i -> k
// d -> f
// d -> f
// l -> n
// e -> g
// -    -
// O -> Q
// u -> w
// t -> v
// z -> b

caesarCipher("Always-Look-on-the-Bright-Side-of-Life", 5)
➞ "Fqbfdx-Qttp-ts-ymj-Gwnlmy-Xnij-tk-Qnkj"

caesarCipher("A friend in need is a friend indeed", 20)
➞ "U zlcyhx ch hyyx cm u zlcyhx chxyyx"
Notes
All test input will be a valid ASCII string.

std::string caesarCipher(std::string s, int k) {

}

Describe(tests)
{
  It(test1){Assert::That(caesarCipher("middle-Outz", 2), Equals("okffng-Qwvb"));}
	It(test2){Assert::That(caesarCipher("Always-Look-on-the-Bright-Side-of-Life", 5), Equals("Fqbfdx-Qttp-ts-ymj-Gwnlmy-Xnij-tk-Qnkj"));}
	It(test3){Assert::That(caesarCipher("A friend in need is a friend indeed", 20), Equals("U zlcyhx ch hyyx cm u zlcyhx chxyyx"));}
	It(test4){Assert::That(caesarCipher("A Fool and His Money Are Soon Parted.", 27), Equals("B Gppm boe Ijt Npofz Bsf Tppo Qbsufe."));}
	It(test5){Assert::That(caesarCipher("One should not worry over things that have already happened and that cannot be changed.", 49), Equals("Lkb pelria klq tloov lsbo qefkdp qexq exsb xiobxav exmmbkba xka qexq zxkklq yb zexkdba."));}
	It(test6){Assert::That(caesarCipher("Back to Square One is a popular saying that means a person has to start over, similar to: back to the drawing board.", 126), Equals("Xwyg pk Omqwna Kja eo w lklqhwn owuejc pdwp iawjo w lanokj dwo pk opwnp kran, oeiehwn pk: xwyg pk pda znwsejc xkwnz."));}
};

*/

void tasks::task4_8()
{
	std::cout << "Hello Task4_8!" << std::endl;
}

/* Task 4_9 - N-bonacci Numbers

N-bonacci numbers are generalisations of the fibonacci sequence, where the next term is always the sum of the previous N terms. By convention, the first (N-1) terms are all 0 and the Nth term is 1.

The initial 10 terms of the first 5 N-bonacci sequences are therefore:

1-bonacci = 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, ...
2-bonacci = 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
3-bonacci = 0, 0, 1, 1, 2, 4, 7, 13, 24, 44, ...
4-bonaaci = 0, 0, 0, 1, 1, 2, 4, 8, 15, 29, ...
5-bonacci = 0, 0, 0, 0, 1, 1, 2, 4, 8, 16, ...
Write a function that returns the kth term of the N-bonacci sequence, for two integer arguments N and k.

Examples
bonacci(1, 10) ➞ 1

bonacci(2, 10) ➞ 34

bonacci(3, 10) ➞ 44

bonacci(4, 10) ➞ 29

bonacci(5, 10) ➞ 16
Notes
N/A

long long int bonacci(int N, int k) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(bonacci(2, 7), Equals(8));}
	It(test2){Assert::That(bonacci(3, 13), Equals(274));}
	It(test3){Assert::That(bonacci(5, 24), Equals(203513));}
	It(test4){Assert::That(bonacci(8, 44), Equals(32440904961));}
	It(test5){Assert::That(bonacci(1, 4), Equals(1));}
	It(test6){Assert::That(bonacci(2, 2), Equals(1));}
	It(test7){Assert::That(bonacci(3, 1), Equals(0));}
};

*/

void tasks::task4_9()
{
	std::cout << "Hello Task4_9!" << std::endl;
}

/* Task 4_10 - Bracket Logic

Brackets and parentheses in mathematical expressions have to conform to certain logical rules. Every opening bracket must have a closing mate somewhere further down the line. Although brackets can be nested, different types cannot overlap:

([<x+y>+3]-1) makes sense because each set of brackets contains or is contained by another set.
([<x+y>+3)-1] makes no sense because the parentheses and the square brackets overlap.
Given a string expression that can contain four types of brackets: () <> [] {}, create a function that returns true if the bracket logic is valid and false if it is not.

Examples
bracketLogic("[<>()]") ➞ true

bracketLogic("[<(>)]") ➞ false

bracketLogic("[(a*b+<7-c>+9]") ➞ false
// Opening parenthesis has no mate.

bracketLogic("[{(h*i+3)-12]/4*x+2}") ➞ false
// Square and curly brackets overlap.

bracketLogic("[ab(c/d<e-f+(7*6)>)+2]") ➞ true
Notes
Any characters other than the brackets can be ignored.

bool bracketLogic(std::string xp) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(bracketLogic("{b}{y}{ }[x][{{(t)-}{}](t<w(^)>)-b}<[g](x{u[ ]})y>"), Equals(false));}
	It(test2){Assert::That(bracketLogic("{f}[t[[]]<[+](w)t>u(h)(%){f}[d{e}]{c(/)}<w>][v]"), Equals(true));}
	It(test3){Assert::That(bracketLogic("[(t)d]</{h}><<a <( )e>[*]{e{e}}<w{x[^]}>>"), Equals(false));}
	It(test4){Assert::That(bracketLogic("{g}((-) ^>b)[^]{{*<->}(w)(u)(%)}({/}c)(%)[g{b}]<z({<< >w>c}d)[b]>"), Equals(false));}
	It(test5){Assert::That(bracketLogic("(y)(c)(){[[ ]z] [{+}z[*]]{+}}([d]<y<e>>c)[b][b]"), Equals(true));}
	It(test6){Assert::That(bracketLogic("((^(b))e>(<d<w>>(({a}/(g)){t</)}b(d)){[v]u})"), Equals(false));}
	It(test7){Assert::That(bracketLogic("{([%]</>u)<{<y{v}>{<c>h}{y}f}[y]{<*>e}[^]v><[h]d>}[d]"), Equals(true));}
	It(test8){Assert::That(bracketLogic("{a}{<(^)(b)%>[z]<->e}[{z}%]{<^>g}<[h] ({ }y[*]<v>)>{x[+]<^>}<v>[]"), Equals(true));}
};

*/

void tasks::task4_10()
{
	std::cout << "Hello Task4_10!" << std::endl;
}

/* Task 4_11 - Longest Alternating Substring

Given a string of digits, return the longest substring with alternating odd/even or even/odd digits. If two or more substrings have the same length, return the substring that occurs first.

Examples
longestSubstring("225424272163254474441338664823") ➞ "272163254"
// substrings = 254, 272163254, 474, 41, 38, 23

longestSubstring("594127169973391692147228678476") ➞ "16921472"
// substrings = 94127, 169, 16921472, 678, 476

longestSubstring("721449827599186159274227324466") ➞ "7214"
// substrings = 7214, 498, 27, 18, 61, 9274, 27, 32
// 7214 and 9274 have same length, but 7214 occurs first.
Notes
The minimum alternating substring size is 2.

std::string longestSubstring(std::string digits) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(longestSubstring("844929328912985315632725682153"), Equals("56327256"));}
	It(test2){Assert::That(longestSubstring("769697538272129475593767931733"), Equals("27212947"));}
	It(test3){Assert::That(longestSubstring("937948289456111258444958189244"), Equals("894561"));}
	It(test4){Assert::That(longestSubstring("736237766362158694825822899262"), Equals("636"));}
	It(test5){Assert::That(longestSubstring("369715978955362655737322836233"), Equals("369"));}
	It(test6){Assert::That(longestSubstring("345724969853525333273796592356"), Equals("496985"));}
	It(test7){Assert::That(longestSubstring("548915548581127334254139969136"), Equals("8581"));}
	It(test8){Assert::That(longestSubstring("417922164857852157775176959188"), Equals("78521"));}
	It(test9){Assert::That(longestSubstring("251346385699223913113161144327"), Equals("638569"));}
	It(test10){Assert::That(longestSubstring("483563951878576456268539849244"), Equals("18785"));}
	It(test11){Assert::That(longestSubstring("853667717122615664748443484823"), Equals("474"));}
	It(test12){Assert::That(longestSubstring("398785511683322662883368457392"), Equals("98785"));}
	It(test13){Assert::That(longestSubstring("368293545763611759335443678239"), Equals("76361"));}
	It(test14){Assert::That(longestSubstring("775195358448494712934755311372"), Equals("4947"));}
	It(test15){Assert::That(longestSubstring("646113733929969155976523363762"), Equals("76523"));}
	It(test16){Assert::That(longestSubstring("575337321726324966478369152265"), Equals("478369"));}
	It(test17){Assert::That(longestSubstring("754388489999793138912431545258"), Equals("545258"));}
	It(test18){Assert::That(longestSubstring("198644286258141856918653955964"), Equals("2581418569"));}
	It(test19){Assert::That(longestSubstring("643349187319779695864213682274"), Equals("349"));}
	It(test20){Assert::That(longestSubstring("919331281193713636178478295857"), Equals("36361"));}
};

*/

void tasks::task4_11()
{
	std::cout << "Hello Task4_11!" << std::endl;
}

/* Task 4_12 - Interprime Numbers

An interprime number is a composite number which is equidistant from two consecutive primes. For example, the interprime 6 is 1 point after 5, a prime, and 1 point before the next prime, 7. Another interprime is 93, which lies midway between primes 89 and 97.

Create a function that takes a number n as input. If n is an interprime number, return an array containing the two consecutive primes between which it lies. If it isn't, return an empty array.

Examples
interprime(6) ➞ [5, 7]

interprime(9) ➞ [7, 11]

interprime(8) ➞ []
Notes
Interprimes cannot be prime themselves (otherwise the primes would not have been consecutive).

std::vector<int> interprime(int n) {

}

Describe(interprime_){
It(test1){Assert::That(interprime(6), Equals(std::vector<int>{5, 7}));}
It(test2){Assert::That(interprime(9), Equals(std::vector<int>{7, 11}));}
It(test3){Assert::That(interprime(473), Equals(std::vector<int>{467, 479}));}
It(test4){Assert::That(interprime(373), Equals(std::vector<int>{}));}
It(test5){Assert::That(interprime(756), Equals(std::vector<int>{}));}
It(test6){Assert::That(interprime(413), Equals(std::vector<int>{}));}
It(test7){Assert::That(interprime(924), Equals(std::vector<int>{919, 929}));}
};

*/

void tasks::task4_12()
{
	std::cout << "Hello Task4_12!" << std::endl;
}

/* Task 4_13 - 2048 Tiles Slide

2048 is a game where you need to slide numbered tiles (natural powers of 2) up, down, left or right on a square grid to combine them in a tile with the number 2048.

The sliding procedure is described by the following rules:

Tiles slide as far as possible in the chosen direction until they are stopped by either another tile or the edge of the grid.
If two tiles of the same number collide while moving, they will merge into a tile with the total value of the two tiles that collided.
If more than one variant of merging is possible, move direction shows one that will take effect.
Tile cannot merge with another tile more than one time.
Sliding is done almost the same for each direction and for each row/column of the grid, so your task is to implement only the left slide for a single row.

Examples
leftSlide({2, 2, 2, 0}) ➞ {4, 2, 0, 0}
// Merge left-most tiles first

leftSlide({2, 2, 4, 4, 8, 8}) ➞ {4, 8, 16, 0, 0, 0}
// Only merge once

leftSlide({0, 2, 0, 2, 4}) ➞ {4, 4, 0, 0, 0}

leftSlide({0, 2, 2, 8, 8, 8}) ➞ {4, 16, 8, 0, 0, 0}
Notes
Input row can be of any size (empty too).
Input row will contain only natural powers of 2 and 0 for empty tiles.
Keep trailing zeros in the output.

std::vector<int> leftSlide(std::vector<int> row) {

}

Describe(tests)
{
	It(test1){Assert::That(leftSlide({2, 2, 2, 0}), Equals(std::vector<int>{4, 2, 0, 0}));}
	It(test2){Assert::That(leftSlide({2, 2, 4, 4, 8, 8}), Equals(std::vector<int>{4, 8, 16, 0, 0, 0}));}
	It(test3){Assert::That(leftSlide({0, 2, 0, 2, 4}), Equals(std::vector<int>{4, 4, 0, 0, 0}));}
	It(test4){Assert::That(leftSlide({0, 2, 2, 8, 8, 8}), Equals(std::vector<int>{4, 16, 8, 0, 0, 0}));}
	It(test5){Assert::That(leftSlide({}), Equals(std::vector<int>{}));}
	It(test6){Assert::That(leftSlide({0, 0, 0, 0}), Equals(std::vector<int>{0, 0, 0, 0}));}
	It(test7){Assert::That(leftSlide({0, 0, 0, 2}), Equals(std::vector<int>{2, 0, 0, 0}));}
	It(test8){Assert::That(leftSlide({2, 0, 0, 0}), Equals(std::vector<int>{2, 0, 0, 0}));}
	It(test9){Assert::That(leftSlide({8, 2, 2, 4}), Equals(std::vector<int>{8, 4, 4, 0}));}
	It(test10){Assert::That(leftSlide({2, 4, 2, 4}), Equals(std::vector<int>{2, 4, 2, 4}));}
	It(test11){Assert::That(leftSlide({1024, 1024, 1024, 512, 512, 256, 256, 128, 128, 64, 32, 32}), Equals(std::vector<int>{2048, 1024, 1024, 512, 256, 64, 64, 0, 0, 0, 0, 0}));}
};

*/

void tasks::task4_13()
{
	std::cout << "Hello Task4_13!" << std::endl;
}

/* Task 4_14 - Mind the Gap

A number is gapful if it is at least 3 digits long and is divisible by the number formed by stringing the first and last numbers together. The smallest number that fits this description is 100. First digit is 1, last digit is 0, forming 10, which is a factor of 100. Therefore, 100 is gapful.

Create a function that takes a number n and returns the closest gapful number (including itself). If there are 2 gapful numbers that are equidistant to n, return the lower one.

Examples
gapful(25) ➞ 100

gapful(100) ➞ 100

gapful(103) ➞ 105
Notes
N/A

int gapful(int n) {

}

Describe(tests)
{
  It(test1){Assert::That(gapful(25), Equals(100));}
	It(test2){Assert::That(gapful(100), Equals(100));}
	It(test3){Assert::That(gapful(103), Equals(105));}
	It(test4){Assert::That(gapful(1442), Equals(1441));}
	It(test5){Assert::That(gapful(3345), Equals(3333));}
	It(test6){Assert::That(gapful(4780), Equals(4773));}
	It(test7){Assert::That(gapful(3078), Equals(3078));}
};

*/

void tasks::task4_14()
{
	std::cout << "Hello Task4_14!" << std::endl;
}

/* Task 4_15 - The Centrifuge Problem https://edabit.com/challenge/9CY4oowuNA4bGZHjm

A centrifuge, as you probably know, is a laboratory device used to separate fluids based on density. The separation is achieved through centripetal force by spinning a collection of test tubes at high speeds. This means, the configuration needs to be in balance.

Create a function that takes two numbers as arguments n and k and returns true if the configuration is balanced and false if it's not. To check out the formula, look at the resources tab.

The Centrifuge Problem with 6 Holes, n=6

Here are the valid configurations for n = 6, k = 2, 3, 4 and 6.

Examples
cFuge(6, 4) ➞ true

cFuge(2, 1) ➞ false

cFuge(3, 3) ➞ true
Notes
One test tube k = 1 is never in balance.
One hole n = 1 is never in balance, even empty.

bool cFuge(int n, int k) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(cFuge(6, 4), Equals(true));}
	It(test2){Assert::That(cFuge(5, 1), Equals(false));}
	It(test3){Assert::That(cFuge(12, 7), Equals(true));}
	It(test4){Assert::That(cFuge(1, 1), Equals(false));}
	It(test5){Assert::That(cFuge(21, 18), Equals(true));}
	It(test6){Assert::That(cFuge(1, 0), Equals(false));}
	It(test7){Assert::That(cFuge(4, 2), Equals(true));}
	It(test8){Assert::That(cFuge(5, 3), Equals(false));}
	It(test9){Assert::That(cFuge(21, 13), Equals(false));}
	It(test10){Assert::That(cFuge(3, 3), Equals(true));}
	It(test11){Assert::That(cFuge(50, 1), Equals(false));}
	It(test12){Assert::That(cFuge(8, 6), Equals(true));}
	It(test13){Assert::That(cFuge(9, 5), Equals(false));}
	It(test14){Assert::That(cFuge(2, 1), Equals(false));}
	It(test15){Assert::That(cFuge(59, 59), Equals(true));}
	It(test16){Assert::That(cFuge(11, 4), Equals(false));}
};

*/

void tasks::task4_15()
{
	std::cout << "Hello Task4_15!" << std::endl;
}

/* Task 4_16 - Ulam Sequence

The Ulam sequence starts with:

ulam = [1, 2]
The next number in the sequence is the smallest positive number that is equal to the sum of 2 distinct numbers (that are already in the sequence) exactly one way. Trivially, this is 3, as there are only 2 numbers in the starting sequence.

ulam = [1, 2, 3]
The next number is 4, which is the sum of 3+1. 4 is also 2+2, but this equation does not count, as the 2 addends have to be distinct.

ulam = [1, 2, 3, 4]
The next number cannot be 5, as 5 = 1 + 4, but also 5 = 2 + 3. There should only be one way to make an Ulam number from 2 distinct addends found in the sequence. The next number is 6 (2+4). There are 2 ways to make 7 (1+6 or 3+4), so the next is 8 (2+6). And so on.

ulam = [1, 2, 3, 4, 6, 8, 11, 13, 16, 18, 26, 28, 36, 38, 47, 48, 53, …]
Create a function that takes a number n and returns the nth number in the Ulam sequence.

Examples
ulam(4) ➞ 4

ulam(9) ➞ 16

ulam(206) ➞ 1856
Notes
N/A

int ulam(int n) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(ulam(4), Equals(4));}
	It(test2){Assert::That(ulam(9), Equals(16));}
	It(test3){Assert::That(ulam(38), Equals(180));}
	It(test4){Assert::That(ulam(99), Equals(688));}
	It(test5){Assert::That(ulam(206), Equals(1856));}
	It(test6){Assert::That(ulam(495), Equals(5597));}
	It(test7){Assert::That(ulam(577), Equals(6782));}
};

*/

void tasks::task4_16()
{
	std::cout << "Hello Task4_16!" << std::endl;
}

/* Task 4_17 - Tic Tac Toe

Create a function that takes an array of char inputs from a Tic Tac Toe game. Inputs will be taken from player1 as "X", player2 as "O", and empty spaces as "#". The program will return the winner or tie results.

Examples
ticTacToe([
  ["X", "O", "O"],
  ["O", "X", "O"],
  ["O", "#", "X"]
]) ➞ "Player 1 wins"

ticTacToe([
  ["X", "O", "O"],
  ["O", "X", "O"],
  ["X", "#", "O"]
]) ➞ "Player 2 wins"

ticTacToe([
  ["X", "X", "O"],
  ["O", "X", "O"],
  ["X", "O", "#"]
]) ➞ "It's a Tie"
Notes
See Resources for more information.

using namespace std;
string ticTacToe(vector<vector<char>> inputs) {

}

Describe(Tic_tac_toe) {
	It(T1){Assert::That(ticTacToe({
  {'X', 'O', 'O'},
  {'O', 'X', 'O'},
  {'O', '#', 'X'}
})
, Equals ("Player 1 wins"));}
  It(T2){Assert::That(ticTacToe({
  {'X', 'O', 'O'},
  {'O', 'X', 'O'},
  {'O', '#', 'O'}
})
, Equals ("Player 2 wins"));}

  It(T3){Assert::That(ticTacToe({
  {'X', 'O', 'O'},
  {'O', 'X', 'O'},
  {'O', 'O', '#'}
})
, Equals ("It's a Tie"));}

  It(T4){Assert::That(ticTacToe({
  {'X', 'O', 'O'},
  {'X', 'X', 'O'},
  {'X', 'O', '#'}
})
, Equals ("Player 1 wins"));}

It(T5){Assert::That(ticTacToe({
  {'X', '#', 'O'},
  {'X', 'X', 'O'},
  {'#', 'O', '#'}
})
, Equals ("It's a Tie"));}

It(T6){Assert::That(ticTacToe({
  {'X', 'X', 'X'},
  {'X', 'O', 'O'},
  {'O', 'O', 'X'}
})
, Equals ("Player 1 wins"));}

  It(T7){Assert::That(ticTacToe({
  {'X', 'O', 'O'},
  {'X', 'O', 'O'},
  {'O', 'X', 'X'}
})
, Equals ("Player 2 wins"));}
 It(T8){Assert::That(ticTacToe({
  {'X', 'O', 'O'},
  {'X', 'O', 'O'},
  {'#', 'X', 'X'}
})
, Equals ("It's a Tie"));}
It(T9){Assert::That(ticTacToe({
  {'X', 'O', 'O'},
  {'O', 'O', 'O'},
  {'#', 'X', 'X'}
})
, Equals ("Player 2 wins"));}};

*/

void tasks::task4_17()
{
	std::cout << "Hello Task4_17!" << std::endl;
}

/* Task 4_18 - Add Two String Numbers

Write a function that adds two numbers. The catch, however, is that the numbers will be strings.

Examples
addStrNums("4", "5") ➞ "9"

addStrNums("abcdefg", "3") ➞ "-1"

addStrNums("1", "") ➞ "1"

addStrNums("1874682736267235927359283579235789257", "32652983572985729") ➞ "1874682736267235927391936562808774986"
Notes
If there are any non-numerical characters, return "-1".
An empty parameter should be treated as "0".
Your function should be able to add any size number.
Your function doesn't have to add negative numbers.
Zeros at the beginning of the string should be trimmed.

std::string addStrNums(std::string num1, std::string num2) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(addStrNums("", ""), Equals("0"));}
	It(test2){Assert::That(addStrNums("1", "01"), Equals("2"));}
	It(test3){Assert::That(addStrNums("1",""), Equals("1"));}
	It(test4){Assert::That(addStrNums("198547982570192857109283570192837509218375091283750192835710298357019237509125710925710923759012375901275901285701925712035712983571092562945875310962518235712385971230956127856123571209358712905610923587102395716258125612095710298","510298570192857910827519027510982561875691857120958371029586187585198273501982573091857091875901875809175091659812750918275091875091857918265901265918659816591750981750981759817598175089175891720570129571098758901750917501975"), Equals("198548492868763049967194397711865020200936966975607313794081327943206822707399212908284015616104251803151710460793585524786631258662967654803793576863784154372202562981937878837883388807533802081502644157231966815017027363013212273"));}
	It(test5){Assert::That(addStrNums("0000001", "020006"), Equals("20007"));}
	It(test6){Assert::That(addStrNums("1325123515s238579875987", "38698592523525325"), Equals("-1"));}
	It(test7){Assert::That(addStrNums("123456788654323456543456765432345678843234567150666666666666612735980127350918265309182653091635916258165871265087126121827562875835613875612875360182653127560192756012975608172560817653081760126578132617265192561923051397585261519826512951827401928470192864312873561298357120985710927561287356129857120851235612835712935612385971230598612035912635189273651289357120983571298035612836518237481235098172350891623508912375981206598127539128035619286350912836509123856710298560918236590138257013257219857182935681923569032656109851629851605109283560192863598126359125710982375918237598125091256012893570128357128935609128350192873501928365019283750129837401928374019283740189237401298374019823740912365012381075109823650912837501923561023650123659812375091862350912735", "1023570192835719836509165309156091653091875309312365123569182365123051235710298365109236501928365019283650291836501928365091256109823560921865091263509126509126350921568091265309128653091263590165309160912653809126510560165016501650650165016835610285172356137845623745623592835692836592837569283756832795693827564"), Equals("123456788654323456543456765432345678843234567150666666666666612735980127350918265309182653091635916258165871265087126121827562875835613875612875360182653127560192756012975608172560817653081760126578132617265192561923051397585261519826512951827401928470192864312873561298357120985710927561287356129857120851235612835712935612385971230598612035912635189273651289357120983571298035612836518237481235098172350891623508912375981206598127539128035619286350913860079316692430135070083545746229910105132529169548059251105934155707345561928216714345785488557882881776650962212910741009493707948652177877984833637483638061960049918284138811057018110547340295146562841027828410250749402417800024669988757747975297553431247669274658461094759253860242961229096131924658044740299"));}
};

*/

void tasks::task4_18()
{
	std::cout << "Hello Task4_18!" << std::endl;
}

/* Task 4_19 - Look-and-Say Sequence

Create a function that takes in two positive integers start and n and returns a list of the first n terms of the look-and-say sequence starting at the given start.

Each term of the look-and-say sequence (except for the first term) is created from the previous term using the following process.

Start with a term in the sequence (for example, 111312211):

111312211
Split it into subsequences of consecutive repeating digits:

111 3 1 22 11
Count the number of digits in each subsequence:

three 1, one 3, one 1, two 2, two 1
Turn everything into digits:

3 1, 1 3, 1 1, 2 2, 2 1
Now combine everything into one number:

3113112221
So 3113112221 is the next term in the sequence after 111312211.

Examples
lookAndSay(1, 7) ➞ {1, 11, 21, 1211, 111221, 312211, 13112221}

lookAndSay(123, 4) ➞ {123, 111213, 31121113, 1321123113}

lookAndSay(70, 5) ➞ {70, 1710, 11171110, 31173110, 132117132110
Notes
Your output should be an array of integers in the correct sequence..

std::vector<long> lookAndSay(long start, int n) {

}

Describe(LookAnd_Say) {
	It(T1){Assert::That(lookAndSay(1, 7), Equals(std::vector<long> { 1, 11, 21, 1211, 111221, 312211, 13112221 }));}
	It(T2){Assert::That(lookAndSay(123, 4), Equals(std::vector<long> { 123, 111213, 31121113, 1321123113 }));}
	It(T3){Assert::That(lookAndSay(70, 5), Equals(std::vector<long> { 70, 1710, 11171110, 31173110, 132117132110 }));}
	It(T4){Assert::That(lookAndSay(111312211, 2), Equals(std::vector<long> { 111312211, 3113112221 }));}
	It(T5){Assert::That(lookAndSay(2, 8), Equals(std::vector<long> { 2, 12, 1112, 3112, 132112, 1113122112, 311311222112, 13211321322112 }));}
	It(T6){Assert::That(lookAndSay(144, 4), Equals(std::vector<long> { 144, 1124, 211214, 1221121114 }));}
	It(T7){Assert::That(lookAndSay(11111111, 3), Equals(std::vector<long> { 11111111, 81, 1811 }));}
	It(T8){Assert::That(lookAndSay(0, 4), Equals(std::vector<long> { 0, 10, 1110, 3110 }));}
};
*/

void tasks::task4_19()
{
	std::cout << "Hello Task4_19!" << std::endl;
}

/* Task 4_20 - Langton's Ant https://edabit.com/challenge/rKXvJduGjLjbC9QBZ

Langton's ant is a two-dimensional Turing machine invented in the late 1980s. The ant starts out on a grid of black and white cells and follows a simple set of rules that has complex emergent behavior.

Langton's ant

The ant can travel in any of the four cardinal directions on each step. The ant moves according to the following rules:

At a white square (1), turn 90° right, flip the color of the square, and move forward one unit.
At a black square (0), turn 90° left, flip the color of the square, and move forward one unit.
The grid has no limits and therefore if the ant moves outside the borders, the grid should be expanded with 0s, respectively maintaining the rectangle shape.
Create a function Langton's Ant with the following parameters:

grid - a two-dimensional array of 1s and 0s
// representing white and black cells respectively

column - horizontal position of the ant

row - ant's vertical position

n - number of iterations

direction - ant's current direction
// 0 - north, 1 - east, 2 - south, 3 - west
// default value will be 0
... and returns the state of the grid after n iterations.

Examples
langtons_ant([[1]], 0, 0, 1, 0) ➞ [[0, 0]]
// Initially facing north (0), at the first iteration the ant turns
// right because it stands on a white square, 1. After that, it flips
// the square and moves forward.

langtons_ant([[0]], 0, 0, 1, 0) ➞ [[0, 1]]

langtons_ant([[0, 0, 0], [0, 0, 0], [0, 0, 0]], 2, 2, 10, 1) ➞ [[0, 0, 0, 0], [0, 1, 1, 0], [0, 1, 1, 1], [0, 0, 0, 1]]
Notes
N/A

std::vector<std::vector<int>>
langtonsAnt(std::vector<std::vector<int>> grid, int column, int row, int n, int direction=0) {

}

Describe(langtonsAnt_)
{
It(test1){Assert::That(langtonsAnt({{1}}, 0, 0, 1, 0), Equals(std::vector<std::vector<int>> {{0,0}}));}
It(test2){Assert::That(langtonsAnt({{0}}, 0, 0, 1, 0), Equals(std::vector<std::vector<int>> {{0,1}}));}
It(test3){Assert::That(langtonsAnt({{1}}, 0, 0, 3, 0), Equals(std::vector<std::vector<int>> {{0,1},{0,1}}));}
It(test4){Assert::That(langtonsAnt({{1}}, 0, 0, 1), Equals(std::vector<std::vector<int>> {{0,0}}));}
It(test5){Assert::That(langtonsAnt({{0,0,0},{0,0,0},{0,0,0}}, 2, 2, 10, 1), Equals(std::vector<std::vector<int>>
{{0,0,0,0},
 {0,1,1,0},
 {0,1,1,1},
 {0,0,0,1}}));}

It(test6){Assert::That(langtonsAnt({{0,0,0},{0,0,0},{0,0,0}}, 1, 1, 20, 2), Equals(std::vector<std::vector<int>>
{{0,0,0,0},
 {0,1,0,1},
 {1,0,0,1},
 {0,1,1,0}}));}

It(test7){Assert::That(langtonsAnt({{0,0,0},{0,0,0},{0,0,0}}, 0, 0, 30, 0), Equals(std::vector<std::vector<int>>
{{0,1,1,0,0},
 {1,0,0,1,0},
 {1,0,1,1,1},
 {0,0,0,1,1},
 {0,0,1,1,0}}));}
};

*/

void tasks::task4_20()
{
	std::cout << "Hello Task4_20!" << std::endl;
}

/* Task 4_21 - Longest Consecutive Run

A consecutive-run is a list of adjacent, consecutive integers. This list can be either increasing or decreasing. Create a function that takes an array of numbers and returns the length of the longest consecutive-run.

To illustrate:

longestRun([1, 2, 3, 5, 6, 7, 8, 9]) ➞ 5
// Two consecutive runs: [1, 2, 3] and [5, 6, 7, 8, 9] (longest).
Examples
longestRun([1, 2, 3, 10, 11, 15]) ➞ 3
// Longest consecutive-run: [1, 2, 3].

longestRun([5, 4, 2, 1]) ➞ 2
// Longest consecutive-run: [5, 4] and [2, 1].

longestRun([3, 5, 7, 10, 15]) ➞ 1
// No consecutive runs, so we return 1.
Notes
If there aren't any consecutive runs (there is a gap between each integer), return 1.

int longestRun(std::vector<int> arr) {

}

Describe(longestRun_) {
	It(test1){Assert::That(longestRun({1, 2, 3, 5, 6, 7, 8, 9}), Equals(5));}
	It(test2){Assert::That(longestRun({1, 2, 3, 10, 11, 15}), Equals(3));}
	It(test3){Assert::That(longestRun({-7, -6, -5, -4, -3, -2, -1}), Equals(7));}
	It(test4){Assert::That(longestRun({3, 5, 6, 10, 15}), Equals(2));}
	It(test5){Assert::That(longestRun({3, 5, 7, 10, 15}), Equals(1));}
	It(test6){Assert::That(longestRun({5, 4, 3, 2, 1}), Equals(5));}
	It(test7){Assert::That(longestRun({5, 4, 2, 1}), Equals(2));}
	It(test8){Assert::That(longestRun({10, 9, 0, 5}), Equals(2));}
	It(test9){Assert::That(longestRun({1, 2, 3, 2, 1}), Equals(3));}
	It(test10){Assert::That(longestRun({10, 9, 8, 7, 6, 2, 1}), Equals(5));}
};

*/

void tasks::task4_21()
{
	std::cout << "Hello Task4_21!" << std::endl;
}

/* Task 4_22 - Chocolates Parcel

Mubashir needs to assemble a parcel of ordered chocolates. He got two types of chocolates:

Small chocolates (2 grams each)
Big chocolates (5 grams each)
Create a function that takes three parameters: Number of small available chocolates nSmall, number of big chocolates available nBig and desired weight (in grams) of the final parcel order.

The function should return the required number of small chocolates to achieve the goal. The function should return -1 if the goal cannot be achieved by any possible combinations of small and big chocolates.

Examples
chocolatesParcel(4, 1, 13) ➞ 4
// 4 small chocolates = 8 grams
// 1 big chocolate = 5 grams
// 8 + 5 = 13 grams
// Required number of small chocolates = 4

chocolatesParcel(4, 1, 14) ➞ -1
// You can not make any combination to reach 14 grams.

chocolatesParcel(2, 1, 7) ➞ 1
// 1 big chocolate = 5 grams
// 1 small chocolates = 2 grams
// 5 + 2 = 7 grams
// Required number of small chocolates = 1
Notes
Maximize the use of big chocolates that are available to achieve the desired goal. And only then should you proceed to use the small chocolates.
You can't break chocolates into small pieces.

int chocolatesParcel(int nSmall, int nBig, int order) {

}


Describe(chocolatesParcel_) {
	It(test1){Assert::That(chocolatesParcel(0, 1, 5), Equals(0));}
	It(test2){Assert::That(chocolatesParcel(3, 1, 6), Equals(3));}
	It(test3){Assert::That(chocolatesParcel(3, 0, 7), Equals(-1));}
	It(test4){Assert::That(chocolatesParcel(2, 1, 9), Equals(2));}
	It(test5){Assert::That(chocolatesParcel(58, 156, 283), Equals(4));}
	It(test6){Assert::That(chocolatesParcel(3, 1000, 5012), Equals(-1));}
	It(test7){Assert::That(chocolatesParcel(1, 1, 1), Equals(-1));}
	It(test8){Assert::That(chocolatesParcel(1, 1, 8), Equals(-1));}
	It(test9){Assert::That(chocolatesParcel(4, 1, 12), Equals(-1));}
	It(test10){Assert::That(chocolatesParcel(10, 400, 2004), Equals(2));}
};

*/

void tasks::task4_22()
{
	std::cout << "Hello Task4_22!" << std::endl;
}

/* Task 4_23 - Coconut Communication

"coconuts" has 8 letters.
A byte in binary has 8 bits.
A byte can represent a character.
We can use the word "coconuts" to communicate with each other in binary if we use upper case letters as 1s and lower case letters as 0s.

Create a function that translates a word in plain text, into Coconut.

Worked Example
The binary for "coconuts" is
01100011 01101111 01100011 01101111 01101110 01110101 01110100 01110011
c         o        c       o       n        u        t       s

Since 0s are lowercase and 1s are uppercase, we can map the binary like this.
cOConuTS cOCoNUTS cOConuTS cOCoNUTS cOCoNUTs cOCOnUtS cOCOnUts cOCOnuTS

coconut_translator("coconuts") ➞ "cOConuTS cOCoNUTS cOConuTS cOCoNUTS cOCoNUTs cOCOnUtS cOCOnUts cOCOnuTS"
Examples
coconutTranslator("Hi") ➞ "cOcoNuts cOCoNutS"

coconutTranslator("edabit") ➞ "cOConUtS cOConUts cOConutS cOConuTs cOCoNutS cOCOnUts"

coconutTranslator("123") ➞ "coCOnutS coCOnuTs coCOnuTS"
Notes
All inputs will be strings.
Make sure to separate the coconuts with spaces.

std::string coconutTranslator(std::string str) {

}

Describe(coconutTranslator_) {
	It(test1){Assert::That(coconutTranslator("Hi"), Equals("cOcoNuts cOCoNutS"));}
	It(test2){Assert::That(coconutTranslator("edabit"), Equals("cOConUtS cOConUts cOConutS cOConuTs cOCoNutS cOCOnUts"));}
	It(test3){Assert::That(coconutTranslator("123"), Equals("coCOnutS coCOnuTs coCOnuTS"));}
	It(test4){Assert::That(coconutTranslator("coconuts"), Equals("cOConuTS cOCoNUTS cOConuTS cOCoNUTS cOCoNUTs cOCOnUtS cOCOnUts cOCOnuTS"));}
	It(test5){Assert::That(coconutTranslator(""), Equals(""));}
};

*/

void tasks::task4_23()
{
	std::cout << "Hello Task4_23!" << std::endl;
}

/* Task 4_24 - Fraction to Mixed Number

Create a function that takes a string representing a fraction, and return a string representing that input as a mixed number.

Mixed numbers are of the form 1 2/3 — note the space between the whole number portion and the fraction portion.
Resulting fractions should be fully reduced (see example #2).
If a result is a whole number with no fractional remainder, return only the whole number portion (see example #3).
If a result is only fractional with no whole number, return only the fractional portion (see example #4).
If a result is negative, the whole number should carry the negative sign. If the result would not have a whole number portion, the numerator of the fractional portion should carry the negative sign (see examples #5 - #7).
Examples
mixedNumber("5/4") ➞ "1 1/4"

mixedNumber("6/4") ➞ "1 1/2"

mixedNumber("8/4") ➞ "2"

mixedNumber("4/6") ➞ "2/3"

mixedNumber("-1/4") ➞ "-1/4"

mixedNumber("-5/4") ➞ "-1 1/4"

mixedNumber("-8/4") ➞ "-2"
Notes
All provided inputs will be formatted similarly, negative numbers will be provided in the numerator portion only, and all inputs will contain no spaces, invalid characters, or zero denominators.

std::string mixedNumber(std::string frac) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(mixedNumber("5/4"), Equals("1 1/4"));}
	It(test2){Assert::That(mixedNumber("6/4"), Equals("1 1/2"));}
	It(test3){Assert::That(mixedNumber("8/4"), Equals("2"));}
	It(test4){Assert::That(mixedNumber("4/6"), Equals("2/3"));}
	It(test5){Assert::That(mixedNumber("-1/4"), Equals("-1/4"));}
	It(test6){Assert::That(mixedNumber("-5/4"), Equals("-1 1/4"));}
	It(test7){Assert::That(mixedNumber("-8/4"), Equals("-2"));}
	It(test8){Assert::That(mixedNumber("0/32768"), Equals("0"));}
	It(test9){Assert::That(mixedNumber("73/5"), Equals("14 3/5"));}
	It(test10){Assert::That(mixedNumber("3855/889785"), Equals("257/59319"));}
	It(test11){Assert::That(mixedNumber("82346/197"), Equals("418"));}
	It(test12){Assert::That(mixedNumber("-2037450/204"), Equals("-9987 1/2"));}
};

*/

void tasks::task4_24()
{
	std::cout << "Hello Task4_24!" << std::endl;
}

/* Task 4_25 - Chess Pieces

Create a function that takes the name of a chess piece, its position and a target position. The function should return true if the piece can move to the target and false if it can't.

The possible inputs are "Pawn", "Knight", "Bishop", "Rook", "Queen" and "King".

Examples
canMove("Rook", "A8", "H8") ➞ true

canMove("Bishop", "A7", "G1") ➞ true

canMove("Queen", "C4", "D6") ➞ false
Notes
Do not include pawn capture moves and en passant.
Do not include castling.
Remember to include pawns' two-square move on the second rank!
Look for patterns in the movement of the pieces.

bool canMove(std::string piece, std::string current, std::string target) {

}

Describe(basic_tests)
{
  It(test1){Assert::That(canMove("Pawn", "A5", "A6"), Equals(true));}
	It(test2){Assert::That(canMove("Pawn", "G2", "G4"), Equals(true));}
	It(test3){Assert::That(canMove("Pawn", "C6", "D7"), Equals(false));}
	It(test4){Assert::That(canMove("Knight", "F5", "E3"), Equals(true));}
	It(test5){Assert::That(canMove("Knight", "F6", "E5"), Equals(false));}
	It(test6){Assert::That(canMove("Bishop", "B4", "E7"), Equals(true));}
	It(test7){Assert::That(canMove("Bishop", "B6", "F5"), Equals(false));}
	It(test8){Assert::That(canMove("Rook", "A8", "H8"), Equals(true));}
	It(test9){Assert::That(canMove("Rook", "A8", "H7"), Equals(false));}
	It(test10){Assert::That(canMove("Queen", "A8", "H1"), Equals(true));}
	It(test11){Assert::That(canMove("Queen", "A6", "H4"), Equals(false));}
	It(test12){Assert::That(canMove("King", "C4", "D5"), Equals(true));}
	It(test13){Assert::That(canMove("King", "B7", "B5"), Equals(false));}
};

*/

void tasks::task4_25()
{
	std::cout << "Hello Task4_25!" << std::endl;
}

/* Task 4_26 - Blood Types

When a person receives a blood transfusion, it is essential to make sure that the donor's blood type is compatible with the receiver's blood type. Receiving a blood type that is not compatible with your own can be life-threating, so blood banks always make sure to note the type of blood they receive from donors so that they can ensure a safe transfusion.

Blood types are named according to three factors: presence of antigen A, presence of antigen B, and presence of Rh factor. If antigen A is found, the blood type includes the letter "A". If antigen B is found, the blood type includes the letter "B". And if the Rh factor is present, the blood type ends with "+"; otherwise, it ends with "-". If neither antigen A nor antigen B are found, the blood type includes the letter "O".

For example, a person with only antigen A would have the blood type "A-". A person with both antigens A and B and the Rh factor would have blood type "AB+", and a person wih only the Rh factor would have blood type "O+".

The rules for giving and receiving blood are as follows:

A person with antigen A may only give blood to another person with antigen A.
A person with antigen B may only give blood to another person with antigen B.
A person with the Rh factor may only give blood to another person with the Rh factor.
A person with none of the above factors (O-) can give blood to anyone.
Write a function that takes in a donor's and receiver's blood types as strings and returns whether or not the donor can safely give blood to the receiver, according to the rules above.

Examples
canGiveBlood("O+", "A+") ➞ true

canGiveBlood("A-", "B-") ➞ false

canGiveBlood("A-", "AB+") ➞ true
Notes
All letters are capital.
Each blood type will be one of the following strings: "O+", "O-", "A+", "A-", "B+", "B-", "AB+", "AB-".

bool canGiveBlood(std::string donor, std::string receiver) {

}

Describe(canGiveBlood_){
It(test1){Assert::That(canGiveBlood("O+", "A+"), Equals(true));}
It(test2){Assert::That(canGiveBlood("A-", "B-"), Equals(false));}
It(test3){Assert::That(canGiveBlood("A-", "AB+"), Equals(true));}
It(test4){Assert::That(canGiveBlood("AB-", "B-"), Equals(false));}
It(test5){Assert::That(canGiveBlood("AB+", "A+"), Equals(false));}
It(test6){Assert::That(canGiveBlood("O-", "A-"), Equals(true));}
It(test7){Assert::That(canGiveBlood("A-", "O-"), Equals(false));}
It(test8){Assert::That(canGiveBlood("O+", "AB-"), Equals(false));}
It(test9){Assert::That(canGiveBlood("O-", "AB+"), Equals(true));}
It(test10){Assert::That(canGiveBlood("AB+", "AB+"), Equals(true));}
It(test11){Assert::That(canGiveBlood("O+", "O-"), Equals(false));}
};
*/

void tasks::task4_26()
{
	std::cout << "Hello Task4_26!" << std::endl;
}

/* Task 4_27 - Powerful Prime Factor

Create a function that takes a positive integer and returns a string expressing how the number can be made by multiplying powers of its prime factors.

Examples
expressFactors(2) ➞ "2"

expressFactors(4) ➞ "2^2"

expressFactors(10) ➞ "2 x 5"

expressFactors(60) ➞ "2^2 x 3 x 5"
Notes
All inputs will be positive integers in the range 1 < n < 10,000.
If a factor is repeated express it in the form "x^y" where x is the factor and y is the number of repetitions of the factor.
If n is a prime number, return n as a string as in example #1 above.
Factors should appear in ascending order in the expression.
Make sure you include the space either side of the multiplication sign, " x ".
Check the Resources if you need to understand Prime Factorization.

std::string expressFactors(int n) {

}

Describe(expressFactors_) {
	It(test1){Assert::That(expressFactors(2), Equals("2"));}
	It(test2){Assert::That(expressFactors(4), Equals("2^2"));}
	It(test3){Assert::That(expressFactors(10), Equals("2 x 5"));}
	It(test4){Assert::That(expressFactors(11), Equals("11"));}
	It(test5){Assert::That(expressFactors(29), Equals("29"));}
	It(test6){Assert::That(expressFactors(60), Equals("2^2 x 3 x 5"));}
	It(test7){Assert::That(expressFactors(100), Equals("2^2 x 5^2"));}
	It(test8){Assert::That(expressFactors(151), Equals("151"));}
	It(test9){Assert::That(expressFactors(323), Equals("17 x 19"));}
	It(test10){Assert::That(expressFactors(997), Equals("997"));}
	It(test11){Assert::That(expressFactors(3349), Equals("17 x 197"));}
	It(test12){Assert::That(expressFactors(5040), Equals("2^4 x 3^2 x 5 x 7"));}
	It(test13){Assert::That(expressFactors(6097), Equals("7 x 13 x 67"));}
	It(test14){Assert::That(expressFactors(8192), Equals("2^13"));}
	It(test15){Assert::That(expressFactors(9870), Equals("2 x 3 x 5 x 7 x 47"));}
	It(test16){Assert::That(expressFactors(9973), Equals("9973"));}
	It(test17){Assert::That(expressFactors(9999), Equals("3^2 x 11 x 101"));}
};

*/

void tasks::task4_27()
{
	std::cout << "Hello Task4_27!" << std::endl;
}

/* Task 4_28 - Topsy Turvy Numbers

Topsy turvy numbers are numbers that when inverted (rotated 180 degrees) are unchanged. The most recent topsy turvy years were 1961 and 1881. The next one won't be until 6009. Mathemeticians have shown little interest in these numbers, but Edabitians are always up for a challenge:

Write a function that accepts two non-negative integers and returns an array of all topsy turvy numbers inclusively in that range.

Examples
topsyTurvy(0, 10) ➞ [0, 1, 8]

topsyTurvy(10, 100) ➞ [11, 69, 88, 96]

topsyTurvy(1000, 2000) ➞ [1001, 1111, 1691, 1881, 1961]
Notes
N/A

std::vector<int> topsyTurvy(int lo, int hi) {

}

Describe(topsyTurvy_){
It(test1){Assert::That(topsyTurvy(0, 10), Equals(std::vector<int>{0, 1, 8}));}
It(test2){Assert::That(topsyTurvy(11, 100), Equals(std::vector<int>{11, 69, 88, 96}));}
It(test3){Assert::That(topsyTurvy(2000, 6000), Equals(std::vector<int>{}));}
It(test4){Assert::That(topsyTurvy(1000, 2000), Equals(std::vector<int>{1001, 1111, 1691, 1881, 1961}));}
It(test5){Assert::That(topsyTurvy(10000, 15000), Equals(std::vector<int>{10001, 10101, 10801, 11011, 11111, 11811}));}
};

*/

void tasks::task4_28()
{
	std::cout << "Hello Task4_28!" << std::endl;
}

/* Task 4_29 - Advanced Array Sort

Create a function that takes in an array of numbers and returns an array with the items from the original array stored in subarrays. Items of the same value should be in the same subarray.

Examples
advancedSort([2, 1, 2, 1]) ➞ [[2, 2], [1, 1]]

advancedSort([5, 4, 5, 5, 4, 3]) ➞ [[5, 5, 5], [4, 4], [3]]

advancedSort([3,2,1,3,2,1]) ➞ [[3,3],[2,2],[1,1]]
Notes
The subarrays should be returned in the order of each element's first appearance in the given array.

std::vector<std::vector<int>> advancedSort(std::vector<int> arr) {

}

Describe(advancedSort_){
It(test1){Assert::That(advancedSort({1,2,1,2}) , Equals(std::vector<std::vector<int>>{{1,1},{2,2}}));}
It(test2){Assert::That(advancedSort({2,1,2,1}) , Equals(std::vector<std::vector<int>>{{2,2},{1,1}}));}
It(test3){Assert::That(advancedSort({3,2,1,3,2,1}) , Equals(std::vector<std::vector<int>>{{3,3},{2,2},{1,1}}));}
It(test4){Assert::That(advancedSort({5,5,4,3,4,4}) , Equals(std::vector<std::vector<int>>{{5,5},{4,4,4},{3}}));}
It(test5){Assert::That(advancedSort({80,80,4,60,60,3}),Equals(std::vector<std::vector<int>>{{80,80},{4},{60,60},{3}}));}
It(test6){Assert::That(advancedSort({1234, 1235, 1234, 1235, 1236, 1235}),Equals(std::vector<std::vector<int>>{{1234, 1234},{1235, 1235, 1235},{1236}}));}
};

*/

void tasks::task4_29()
{
	std::cout << "Hello Task4_29!" << std::endl;
}

/* Task 4_30 - Number Pairs

Create a function that determines how many number pairs are embedded in a space-separated string. The first numeric value in the space-separated string represents the count of the numbers, thus, excluded in the pairings.

Examples
numberPairs("7 1 2 1 2 1 3 2") ➞ 2
// (1, 1), (2, 2)

numberPairs("9 10 20 20 10 10 30 50 10 20") ➞ 3
// (10, 10), (20, 20), (10, 10)

numberPairs("4 2 3 4 1") ➞ 0
// Although two 4's are present, the first one is discounted.
Notes
Always take into consideration the first number in the string is not part of the pairing, thus, the count. It may not seem so useful as most people see it, but it's mathematically significant if you deal with set operations.

int numberPairs(std::string str){

}

Describe(numberPairs_){
It(test1){Assert::That(numberPairs("7 1 2 1 2 1 3 2"), Equals(2)  );}
It(test2){Assert::That(numberPairs("9 10 20 20 10 10 30 50 10 20"), Equals(3));}
It(test3){Assert::That(numberPairs("4 2 3 4 1"), Equals(0));}
It(test4){Assert::That(numberPairs("13 10 20 20 10 10 30 50 10 20 50 50 30 20"), Equals(6));}
It(test5){Assert::That(numberPairs("10 1 2 5 6 5 2 1 7 8 1"), Equals(3));}
It(test6){Assert::That(numberPairs("16 2 3 5 11 1 11 5 7 9 13 17 3 8 7 2 1"), Equals(6));}
It(test7){Assert::That(numberPairs("6 1 2 2 4 3 4"), Equals(2));}
};

*/

void tasks::task4_30()
{
	std::cout << "Hello Task4_30!" << std::endl;
}

/* Task 4_31 - Find All Prime Numbers in Decimal Integer https://edabit.com/challenge/RKwaq5pQzxsqmSwpS

*/

void tasks::task4_31()
{
	std::cout << "Hello Task4_31!" << std::endl;
}

/* Task 4_32 - Sum Quadratic Roots https://edabit.com/challenge/mW5GXqQLQJRdtyxRn

*/

void tasks::task4_32()
{
	std::cout << "Hello Task4_32!" << std::endl;
}

/* Task 4_33 - Sales Season https://edabit.com/challenge/86HN9qLoDgk3dEjcB

*/

void tasks::task4_33()
{
	std::cout << "Hello Task4_33!" << std::endl;
}

/* Task 4_34 - Vowel Families https://edabit.com/challenge/HKycFr7KLARLebHBF

*/

void tasks::task4_34()
{
	std::cout << "Hello Task4_34!" << std::endl;
}

/* Task 4_35 - Alphabet Clash (Battle of the ASCII Values) https://edabit.com/challenge/XccJ395ab4DZYGZW9

*/

void tasks::task4_35()
{
	std::cout << "Hello Task4_35!" << std::endl;
}

/* Task 4_36 - Parentheses Clusters https://edabit.com/challenge/f5RmXpK54SGQ8w8tz

*/

void tasks::task4_36()
{
	std::cout << "Hello Task4_36!" << std::endl;
}

/* Task 4_37 - Read the Abacus (Part 2: Japanese Soroban) https://edabit.com/challenge/oyueonWr7h4S24nwm

*/

void tasks::task4_37()
{
	std::cout << "Hello Task4_37!" << std::endl;
}

/* Task 4_38 - One Small Favor https://edabit.com/challenge/2qxrxEfTsfQN9H6LB

*/

void tasks::task4_38()
{
	std::cout << "Hello Task4_38!" << std::endl;
}

/* Task 4_39 - The Shortest Path https://edabit.com/challenge/aauDZGSNL3TMus9N9

*/

void tasks::task4_39()
{
	std::cout << "Hello Task4_39!" << std::endl;
}

/* Task 4_40 - Keyword Cipher https://edabit.com/challenge/SRF9qZNCheaEnSnBt

*/

void tasks::task4_40()
{
	std::cout << "Hello Task4_40!" << std::endl;
}

/* Task 4_41 - Extracting Words with "-ing" Inflection https://edabit.com/challenge/9qKMWGWJumQ5STNtE

*/

void tasks::task4_41()
{
	std::cout << "Hello Task4_41!" << std::endl;
}

/* Task 4_42 - Give Me a Hint https://edabit.com/challenge/7Z6yrQHNp3Tm3Y2xY

*/

void tasks::task4_42()
{
	std::cout << "Hello Task4_42!" << std::endl;
}

/* Task 4_43 - Phone Letter Combinations https://edabit.com/challenge/Kekh6Jf8gKzD4abWk

*/

void tasks::task4_43()
{
	std::cout << "Hello Task4_43!" << std::endl;
}

/* Task 4_44 - Seven Segment Display https://edabit.com/challenge/CZato3JYzYTZh7Y74

*/

void tasks::task4_44()
{
	std::cout << "Hello Task4_44!" << std::endl;
}

/* Task 4_45 - Roman Numerals https://edabit.com/challenge/L3s3vrs8PdJGDbRPg

*/

void tasks::task4_45()
{
	std::cout << "Hello Task4_45!" << std::endl;
}

/* Task 4_46 - Bit Rotation https://edabit.com/challenge/NgtAmTiF3sg4X2D38

*/

void tasks::task4_46()
{
	std::cout << "Hello Task4_46!" << std::endl;
}

/* Task 4_47 - Text Twist! https://edabit.com/challenge/BnmJTpMNfJo2ajoQS

*/

void tasks::task4_47()
{
	std::cout << "Hello Task4_47!" << std::endl;
}

/* Task 4_48 - Polybius Square (Basic) https://edabit.com/challenge/JukSvPFLwkdXBexCf

*/

void tasks::task4_48()
{
	std::cout << "Hello Task4_48!" << std::endl;
}

/* Task 4_49 - Headline Hash Tags https://edabit.com/challenge/aQrEYMaEG3nrAwb9z

*/

void tasks::task4_49()
{
	std::cout << "Hello Task4_49!" << std::endl;
}

/* Task 4_50 - Spiral Matrix https://edabit.com/challenge/wmJWogKLQPGWyYYdZ

*/

void tasks::task4_50()
{
	std::cout << "Hello Task4_50!" << std::endl;
}
