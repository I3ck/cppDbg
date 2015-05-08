#README

Same as example.cpp:  
```cpp
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
```

results in output:  

```
DBG: b = 1
DBG: b = 1  (File: example.cpp)
DBG: b = 1  (Line: 13)
DBG: b = 1  (Line: 14 of example.cpp)
DBG: (13:54:43) b = 1
DBG: (13:54:43) b = 1  (File: example.cpp)
DBG: (13:54:43) b = 1  (Line: 18)
DBG: (13:54:43) b = 1  (Line: 19 of example.cpp)
DBG: (May  8 2015 -- 13:54:43) b = 1
DBG: (May  8 2015 -- 13:54:43) b = 1  (File: example.cpp)
DBG: (May  8 2015 -- 13:54:43) b = 1  (Line: 23)
DBG: (May  8 2015 -- 13:54:43) b = 1  (Line: 24 of example.cpp)
```