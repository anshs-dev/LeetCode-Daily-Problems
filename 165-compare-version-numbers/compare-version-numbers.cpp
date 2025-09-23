class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v1,v2;
        stringstream ss1(version1),ss2(version2);
        string word1,word2;
        while(getline(ss1,word1,'.')) v1.push_back(stoi(word1));
        while(getline(ss2,word2,'.')) v2.push_back(stoi(word2));
        int i=0,j=0,n1=v1.size(),n2=v2.size();
        while(i<n1 && j<n2){
            if(v1[i]>v2[j]) return 1;
            else if(v1[i]<v2[j]) return -1;
            else i++,j++;
        }
        if(i<n1){
            while(i<n1 && v1[i]==0) i++;
            if(i==n1) return 0;
            else return 1;
        }
        else{
            while(j<n2 && v2[j]==0) j++;
            if(j==n2) return 0;
            else return -1;
        }
        return -1;
    }
};