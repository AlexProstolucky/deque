#include <iostream>
#include <deque>
using namespace std;

int main()
{
    long long int size;
    deque <int> d{-13, 0, 10, -4, 6, 11, 12, 28, 50, 89, 166, 304};
    cout << "Input size of deque --> ";
    cin >> size;


    for (size_t i = 0, j = 9; i < size / 2; i++, j++)
    {
        d.push_back(d[j + 2] + d[j + 1] + (d[j] - 1));
    }

    for (size_t i = 0, j = 0; i < size / 2; i++)
    {
        d.push_front(d[j + 2] - d[j + 1] - (d[j] + 1));
    }


    for (size_t i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
}
