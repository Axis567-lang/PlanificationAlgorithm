#include <iostream>
#include <list>
#include "SPN.h"

using namespace std;

typedef unsigned int uint;

class Manager
{
    public:
    list<uint> List_BT;
    
    public:
    void OrderedInsert(Process pProcess, list<Process> &Queue);
    

};