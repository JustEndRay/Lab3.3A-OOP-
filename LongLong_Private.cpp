#include "LongLong_Private.h"
LongLong_Private::LongLong_Private() { Setlong1(0); Setlong2(0); }
LongLong_Private::LongLong_Private(long long1 = 0, long long2 = 0)
{
	Setlong1(long1); Setlong2(long2);
}
LongLong_Private::LongLong_Private(LongLong_Private& A)
{
	Setlong1(A.Getlong1());
	Setlong2(A.Getlong2());
}

LongLong& LongLong_Private::operator=(const LongLong_Private& A)
{
	LongLong(A.Getlong1(), A.Getlong2());
	return *this;
}

ostream& operator << (ostream& out, const LongLong_Private& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, LongLong_Private& A)
{
	long long1, long2;
	cout << "Enter a long1 "; in >> long1;
	cout << "Enter a long2 "; in >> long2;
	A.Setlong1(long1); A.Setlong2(long2);
	return in;
}
LongLong_Private::operator string() const
{
	stringstream ss;
	ss << "long1= " << this->Getlong1() << endl;
	ss << "long2= " << this->Getlong2() << endl;
	return ss.str();
}

LongLong_Private& LongLong_Private::operator++ ()
{
	this->Setlong1(this->Getlong1() + 1);
	return *this;
}
LongLong_Private& LongLong_Private::operator -- ()
{
	this->Setlong1(this->Getlong1() - 1);
	return *this;
}
LongLong_Private LongLong_Private::operator ++ (int)
{
	LongLong_Private t(*this);
	this->Setlong2(this->Getlong2() + 1);
	return t;
}
LongLong_Private LongLong_Private::operator -- (int)
{
	LongLong_Private t(*this);
	this->Setlong2(this->Getlong2() - 1);
	return t;
}

bool operator>(const LongLong_Private A,const LongLong_Private B)
{
	if (A.Getlong1() > B.Getlong1()) { return 1; }
	if (A.Getlong1() == B.Getlong1())
	{
		if (A.Getlong2() > B.Getlong2()) { return 1; }
	}
	if (A.Getlong1() < B.Getlong1()) { return 0; }
}

bool operator<(const LongLong_Private A, const LongLong_Private B)
{
	if (A.Getlong1() < B.Getlong1()) { return 1; }
	if (A.Getlong1() == B.Getlong1())
	{
		if (A.Getlong2() < B.Getlong2()) { return 1; }
	}
	if (A.Getlong1() > B.Getlong1()) { return 0; }
}

bool operator==(const LongLong_Private A, const LongLong_Private B)
{
	if (A.Getlong1() == B.Getlong1()&& A.Getlong2() == B.Getlong2()) { return 1; }
	else{return 0;}

}
