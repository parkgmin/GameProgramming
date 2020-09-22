#include <iostream>
#include <string>
using namespace std;
int main(){

	string input_Arr[3];
	for (int i = 0; i < 3; i++) {
		getline(cin, input_Arr[i]);
	}

	cout << "        - 상품별 판매 이익금 및 이익률표 -        " << endl;
	cout << " ------------------------------------------------ " << endl;
	cout << "상품명	수량 판매단가 매입단가 운송료 이익금 이익률" << endl;
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