#include <iostream>
#include <map>
using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    map<int, int> mp;
    for (int i = 0; i < brr.size(); i++)
        mp[brr[i]]++;
    for (int i = 0; i < arr.size(); i++)
        mp[arr[i]]--;
    map<int, int>::iterator it;
    vector<int> result;
    for (it = mp.begin(); it != mp.end(); it++)
        if (it->second > 0)
            result.push_back(it->first);

    return result;
}

int main()
{
    vector<int> arr = {7,2,5,3,5,3};
    vector<int> brr = {7,2,5,4,6,3,5,3};

    vector<int

    return 0;
}