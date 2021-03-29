#include <iostream>
#include "LongLong_Public.h"
//#include "LongLong_Private.h"

int main()
{
    //LongLong_Private A, B;
    LongLong_Public A, B;

    cout << "\nLongLong1" << endl;
    cin >> A;
    cout << A;
    
    cout << "A++" << endl; cout << A++ << endl;
    cout << "A--" << endl; cout << A-- << endl;
    cout << "++A" << endl; cout << ++A << endl;
    cout << "--A" << endl; cout << --A << endl;
    cout << "\nLongLong2" << endl;
   
    cin >> B;
    cout << B;

    if (A > B) { cout << "A>B" << endl; }
    else{ cout << "A!>B" << endl; }
    if (A < B) { cout << "A<B" << endl; }
    else { cout << "A!<B" << endl; }
    if (A == B) { cout << "A=B" << endl; }
    else{ cout << "A!=B" << endl; }




    return 0;
}