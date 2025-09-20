#include <bits/stdc++.h>
using namespace std;

class Router {
public:
    deque<pair<int, vector<int>>> dq;      // stores {timestamp, {source,destination,timestamp}}
    set<tuple<int,int,int>> st;            // for duplicate check
    unordered_map<int, vector<int>> destTimestamps; // destination -> sorted timestamps
    int len;

    Router(int memoryLimit) {
        len = memoryLimit;
    }

    bool addPacket(int source, int destination, int timestamp) {
        if(st.find({source,destination,timestamp}) != st.end()) 
            return false;

        // remove oldest if deque full
        if(dq.size() == len){
            vector<int> old = dq.front().second;
            dq.pop_front();
            st.erase({old[0], old[1], old[2]});
            
            // remove timestamp from map
            auto &vec = destTimestamps[old[1]];
            auto it = lower_bound(vec.begin(), vec.end(), old[2]);
            if(it != vec.end()) vec.erase(it);
        }

        // add new packet
        dq.push_back({timestamp, {source,destination,timestamp}});
        st.insert({source,destination,timestamp});
        destTimestamps[destination].push_back(timestamp);

        return true;
    }

    vector<int> forwardPacket() {
        if(dq.empty()) return {}; // safe check

        vector<int> temp = dq.front().second;
        dq.pop_front();
        st.erase({temp[0], temp[1], temp[2]});

        // remove timestamp from map
        auto &vec = destTimestamps[temp[1]];
        auto it = lower_bound(vec.begin(), vec.end(), temp[2]);
        if(it != vec.end()) vec.erase(it);

        return temp;
    }

    int getCount(int destination, int startTime, int endTime) {
        auto &vec = destTimestamps[destination];
        auto first = lower_bound(vec.begin(), vec.end(), startTime);
        auto second = upper_bound(vec.begin(), vec.end(), endTime);
        return second - first; // number of timestamps in range
    }
};
