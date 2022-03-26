/*
    BT -> Burst Time
    AT -> Arrival Time

    P1 -> Process 1
    P2 -> Process 2
    P3 -> Process 3
    P4 -> Process 4
    P5 -> Process 5
*/

class Process
{
    //  Vars
    public:
    uint BT;
    uint AT;
    bool finished;

    public:
    Process(uint burst_time) : BT{burst_time};
    ~Process();

    void doingThings();

}