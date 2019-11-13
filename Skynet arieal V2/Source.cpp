#include <cstdlib>
#include <time.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	srand(time(0));
	int point;
	point = rand() % 64 + 1;
	int guess;
	int num1 = 0;
		cout << "\nI am thinking of a number between 1 and 64. \n Guess the number.";
		do {
		cout << "\nEnter your estimate: ";
		cin >> guess;
		num1++;
		if (guess < point)
			cout << "Your estimate is less, than the secret number" << endl;
		else if (guess > point)
			cout << "Your estimate is more, than the secret number" << endl;
		else
			cout << "Your guess is right!" << endl;
		system("PAUSE");
	} while (guess != point);
	//Human code ends
	//Starting the Binary AI
//Todo: add human and other ai into it.
	//Variables
	int num2 = 0;
	int MathTargetPrediction;
	int MathLowRange = 1;
	int MathHighRange = 64;
	//int binarySearchTracker;
	//number = rand() % MathHighRange + MathLowRange;
	//Todo: Make sure loop runs smoothly
	//Starts math Ai loop
	do {
		//equation for searching for number
		MathTargetPrediction = ((MathHighRange - MathLowRange) / 2) + MathLowRange;
		//Display prompt for AI
		num2++;
		cout << "\nSearching for the enemy... \n";
		if (MathTargetPrediction < point) {
			cout << "\nTarget not found target may be less.\n Guess was "<< MathTargetPrediction << endl;
			MathLowRange = MathTargetPrediction + 1;
		}
		else if (MathTargetPrediction > point) {
			cout << "\nAI's estimate was of by a higher amount.\n Guess was " << MathTargetPrediction << endl;
			MathHighRange = MathTargetPrediction - 1;
		}
		else {
			cout << "\nThe AI has found the target! \n";
			cout << "\nThe number was " << point << endl;
		}
		system("PAUSE");
		//binarySearchTracker++;
	} while (MathTargetPrediction != point);
	//Math Ai code ends
	//Binary AI begins
	int TargetPredict;
	int hightarget = 64;
	int lowtarget = 1;
	int binaryguess = 0;
	cout << "The second AI starts with one and adds one\n";
	do {
		if (binaryguess <= point)
		{
			binaryguess++;
		}
		if (binaryguess = point) {
			cout << "\nIt got it! It was " << point << endl;
		}
	} while (binaryguess < point);

	cout << "\nHuman was able to find the location with " << num1 << " tries and the point was " << point << endl;
	cout << "\nThe Ai with the math search found target with " << num2 << " tries and the point was " << point << endl;
	cout << "\nAi with linear search was able to find target with " << point << " tries and the point was " << point << endl;

	system("PAUSE");
	return 0;
}