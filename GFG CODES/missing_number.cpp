#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &array, int n)
    {
        int sum = (n * (n + 1)) / 2;
        int s = 0;
        for (int i = 0; i < n - 1; i++)
        {
            s = s + array[i];
        }
        return (sum - s);
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

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}