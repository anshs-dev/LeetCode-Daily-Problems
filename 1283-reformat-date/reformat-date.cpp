class Solution {
public:
    string reformatDate(string date) {
         unordered_map<string,int> monthMap={
        {"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4},
        {"May", 5}, {"Jun", 6}, {"Jul", 7}, {"Aug", 8},
        {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12}
    };
    if(isdigit(date[1])){
    string day=date.substr(0,2);
    string month=to_string(monthMap[date.substr(5,3)]);
    string year=date.substr(9,4);
    if(month.length()==1)
    return year+"-0"+month+"-"+day;
    else
    return year+"-"+month+"-"+day;
    }
    else{
    string day=date.substr(0,1);
    string month=to_string(monthMap[date.substr(4,3)]);
    string year=date.substr(8,4);
    if(month.length()==1)
    return year+"-0"+month+"-0"+day; 
    else
    return year+"-"+month+"-0"+day;
    }
    return "";
    }
};