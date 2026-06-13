class FrontMiddleBackQueue {
public:
    struct node{
        node *next,*prev;
        int val=0;
        node(int x){
            val=x;
            next=nullptr;
            prev=nullptr;
        }
    };
    struct Dll{
        node *front,*back;
        Dll(){
            front=new node(-1);
            back=new node(-1);
            front->next=back;
            back->prev=front;
            back->next=back;
        }
        void push_front(node* temp){
            temp->next=front->next;
            temp->next->prev=temp;
            front->next=temp;
            temp->prev=front;
        }
        void push_last(node* temp){
            temp->next=back;
            temp->prev=back->prev;
            back->prev->next=temp;
            back->prev=temp;
        }
        void push_middle(node* temp){
            node* fast=front->next,*slow=front->next;
            while(fast!=back && fast->next!=back){
                slow=slow->next;
                fast=fast->next->next;
            }
            slow=slow->prev;
            temp->next=slow->next;
            temp->prev=slow;
            temp->next->prev=temp;
            slow->next=temp;
        }
        int pop_front(){
            if(front->next==back) return -1;
            int val=front->next->val;
            front->next=front->next->next;
            front->next->prev=front;
            return val;
        }
        int pop_last(){
            if(back->prev==front) return -1;
            int val=back->prev->val;
            back->prev=back->prev->prev;
            back->prev->next=back;
            return val;
        }
int pop_middle(){
if(front->next==back) return -1;

node* fast=front,*slow=front;

while(fast->next!=back && fast->next->next!=back){
slow=slow->next;
fast=fast->next->next;
}

node* del;
if(fast->next==back) del=slow;
else del=slow->next;

int val=del->val;
del->prev->next=del->next;
del->next->prev=del->prev;
delete del;

return val;
}
    };
    Dll dll;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        node* temp=new node(val);
        dll.push_front(temp);
    }
    
    void pushMiddle(int val) {
        node* temp=new node(val);
        dll.push_middle(temp);
    }
    
    void pushBack(int val) {
        node* temp=new node(val);
        dll.push_last(temp);
    }
    
    int popFront() {
        return dll.pop_front();
    }
    
    int popMiddle() {
        return dll.pop_middle();
    }
    
    int popBack() {
        return dll.pop_last();
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */