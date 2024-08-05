#include <bits/stdc++.h>
using namespace std;
double angleClock(int hour, int minute){
    double hrs = 30 * hour + 0.5 * minute;
    double minu = 6 * minute;
    double ans = abs(hour - minu);
    if(ans <= 180){
        return ans;
    }
    else{
        return 360 - ans;
    }
}
int main()
{
    int hour = 10;
    int minute = 50;
    cout<<"angleClock: "<<angleClock(hour, minute);

    return 0;
}