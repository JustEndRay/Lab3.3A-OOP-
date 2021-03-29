#pragma once
#include <iostream>
#include "LongLong.h"

using namespace std;

class LongLong_Private : private LongLong
{
public:
	//Opened access to the methods of the LongLong class
	using LongLong::Getlong1;
	using LongLong::Getlong2;

	using LongLong::Setlong1;
	using LongLong::Setlong2;

	using LongLong::LongLong;
	//Opened access to the methods of the LongLong class

	LongLong_Private();
	LongLong_Private(long, long);
	LongLong_Private(LongLong_Private&);

	LongLong& operator = (const LongLong_Private&);
	friend ostream& operator << (ostream&, const LongLong_Private&);
	friend istream& operator >> (istream&, LongLong_Private&);
	operator string() const;

	LongLong_Private& operator ++ ();
	LongLong_Private& operator -- ();
	LongLong_Private operator ++ (int);
	LongLong_Private operator -- (int);

	friend bool operator > (const LongLong_Private A,const LongLong_Private B);
	friend bool operator < (const LongLong_Private A, const LongLong_Private B);
	friend bool operator == (const LongLong_Private A, const LongLong_Private B);
};

