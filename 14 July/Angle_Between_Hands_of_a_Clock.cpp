/*
    hourHand :
        1. In 1hour,Moved by 30* degree
        2. In 1min ,Moved by 30/60 = (1/2)*degree

   minuteHand :
        1. In 1hour,Moved by 360* or 0* degree
        2. In 1min, Moved by 360/60 = 6* degree
*/

class Solution
{
public :
    double angleClock(int hour, int minutes)
    {
        double hourAngle = 30*hour + minutes*0.5;

        double minuteAngle = 6*minutes;

        double angle = abs(hourAngle - minuteAngle);

        if(angle <= 180)
            return angle;
        else
            return 360-angle;
    }
};