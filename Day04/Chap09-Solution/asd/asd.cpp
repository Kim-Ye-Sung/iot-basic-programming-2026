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

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    string answer = "";

    int PosTime = 0;
    int OpTime = 0;
    int Op_EndTime = 0;

    //for (int i = 0; i < commands.size(); i++)
    //{
        ChangeTime(&PosTime, pos);
        ChangeTime(&OpTime, op_start);
        ChangeTime(&Op_EndTime, op_end);
    //}

    cout << PosTime << endl;
    cout << OpTime << endl;
    cout << Op_EndTime << endl;

    return answer;
}

int main()
{   
    //vector <string> a = { "next", "prev" };

    //solution("34:33", "13:00", "00:55", "02:55", a);

    cout << "737" - '0' << endl;
    return 0;
}