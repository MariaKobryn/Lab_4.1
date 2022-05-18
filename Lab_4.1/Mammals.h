#pragma once
#include <iostream>

using namespace std;

class Mammals {
protected:
	int age;
	string kind;
public:
	Mammals(int _age, string _kind) { age = _age; kind = _kind; };
	virtual string Description() = 0;
	friend ostream& operator << (ostream&, Mammals&);
	~Mammals() {};
};

typedef Mammals* MammalsPtr;
