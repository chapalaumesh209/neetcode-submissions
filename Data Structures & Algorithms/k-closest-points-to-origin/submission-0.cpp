class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, vector<int>>>pq;

        for(auto &point : points)
        {
            int a= point[0];
            int b = point[1];

            int dist = a*a + b*b;

            pq.push({dist, point});

            if(pq.size() > k)
            {
                pq.pop();
            }
        }

        vector<vector<int>>res;

        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
            
        }

        return res;
    }
};
