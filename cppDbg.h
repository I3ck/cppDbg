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

#ifdef CPPDBG //only if debugging flag was set

#include <iostream>

//only variable
#define DBG(x) \
    do { \
    std::cout << "DBG: " << #x << " = " << x << std::endl; \
} while(false)

//variable and filename
#define DBGF(x) \
do { \
    std::cout << "DBG: " << #x << " = " << x << "  (File: " << __FILE__ << ")" << std::endl; \
} while(false)

//variable and line number
#define DBGL(x) \
do { \
    std::cout << "DBG: " << #x << " = " << x << "  (Line: " << __LINE__ << ")" << std::endl; \
} while(false)

//variable, line number and filename
#define DBGLF(x) \
do { \
    std::cout << "DBG: " << #x << " = " << x << "  (Line: " << __LINE__ << " of " << __FILE__ << ")" << std::endl; \
} while(false)


//same as above with time suffixed

#define DBGT(x) \
do { \
    std::cout << "DBG: (" << __TIME__ << ") " << #x << " = " << x << std::endl; \
} while(false)

#define DBGTF(x) \
do { \
    std::cout << "DBG: (" << __TIME__ << ") " << #x << " = " << x << "  (File: " << __FILE__ << ")" << std::endl; \
} while(false)

#define DBGTL(x) \
do { \
    std::cout << "DBG: (" << __TIME__ << ") " << #x << " = " << x << "  (Line: " << __LINE__ << ")" << std::endl; \
} while(false)

#define DBGTLF(x) \
do { \
    std::cout << "DBG: (" << __TIME__ << ") " << #x << " = " << x << "  (Line: " << __LINE__ << " of " << __FILE__ << ")" << std::endl; \
} while(false)

//same as above but also with date suffixed

#define DBGDT(x) \
do { \
    std::cout << "DBG: (" << __DATE__ " -- " << __TIME__ << ") " << #x << " = " << x << std::endl; \
} while(false)

#define DBGDTF(x) \
do { \
    std::cout << "DBG: (" << __DATE__ " -- " << __TIME__ << ") " << #x << " = " << x << "  (File: " << __FILE__ << ")" << std::endl; \
} while(false)

#define DBGDTL(x) \
do { \
    std::cout << "DBG: (" << __DATE__ " -- " << __TIME__ << ") " << #x << " = " << x << "  (Line: " << __LINE__ << ")" << std::endl; \
} while(false)

#define DBGDTLF(x) \
do { \
    std::cout << "DBG: (" << __DATE__ " -- " << __TIME__ << ") " << #x << " = " << x << "  (Line: " << __LINE__ << " of " << __FILE__ << ")" << std::endl; \
} while(false)



#else //debugging flag wasn't set, do nothing



#define DBG(x) \
do { \
} while(false)

#define DBGF(x) \
do { \
} while(false)

#define DBGL(x) \
do { \
} while(false)

#define DBGLF(x) \
do { \
} while(false)

#define DBGT(x) \
do { \
} while(false)

#define DBGTF(x) \
do { \
} while(false)

#define DBGTL(x) \
do { \
} while(false)

#define DBGTLF(x) \
do { \
} while(false)

#define DBGDT(x) \
do { \
} while(false)

#define DBGDTF(x) \
do { \
} while(false)

#define DBGDTL(x) \
do { \
} while(false)

#define DBGDTLF(x) \
do { \
} while(false)



#endif // CPPDBG

#endif // CPPDBG_H
