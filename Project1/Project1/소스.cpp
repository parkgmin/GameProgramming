#include<iostream>
#include<memory>
using namespace std;

int main() {
	unique_ptr<int> a = unique_ptr<int>(new int(3));
	int* pi = new int;
	*pi = 100;
	cout << *pi << endl;

	int* pj = new int[3];

	pj[0] = 10;
	pj[1] = 20;
	pj[2] = 30;

	for (int i = 0; i < 3; i++)
		cout << pj[i] << endl;

	return 0;
}