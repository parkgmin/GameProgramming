//#include<iostream>
//#include<memory>
//using namespace std;
//
//int main() {
//	unique_ptr<int> a = unique_ptr<int>(new int(3));
//	int* pi = new int;
//	*pi = 100;
//	cout << *pi << endl;
//
//	int* pj = new int[3];
//
//	pj[0] = 10;
//	pj[1] = 20;
//	pj[2] = 30;
//
//	for (int i = 0; i < 3; i++)
//		cout << pj[i] << endl;
//
//	return 0;
//}

#include<iostream>
using namespace std;

class CopyObj {
public:
	CopyObj(const double height, const double weight);
	void ShowVar();
private:
	double height;
	double weight;
};

CopyObj::CopyObj(const double height, const double weight) {
	this->height = height;
	this->weight = weight;
}
void CopyObj::ShowVar(){
	cout << "Å° : " << height << endl;
	cout << "¸ö¹«°Ô : " << weight << endl;
}
int main() {
	CopyObj p1(181.5, 79.3);
	p1.ShowVar();

	cout << "-----------------------------------------------------------" << endl;

	CopyObj p2(p1);
	p2.ShowVar();
}
//#include<iostream>
//using namespace std;
//
//class CTest{
//public:
//	CTest() {
//
//	}
//	CTest(CTest& obj) {
//
//	}
//};
//
//void main() {
//	CTest t;
//	CTest ct;
//
//	CTest t1(t);
//	CTest t2(ct);
//}


//#include<iostream>
//using namespace std;
//class Circle {
//public:
//	Circle(int n) {
//		this->radius = n;
//	};
//	Circle(const Circle& c) {
//		this->radius = c.radius;
//	};
//	int getRadius() {
//		return this->radius;
//	};
//private:
//	int radius;
//};
//int main() {
//	Circle src(30);
//	Circle dest(src);
//	cout << "src :" << src.getRadius() << endl;
//	cout << "dest :" << dest.getRadius() << endl;
//	return 0;
//}