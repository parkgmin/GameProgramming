#include <iostream>
#include <string>
using namespace std;
int main(){

	string input_Arr[3];
	for (int i = 0; i < 3; i++) {
		getline(cin, input_Arr[i]);
	}

	cout << "        - ��ǰ�� �Ǹ� ���ͱ� �� ���ͷ�ǥ -        " << endl;
	cout << " ------------------------------------------------ " << endl;
	cout << "��ǰ��	���� �ǸŴܰ� ���Դܰ� ��۷� ���ͱ� ���ͷ�" << endl;
	cout << " ------------------------------------------------ " << endl;
	for (int i = 0; i < 3; i++) {

		int amout = atoi(input_Arr[i].substr(10, 5).c_str());
		int sellPrice = atoi(input_Arr[i].substr(15, 5).c_str());
		int buyPrice = atoi(input_Arr[i].substr(20, 5).c_str());
		int transportPrice = atoi(input_Arr[i].substr(25, 5).c_str());
		int profit = amout * sellPrice - (amout*buyPrice + transportPrice);
		double margin = (double)profit / ((double)amout * (double)buyPrice) * 100;

		cout << input_Arr[i].substr(0, 10) << " ";
		cout << amout << " ";
		cout << sellPrice << " ";
		cout << buyPrice << " ";
		cout << transportPrice << " ";
		cout << profit << " ";
		cout << fixed;
		cout.precision(2);
		cout << margin << " ";
		cout << endl;
	}
}