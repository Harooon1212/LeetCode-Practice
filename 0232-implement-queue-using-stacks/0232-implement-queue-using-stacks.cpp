#include <stack>
class MyQueue {
private:
    stack<int> st;

public:
    MyQueue() {}

    void push(int x) {
        st.push(x);
    }

    int pop() {
        if (st.size() == 1) {
            int x = st.top();
            st.pop();
            return x;
        }

        int x = st.top();
        st.pop();

        int ans = pop();

        st.push(x);

        return ans;
    }

    int peek() {
        if (st.size() == 1) {
            return st.top();
        }

        int x = st.top();
        st.pop();

        int ans = peek();

        st.push(x);

        return ans;
    }

    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */