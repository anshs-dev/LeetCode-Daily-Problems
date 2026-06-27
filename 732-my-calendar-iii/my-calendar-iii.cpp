class MyCalendarThree {
public:
    map<int,int>m;
    MyCalendarThree() {
        
    }
    
    int book(int startTime, int endTime) {
        m[startTime]++;
        m[endTime]--;
        int sum=0,maxe=-1;
        //for(auto x:m) cout<<x.first<<" "<<x.second<<endl;
        for(auto x:m){ 
                sum+=x.second;
                maxe=max(maxe,sum);
        }

        return maxe;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */