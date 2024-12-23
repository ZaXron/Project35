#include <iostream>
#include <string>
#include "Tree.h"
using namespace std;

int power(int num, int step) {
	if (step == 1) {
		return num;
	}
	return num * power(num, step - 1);
}

int main()
{
	Tree tree;
	tree.insert(5);
	tree.insert(3);
	tree.insert(7);
	tree.insert(2);
	tree.insert(4);
	tree.insert(6);
	tree.insert(8);
	tree.Print();
	int key;
	cout << "Enter: ";
	cin >> key;
	if (tree.find(key) == true) {
		cout << "True";
	}
	else {
		cout << "False";
	}

	return 0;
}