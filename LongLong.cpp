#include "LongLong.h"

long LongLong::Getlong1() const { return long1; }
long LongLong::Getlong2() const { return long2; }

void LongLong::Setlong1(long value) { long1 = value; }
void LongLong::Setlong2(long value) { long2 = value; }

LongLong::LongLong() { Setlong1(0); Setlong2(0); }
LongLong::LongLong(long long1 = 0, long long2 = 0)
{
	Setlong1(long1); Setlong2(long2);
}
LongLong::LongLong(LongLong& A)
{
	Setlong1(A.Getlong1());
	Setlong2(A.Getlong2());
}

string LongLong::toString() const
{
	stringstream sout;

	sout << "\n\nlong1 = " << Getlong1() << endl;
	sout << "long2 = " << Getlong2() << endl;

	return sout.str();
}
void LongLong::Read()
{
	cout << "long1 = "; cin >> long1;
	cout << "long2 = "; cin >> long2;
}
void LongLong::Display()
{
	cout << "long1 = " << long1 << endl;
	cout << "long2 = " << long2 << endl;
}
