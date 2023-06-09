#include <iostream>
  
using namespace std;
void even_odd(int a){
    a%2==0? cout<<a<<" is even number"<<endl:cout<<a<<" is odd number"<<endl;
    
}
int main()
{
    int num;
    cin>>num;
    even_odd(num);
}