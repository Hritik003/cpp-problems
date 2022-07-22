class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> squeue;
        queue<int> queue;
        for(int x : students){
            queue.push(x);
        }
        for(int y: sandwiches){
           
             squeue.push(y);
        }
        int i=0;
        while(!queue.empty()){
            int first = queue.front();
            if(squeue.front()==queue.front()){
                squeue.pop();
                queue.pop();
            }
            else{
                queue.pop();
                queue.push(first);             
                 }
           if(i++ == students.size()*sandwiches.size()){
               break;
           } 
        }
        return queue.size();
    }
};
