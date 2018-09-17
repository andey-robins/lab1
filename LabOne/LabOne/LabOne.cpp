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

	fstream file(fileName);

	if (file.is_open()) {

		int count = 0;
		double first = NULL;
		double second = NULL;
		double secondlast = NULL;
		double last = NULL;
		double input;

		while (file >> input){

			count++;
			secondlast = last;
			last = input;

			if (second == NULL && first != NULL) {
				second = input;
			}

			if (first == NULL) {
				first = input;
			}

		}

		cout << "Count: " << count << endl;
		cout << "First Item: " << first << endl;
		cout << "Second Item: " << second << endl;
		cout << "Second Last Item: " << secondlast << endl;
		cout << "Last Item: " << last << endl;

		system("pause");

		file.close();
	}
	else {
		cout << "Unable to open file. Please try again." << endl;
	}

	system("pause");
    return 0;
}

