
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int>s;
    s.push(-1);
    vector<int>ans;
    for(int i=n-1;n>=0;i--)
    {
        int curr=arr[i];
        while(s.top()>=curr)
        {
            s.pop();
        }
        ans=s.top();
        s.push(curr);
    }
    return ans;
}