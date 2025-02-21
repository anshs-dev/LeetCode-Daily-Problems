class Node {
    public:
    string data;
    Node* forward;
    Node* backward;
};

class BrowserHistory {
public:

    // stack<string> bStack;
    // stack<string> fwdStack;

    Node* head;
    Node* curr;


    BrowserHistory(string homepage) {
        // bStack.push(homepage);

        Node* newNode = new Node(homepage);
        head = newNode;
        curr = newNode;
    }
    
    void visit(string url) {
        // // clear all fwdhistory
        // while (!fwdStack.empty()) fwdStack.pop();
        // // push
        // bStack.push(url);
        

        // clear all forward links
        Node* temp = curr->forward;
        while (temp) {
            Node* toDelete = temp;
            temp = temp->forward;
            delete toDelete;
        }
        // insert at tail
        Node* newNode = new Node(url);
        // connect
        curr->forward = newNode;
        newNode->backward = curr;
        // update curr
        curr = newNode;
    }
    
    string back(int steps) {
        // while (steps--) {
        //     // ek baar back jaaenge
        //     if (bStack.size() > 1) {
        //         fwdStack.push(bStack.top());
        //         bStack.pop();
        //     }
        //     else {
        //         // only homepage is present -> back is not possible
        //         break;
        //     }
        // }
        // return bStack.top();

        while (steps--) {
            // already on homepage
            if (!curr->backward) {
                break;
            }
            else {
                curr = curr->backward;
            }
        }
        return curr->data;
    }
    
    string forward(int steps) {
        // while (steps--) {
        //     // possible for next
        //     if (!fwdStack.empty()) {
        //         bStack.push(fwdStack.top());
        //         fwdStack.pop();
        //     }
        //     // not possible for next
        //     else {
        //         break;
        //     }
        // }
        // return bStack.top();

        while (steps--) {
            // already on last link
            if (!curr->forward) {
                break;
            }
            else {
                curr = curr->forward;
            }
        }
        return curr->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */