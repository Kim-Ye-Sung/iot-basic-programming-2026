
#include <iostream>
#include <vector>

using namespace std;


vector<int> Coordinate_Cal(vector<int>a, vector<int>b)
{
    int c = a[0] - b[0];
    int d = a[1] - b[1];

    vector<int> e = { c,d };
    return e;
}


int main()
{
    vector<int> aaa = { 1,2 };
    vector<int> ccc = { 2,4 };

    vector<int> a = Coordinate_Cal(aaa, ccc);

    cout << a[0] << a[1] << endl;
}

