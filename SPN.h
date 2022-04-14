/*
    BT -> Burst Time
    AT -> Arrival Time
*/

typedef unsigned int uint;

class Process
{
    //  Vars
    public:
    uint BT;
    uint AT;
    bool complete;

    public:
    Process(uint burst_time = 1);
    ~Process();

};

