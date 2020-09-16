//과제-01
/*#include<iostream>
using namespace std;

class CTest {
public:
	CTest() {

}
	CTest(int value) {
		this->mValue = value;
	}
	CTest(const CTest& arg) {
		this->mValue = arg.mValue;
	}
	int mValue = 0;
};

CTest operator + (const CTest& arg1, int arg2) {
	CTest t;
	t.mValue = arg1.mValue + arg2;
	return t;
}

CTest operator + (int arg1, const CTest& arg2) {
	CTest t;
	t.mValue = arg2.mValue + arg1;
	return t;
}

CTest operator + (const CTest& arg1, const CTest& arg2) {
	CTest t;
	t.mValue = arg1.mValue + arg2.mValue;
	return t;
}

int main() {
	CTest s1 = 1;
	CTest s2 = s1 + 1;
	CTest s3 = s1 + s2;

	cout << s1.mValue << endl;
	cout << s2.mValue << endl;
	cout << s3.mValue << endl;
}*/

//과제-02
#include<iostream>
using namespace std;

class CTest{
public:
	CTest() {

	}
	CTest(int val) {
		this->mValue = val;
	}
	CTest(const CTest& arg) {
		this->mValue = arg.mValue;
	}
	int mValue = 0;
};
CTest operator + (const CTest& arg1, int arg2) {
	CTest t;
	t.mValue = arg1.mValue + arg2;
	return t;
}

CTest operator + (int arg1, const CTest& arg2) {
	CTest t;
	t.mValue = arg2.mValue + arg1;
	return t;
}

CTest operator + (const CTest& arg1, const CTest& arg2) {
	CTest t;
	t.mValue = arg1.mValue + arg2.mValue;
	return t;
}

int main() {
	CTest s1 = 1;
	CTest s2 = 1 + s1;

	cout << s1.mValue << endl;
	cout << s2.mValue << endl;
}

//예제-1
/*#include<iostream>
using namespace std;

class CTest {
public:
	CTest operator + (int arg) {
		CTest t;
		t.mValue = mValue + arg;
		return t;
	}
	CTest operator + (const CTest& arg);
	int mValue = 0;
};

CTest CTest::operator+(const CTest& arg) {
	CTest t;
	t.mValue = mValue + arg.mValue;
	return t;
}

int main(){
	CTest t1, t2;

	t1.mValue = 24;
	t2.mValue = 28;

	CTest s = t1 + t2 + 4;

	cout << s.mValue << endl;
}*/

//예제-2
//에러뜨는게 정상 코드입니다
/*#include<iostream>
using namespace std;

class CTest {
public:
	CTest operator + (int arg) {
		CTest t;
		t.mValue = mValue + arg;
		return t;
	}
	int mValue = 0;
};
int main(){
	CTest t1;
	t1.mValue = 24;

	CTest s1 = t1 + 4;
	CTest s2 = 4 + t1;

	cout << s1.mValue << endl;
	cout << s2.mValue << endl;
}*/

//예제-3
/*#include<iostream>
using namespace std;

class CTest {
public:
	int mValue = 0;
};

CTest operator + (const CTest &arg1, int arg2) {
	CTest t;
	t.mValue = arg1.mValue + arg2;
	return t;
}

CTest operator + (int arg1, const CTest& arg2) {
	CTest t;
	t.mValue = arg1 + arg2.mValue;
	return t;
}

CTest operator + (const CTest&arg1, const CTest&arg2) {
	CTest t;
	t.mValue = arg1.mValue + arg2.mValue;
	return t;
}
int main() {
	CTest t1, t2;
	t1.mValue = 24;
	t1.mValue = 28;

	CTest s1 = t1 + 4;
	CTest s2 = 8 + t1;
	CTest s3 = s1 + s2;
}*/

//예제-4
/*#include<iostream>
using namespace std;

class Student {
private:
	char *name;
	int age;
public:
	Student(const char* name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
	}
	void ShowInfo() {
		cout << "이름 :" << name << endl;
		cout << "나이 :" << age << endl;
	}
	Student& operator = (Student& ref) {
		delete[] name;
		name = new char[20];
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;
	}
	~Student() {
		delete[] name;
		cout << "소멸자를 호출하였습니다." << endl;
	}
};

int main() {
	Student s1("김화해" , 29);
	Student s2("장병철", 99);
	s2 = s1;
	s1.ShowInfo();
	s2.ShowInfo();
}*/