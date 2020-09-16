//����-01
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

//����-02
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

//����-1
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

//����-2
//�����ߴ°� ���� �ڵ��Դϴ�
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

//����-3
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

//����-4
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
		cout << "�̸� :" << name << endl;
		cout << "���� :" << age << endl;
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
		cout << "�Ҹ��ڸ� ȣ���Ͽ����ϴ�." << endl;
	}
};

int main() {
	Student s1("��ȭ��" , 29);
	Student s2("�庴ö", 99);
	s2 = s1;
	s1.ShowInfo();
	s2.ShowInfo();
}*/