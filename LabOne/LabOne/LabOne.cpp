// LabOne.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	string fileName;
	cout << "Enter the name of a file for processing." << endl;
	cin >> fileName;

	ifstream file(fileName);

	int count = 0;
	int first = NULL;
	int second = NULL;
	int secondlast = NULL;
	int last = NULL;

	if (file.is_open()) {
		while (!file.eof()) {
			int input;
			file >> input;

			count++;
			secondlast = last;
			last = input;

			if (first == NULL) {
				first = input;
			}

			if (second == NULL && first != NULL) {
				second = input;
			}

		}

		file.close();
	}
	else {
		cout << "Unable to open file. Please try again." << endl;
	}

    return 0;
}

