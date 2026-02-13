#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

bool cal(vector<int> c, deque<int> d)
{
    int before_c = 0;
    int before_d = 0;
    int after_c = 0;
    int after_d = 0;

    int num1 = 0;
    int num2 = 0;

    sort(c.begin(), c.end());
    sort(d.begin(), d.end());

    for (int i = 0; i < c.size(); i++)
    {
        after_c = c[i];
        if (after_c != before_c)
        {
            num1++;
            before_c = after_c;
        }
    }

    for (int i = 0; i < c.size(); i++)
    {
        after_d = d[i];
        if (after_d != before_d)
        {
            num2++;
            before_d = after_d;
        }
    }

    return num1 == num2;

}


int solution(vector<int> topping) {
    int answer = 0;

    vector<int> a;
    deque<int> b;

    for (int i = 0; i < topping.size(); i++)
    {
        b.push_back(topping[i]);
    }

    for (int i = 0; i < topping.size(); i++)
    {
        a.push_back(topping[i]);
        b.pop_front();

        if (cal(a, b))
        {
            answer++;
        }
    }

    return answer;
}
int main()
{
	vector <int> toppinga = { 1, 2, 1, 3, 1, 4, 1, 2 };
	deque<int> a;

    int aaaa;

    aaaa = solution(toppinga);

    cout << aaaa << endl;

	return 0;
}