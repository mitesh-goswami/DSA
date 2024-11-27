#include <bits/stdc++.h>
using namespace std;
vector<int> nextLeft(vector<int> &arr, int n)
{
    vector<int> ans;
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        if (s.size() == 0)
        {
            ans.push_back(-1);
        }
        else if (!s.empty() && s.top().first < arr[i])
        {
            ans.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    // for (int i : ans)
    // {
    //     cout << i << " ";
    // }
    return ans;
}

vector<int> nextRight(vector<int> &arr, int n)
{
    vector<int> ans;
    stack<pair<int, int>> s;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            ans.push_back(n);
        }
        else if (!s.empty() && s.top().first < arr[i])
        {
            ans.push_back(s.top().second);
        }
        else if (!s.empty() && s.top().first >= arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
            {
                s.pop();
            }
            if (s.empty())
            {
                ans.push_back(n);
            }
            else
            {
                ans.push_back(s.top().second);
            }
        }
        s.push({arr[i], i});
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    vector<int> left = nextLeft(heights, n);
    vector<int> right = nextRight(heights, n);
    vector<int> width(n);
    vector<int> area(n);
    int maxArea = -1;
    for (int i = 0; i < n; i++)
    {
        width[i] = right[i] - left[i] - 1;
        // cout << "left: " << left[i] << " right: " << right[i] << "width: " << width[i] << endl;
        area[i] = width[i] * heights[i];
        maxArea = max(maxArea, area[i]);
    }
    return maxArea;
}

int main()
{
    vector<int> arr = {2, 1, 5, 6, 2, 3};
    int area = largestRectangleArea(arr);
    cout << area << endl;
    return 0;
}