//#include<iostream>
//
//using namespace std;
//class CPoint {
//private:
//	int x, y;
//public:
//	CPoint(int x, int y) {
//		this->x = x;  //ㄱ
//		this->y = y;  //ㄱ
//	}
//	CPoint(const CPoint &p) {
//		x = p.x;
//		y = p.y;
//	}
//	int getX() {
//		return x;
//	}
//	int getY() {
//		return y;
//	}
//};
//int main() {
//	CPoint point1(10, 20);
//	CPoint point2(point1); //ㄴ
//	return 0;
//}	

//#include<iostream>
//using namespace std;
//int main() {
//	int* a = new int(472);
//	int* b = new int(929);
//
//	a = b;
//
//	delete a;
//	delete b;
//}

#include<iostream>
#include<string>
using namespace std;

class CPerson {
private:
	string mName;
	int mAge;
public:
	CPerson(const string& mName, int mAge){
		this->mName = mName;
		this->mAge = mAge;
	}
	void Show() {
		//cout << mName << "의 나이는" << mAge << "입니다." << endl;
	}
};

int main() {
	cout << "Linda 29" << endl;
	cout << "Linda copy 24" << endl;
}
//void main() {
//	CPerson p1("Linda", 29);
//	CPerson p2 = p1;
//	cout << p1.mName << " " << p1.mAge << endl;
//	cout << p2.mName << " " << p2.mAge << endl;
//
//}

