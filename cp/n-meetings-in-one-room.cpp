#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

struct meet
{
    int s;
    int e;
    int pos;
};
bool comprator(struct meet m1, meet m2)
{
    if (m1.e < m2.e)
        return true;
    if (m1.e > m2.e)
        return false;
    if (m1.pos < m2.pos)
        return true;
    return false;
}
class Solution
{
public:
    int maxMeetings(int start[], int end[], int n)
    {
        struct meet m[n];
        for (int i = 0; i < n; i++)
        {
            m[i].s = start[i];
            m[i].e = end[i];
            m[i].pos = i + 1;
        }

        sort(m, m + n, comprator);

        vector<int> v;
        int check = m[0].e;
        v.push_back(m[0].pos);
        int count = 1;
        for (int i = 1; i < n; i++)
        {
            if (m[i].s > check)
            {
                check = m[i].e;
                v.push_back(m[i].pos);
                count++;
            }
        }
        return count;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
} // } Driver Code Ends