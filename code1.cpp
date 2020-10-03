typedef pair<int,int> pii;
class Solution 
{
    public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int,int> ma;
        priority_queue<pii,vector<pii>,greater<pii> > minh;
        for(int i=0;i<nums.size();i++)ma[nums[i]]++;
        for(auto i =ma.begin();i!=ma.end();i++)
        {
            minh.push({i->second,i->first});
            if(minh.size()>k)minh.pop();
        }
        vector<int> v;
        while(minh.size()!=0)
        {
            v.push_back(minh.top().second);
            minh.pop();
        }
        
        return v;
    }
};