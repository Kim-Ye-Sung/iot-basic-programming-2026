#include <string>
#include <vector>
#include <iostream>
using namespace std;

void ChangeTime(int* Time, string DestinationTime)
{
    for (int j = 0; j < DestinationTime.length(); j++)
    {
        if (j == 0)
        {
            *Time += (DestinationTime[j] - '0') * 1000;
        }
        else if (j == 1)
        {
            *Time += (DestinationTime[j] - '0') * 100;
        }
        else if (j == 3)
        {
            *Time += (DestinationTime[j] - '0') * 10;
        }
        else if (j == 4)
        {
            *Time += (DestinationTime[j] - '0');
        }
    }
}

void TimeCal(int* Time1, int lengTime, int Time2, int Time3)
{
    if ((*Time1 >= Time2) && (*Time1 <= Time3))
    {
        *Time1 = Time3;
    }
    else if (*Time1 <= 0)
    {
        *Time1 = 0;
    }
    else if (*Time1 >= lengTime)
    {
        *Time1 = lengTime;
    }
}

int TimeCal2(int Time, string b)
{
    int a = Time;

    a = a % 100;

    if (b == "+" && a >= 60)
    {
        Time += 40;
    }
    else if (b == "-"&& a >= 60)
    {
        Time -= 40;
    }

    return Time;
}


string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";

    int PosTime = 0;
    int lenTime = 0;
    int OpTime = 0;
    int Op_EndTime = 0;

    ChangeTime(&PosTime, pos);
    ChangeTime(&OpTime, op_start);
    ChangeTime(&Op_EndTime, op_end);
    ChangeTime(&lenTime, video_len);

    TimeCal(&PosTime, lenTime, OpTime, Op_EndTime);

    for (int i = 0; i < commands.size(); i++)
    {
        if (commands[i] == "next")
        {
            PosTime += 10;
            PosTime = TimeCal2(PosTime, "+");
            TimeCal(&PosTime, lenTime, OpTime, Op_EndTime);
        }
        else
        {
            PosTime -= 10;
            PosTime = TimeCal2(PosTime, "+");
            TimeCal(&PosTime, lenTime, OpTime, Op_EndTime);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            if (PosTime / 1000 > 0)
            {
                answer += (PosTime / 1000) + '0';
                PosTime = PosTime % 1000;
            }
            else
            {
                answer += "0";
            }
        }
        else if (i == 1)
        {
            if (PosTime / 100 > 0)
            {
                answer += (PosTime / 100) + '0';
                PosTime = PosTime % 100;
            }
            else
            {
                answer += "0";
            }
        }
        else if (i == 2)
        {
            answer += ":";
        }
        else if (i == 3)
        {
            if (PosTime / 10 > 0)
            {
                answer += (PosTime / 10) + '0';
                PosTime = PosTime % 10;
            }
            else
            {
                answer += "0";
            }
        }
        else
        {
            answer += PosTime + '0';
        }
    }

    return answer;
}

int main()
{   
    vector <string> a = {"next"};

    cout << solution("07:22", "04:05", "00:15", "04:07", a) << endl;

    //cout << "737" - '0' << endl;

    
    return 0;
}