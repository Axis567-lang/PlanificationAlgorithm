
/*
    P1 -> Process 1
    P2 -> Process 2
    P3 -> Process 3
    P4 -> Process 4
    P5 -> Process 5
*/

#include "SPN.h"
#include "Manager.h"
#include <cstdlib>

bool Table;
Process P1(rand() % 7 + 1), P2(rand() % 7 + 1), 
        P3(rand() % 7 + 1), P4(rand() % 7 + 1), P5();

Manager manager;

//  DYNAMIC LIST
list<Process> P_queue;

uint contador_rev = 20;
uint contador_BT = 0;

main()
{


    do
    {
        if((rand() % 2))
            InsertProcess();

        if(!P_queue.empty())
        {
            Process current_process = P_queue.front();

            do
            {
                 if((rand() % 2))
                    InsertProcess();

                
            } while (contador_BT > 0);
        }
        
        contador_BT = 0;
    } while (contador_rev == 0);
    
}

Process InsertProcess()
{
    switch (rand() % 10 + 1)
    {
    case 1:
        manager.OrderedInsert(P1, P_queue);
        break;
    
    default:
        break;
    }
}

