#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

int main()
{
  stack<int> s;
    for( int i=0; i < 10; i++ )
    {
      s.push(i);
      cout << "This stack has a size of " << s.size() <<" "<<s.top()<<s.empty()<<endl;
    }

}
