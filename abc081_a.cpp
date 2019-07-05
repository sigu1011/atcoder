#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int count = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a.at(i) == '1') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
