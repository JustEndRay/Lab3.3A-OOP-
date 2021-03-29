#pragma once
#include <iostream>
#include <sstream>
#include <string>

#pragma pack(1)

using namespace std;
class LongLong
{
	long long1, long2;
public:
	long Getlong1() const;
	long Getlong2() const;

	void Setlong1(long value);
	void Setlong2(long value);

	LongLong();
	LongLong(long, long);
	LongLong(LongLong&);

	string toString() const;
	void Read();
	void Display();
};

