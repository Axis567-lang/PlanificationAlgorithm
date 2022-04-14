#include "Manager.h"
//#include <cmath>

//using namespace std;
/*
    lower_greater : guides the new process where it must be inserted
                    according to its BT size
        1 -> from the middle of the list to the end
        0 -> from the middle of the list to the front
*/

void Manager::OrderedInsert(Process pProcess, list<Process> &Queue)
{
    Process *father, *son;
    if(Queue.empty())
        Queue.push_front(pProcess);
    else
    {
        father = &Queue.front();
        father += uint(Queue.size()/2);
        bool lower_greater = pProcess.BT > father->BT;

        if(lower_greater)
        {
            for(uint i = uint(Queue.size()/2); i > Queue.size(); i++)
            {
                list<Process> Queue_copy = Queue;
                if (/* condition */)
                {
                    /* code */
                }
                
                
            }
        }
    }

}