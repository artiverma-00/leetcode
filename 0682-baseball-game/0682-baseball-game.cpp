class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> st;
        int sum = 0;

        for(string s : op) {
            if(s == "C") {
                sum -= st.top();
                st.pop();
            }
            else if(s == "D") {
                int a = st.top() * 2;
                sum += a;
                st.push(a);
            }
            else if(s == "+") {
                int a = st.top(); st.pop();
                int b = st.top();
                st.push(a); // restore
                int c = a + b;
                sum += c;
                st.push(c);
            }
            else {
                int val = stoi(s);
                sum += val;
                st.push(val);
            }
        }
        return sum;
    }
};
