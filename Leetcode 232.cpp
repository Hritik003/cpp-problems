class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    MyQueue() {
        
    }
    //Pushes element x to the back of the queue.
    void push(int x) {
        while(s1.empty()==false){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        while(s2.empty()==false){
            s1.push(s2.top());
            s2.pop();
        }
    }
    //Removes the element from the front of the queue and returns it.
    int pop() {
        int front=s1.top();
        s1.pop();
        return front;
    }
    // Returns the element at the front of the queue.
    int peek() {
        return s1.top();
    }
    //Returns true if the queue is empty, false otherwise.
    bool empty() {
        return s1.empty();
    }
};

