#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int elem)
{
    if (st.empty())
    {
        st.push(elem);
        return;
    }
    int num = st.top();
    st.pop();
    insertAtBottom(st, elem);
    st.push(num);
}

void reversing(stack<int> &st){
    if(st.size()>0){
        int x=st.top();
        st.pop();
        reversing(st);

        insertAtBottom(st,x);
    }
    return;
}
int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);


    reversing(s);

    cout << "After deletion " << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}