#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;

int GetSmallestNum(vector<int> test)
{
	int small = INT_MAX;
	for (int i = 0; i < test.size(); i++) {
		if (test[i] < small)
			small = test[i];
	}
	return small;
}

int GetBiggestNum(vector<int> test)
{
	int big = INT_MIN;
	for (int i = 0; i < test.size(); i++) {
		if (test[i] > big)
			big = test[i];
	}
	return big;
}

int main()
{
	int caseNum = 0;
	vector<vector<int>> cases;

	cin >> caseNum;
	for (int i = 0; i < caseNum; i++) {
		vector<int> test;
		int input = 0;
		while (cin >> input) {
			test.push_back(input);
			if (cin.get() == '\n')
				break;
		}
		cases.push_back(test);
	}

	vector<int> dif;
	for (int i = 0; i < caseNum; i++) {
		int small = GetSmallestNum(cases[i]);
		int big = GetBiggestNum(cases[i]);
		dif.push_back(big - small);
	}

	for (int i = 0; i < dif.size(); i++) {
		cout << dif[i] << endl;
	}
}
