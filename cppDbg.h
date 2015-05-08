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