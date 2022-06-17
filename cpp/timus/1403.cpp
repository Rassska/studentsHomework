#include <bits/stdc++.h>

struct order
{
    bool operator() (const order& a, const order& b) { return a.reward > b.reward; }
    int deadline, reward, number;
    order() {}
    order(int deadline, int reward, int number) : deadline(deadline), reward(reward), number(number)
    { }
};

int n;
std::priority_queue<order, std::vector<order>, order> q;
std::vector<order> v;

int main()
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        v.push_back(order(x, y, i));
    }
    std::sort(v.begin(), v.end(), 
              [] (const order& a, const order& b) { return a.deadline < b.deadline; });
    for(auto it = v.begin(); it < v.end(); it++)
    {
        if(it->deadline == q.size() && q.top().reward < it->reward)
             q.pop();
             q.push(*it);
        }
        else if(it->deadline > q.size())
            q.push(*it);
    }
    printf("%d\n", q.size());
    std::vector<order> ans;

    while(!q.empty())
    {
        ans.push_back(q.top());
        q.pop();
    }
    std::sort(ans.begin(), ans.end(), 
              [] (const order& o1, const order& o2) { return o1.deadline < o2.deadline; } );
    for(auto it = ans.begin(); it < ans.end(); it++)
        printf("%d ", it->number);
    return 0;
}
