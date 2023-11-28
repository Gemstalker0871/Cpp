//WRITE A PROGRAM THAT PERFORMS ADDITION OF TIME IN HOURS AND MINUTES FORMAT
#include <iostream>
using namespace std;

class time
{
    int hours,min;
    public:
    void gettime(int h, int m)
    {
        hours=h;
        min=m;
    }
    void puttime()
    {
        cout<<hours<<" Hours";
        cout<<min<<"Minutes";
    }
    void sum(time, time);
};

void time::sum(time t1,time t2)
{
    min = t1.min + t2.min;
    hours = min / 60;
    min = min % 60;
    hours = hours + t1.hours + t2.hours;
}

int main()
{
    time t1, t2, t3;
    t1.gettime(1,30);
    t2.gettime(2,50);
    t3.sum(t1,t2);
    t1.puttime();
    t2.puttime();
    t3.puttime();

    return 0;
}