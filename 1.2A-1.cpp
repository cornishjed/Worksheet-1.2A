// Worksheet 1.2A Exercise 1: Grading Program
// Input score to output grade
// By Jed Powell

#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << "Enter your score: ";
	cin >> score;

	if (score <= 59)
		cout << "\nGrade F" << endl;
	else if ((score >= 60) && (score <= 69))
		cout << "\nGrade D" << endl;
	else if ((score >= 70) && (score <= 79))
		cout << "\nGrade C" << endl;
	else if ((score >= 80) && (score <= 89))
		cout << "\nGrade B" << endl;
	else if ((score >= 90) && (score <= 100))
		cout << "\nGrade A" << endl;
	else
		cout << "\nInvalid score" << endl;

	return 0;
}
