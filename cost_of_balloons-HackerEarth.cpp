/* Problem link 
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/description/
*/

/* Problem Statement

You are conducting a contest at your college. This contest consists of two problems and  participants.
	You know the problem that a candidate will solve during the contest.

You provide a balloon to a participant after he or she solves a problem. There are only green and purple-colored balloons available in a market.
	Each problem must have a balloon associated with it as a prize for solving that specific problem.
	You can distribute balloons to each participant by performing the following operation:

Use green-colored balloons for the first problem and purple-colored balloons for the second problem
	Use purple-colored balloons for the first problem and green-colored balloons for the second problem
	You are given the cost of each balloon and problems that each participant solve.
	Your task is to print the minimum price that you have to pay while purchasing balloons.

Input format

	First line: (t) that denotes the number of test cases.	
	For each test case:
	First line: Cost of green and purple-colored balloons
	Second line: (n) that denotes the number of participants
	Next  lines: Contain the status of users. For example, if the value of the  integer in the  row is ,
		then it depicts that the  participant has not solved the  problem. Similarly, if the value of the  integer in the  row is ,
		then it depicts that the  participant has solved the  problem.

Output format
	For each test case, print the minimum cost that you have to pay to purchase balloons.


Sample input:
2
9 6
10
1 1
1 1
0 1
0 0
0 1
0 0
0 1
0 1
1 1
0 0
1 9
10
0 1
0 0
0 0
0 1
1 0
0 1
0 1
0 0
0 1
0 0

Sample output:
69
14

*/

#include <iostream>
using namespace std;

int maximum(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int minimum(int a, int b) {
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {

		int green_price, purple_price;
		cin >> green_price >> purple_price;
		int higher_price = maximum(green_price, purple_price);
		int lower_price = minimum(green_price, purple_price);

		int solved_problem_one{}, solved_problem_two{};

		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int first_question{}, second_question{};
			cin >> first_question >> second_question;
			if (first_question == 1) { solved_problem_one++; }
			if (second_question == 1) { solved_problem_two++; }
		}

		int most_answered_quest = maximum(solved_problem_one, solved_problem_two);
		int least_answered_quest = minimum(solved_problem_one, solved_problem_two);

		// to achieve the minimum cost --> the most answered question is gifted with the cheaper balloon
		// so it's like --> (more_people*less_money) + (less_people*more_money) in stead of (more*more)+(less*less)
		int minimum_cost = most_answered_quest * lower_price;
		minimum_cost += (least_answered_quest * higher_price);

		cout << minimum_cost << endl;
	}
}