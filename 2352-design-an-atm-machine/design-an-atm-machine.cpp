class ATM {
public:
    vector<int>notes,type;
    ATM() {
        notes={0,0,0,0,0};
        type={20,50,100,200,500};
    }

    void deposit(vector<int> banknotesCount) {
        for(int i=0;i<5;i++) notes[i]+=banknotesCount[i];
    }

    vector<int> withdraw(int amount) {
        vector<int>result(5,0),temp=notes;
        for(int i=4;i>=0 && amount>0;i--){
            int curr=min(amount/type[i],temp[i]);
            amount-=type[i]*curr;
            temp[i]-=curr;
            result[i]+=curr;
        } 
        if(amount!=0) return {-1};
        notes=temp;
        return amount!=0?vector<int>{-1}:result;       
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */