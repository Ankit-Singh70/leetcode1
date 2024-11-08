class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        stack<int>st;
        int count=0;
        reverse(sandwiches.begin(),sandwiches.end());
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }

         for(int i=0;i<sandwiches.size();i++){
            st.push(sandwiches[i]);
        }

        while(q.size()>0 && count!=students.size()){
              if(q.front()==st.top()){
                q.pop();
                st.pop();
                count=0;
              }
              else{
                q.push(q.front());
                q.pop();
                count++;
              }
        }
        return q.size();
    }
};