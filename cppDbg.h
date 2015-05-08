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


#ifndef CPPDBG_H
#define CPPDBG_H


#include <iostream>

//only variable
#define DBG(x)   std::cout << "DBG: " << #x << " = " << x << std::endl;

//variable and filename
#define DBGF(x)  std::cout << "DBG: " << #x << " = " << x << "  (File: " << __FILE__ << ")" << std::endl;

//variable and line number
#define DBGL(x)  std::cout << "DBG: " << #x << " = " << x << "  (Line: " << __LINE__ << ")" << std::endl;

//variable, line number and filename
#define DBGLF(x) std::cout << "DBG: " << #x << " = " << x << "  (Line: " << __LINE__ << " of " << __FILE__ << ")" << std::endl;


//same as above with time suffixed

#define DBGT(x)   std::cout << "DBG: (" << __TIME__ << ") " << #x << " = " << x << std::endl;

#define DBGTF(x)  std::cout << "DBG: (" << __TIME__ << ") " << #x << " = " << x << "  (File: " << __FILE__ << ")" << std::endl;

#define DBGTL(x)  std::cout << "DBG: (" << __TIME__ << ") " << #x << " = " << x << "  (Line: " << __LINE__ << ")" << std::endl;

#define DBGTLF(x) std::cout << "DBG: (" << __TIME__ << ") " << #x << " = " << x << "  (Line: " << __LINE__ << " of " << __FILE__ << ")" << std::endl;

//same as above but also with date suffixed

#define DBGDT(x)   std::cout << "DBG: (" << __DATE__ " -- " << __TIME__ << ") " << #x << " = " << x << std::endl;

#define DBGDTF(x)  std::cout << "DBG: (" << __DATE__ " -- " << __TIME__ << ") " << #x << " = " << x << "  (File: " << __FILE__ << ")" << std::endl;

#define DBGDTL(x)  std::cout << "DBG: (" << __DATE__ " -- " << __TIME__ << ") " << #x << " = " << x << "  (Line: " << __LINE__ << ")" << std::endl;

#define DBGDTLF(x) std::cout << "DBG: (" << __DATE__ " -- " << __TIME__ << ") " << #x << " = " << x << "  (Line: " << __LINE__ << " of " << __FILE__ << ")" << std::endl;


#endif // CPPDBG_H
