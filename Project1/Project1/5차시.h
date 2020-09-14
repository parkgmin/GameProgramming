#pragma once

void main() {
	CPerson p1("Linda", 29);
	CPerson p2 = p1;
	cout << p1.mName << " " << p1.mAge << endl;
	cout << p2.mName << " " << p2.mAge << endl;
}
