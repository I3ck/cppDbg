/*
    Copyright (c) 2015 Martin Buck
    Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation the rights to
    use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software,
    and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
    The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
    DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
    OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/


#include "cppDbg.h"

int main()
{
	bool b = true;
	char c = 'c';
	int i = 5;
	float f = 13.3;
	double d = 17.3;

	//print value of variables
	DBG(b); // b = 1

	DBG(c); // c = 'c'

	DBG(i); // i = 5

	DBG(f); // f = 13.3

	DBG(d); // d = 17.3


	//add more information
	//suffix F for (F)ilename
	DBGF(b); // b = 1  (File: example.cpp)

	//suffix L for (L)ine number
	DBGL(b); // b = 1  (Line: x)

	//suffix LF for (L)ine number and (F)ilename
	DBGLF(b); // b = 1  (Line x in example.cpp)


	//adding a T as first suffix will also print the time
	DBGT(b); //   (13:37:00) b = 1

	DBGTF(b); //  (13:37:00) b = 1  (File: example.cpp)

	DBGTL(b); //  (13:37:00) b = 1  (Line: x)

	DBGTLF(b); // (13:37:00) b = 1  (Line x in example.cpp)


	//adding a DT as first suffix will print date and time
	DBGDT(b); //   (May  8 2015 --  13:37:00) b = 1
	DBGDTF(b); //  (May  8 2015 --  13:37:00) b = 1  (File: example.cpp)
	DBGDTL(b); //  (May  8 2015 --  13:37:00) b = 1  (Line: x)
	DBGDTLF(b); // (May  8 2015 --  13:37:00) b = 1  (Line x in example.cpp)



	return 0;
}
