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
/*
一直在找寻着
在何处有你的身影
在这星星都像要落下来的夜里
我无法再欺骗自己
one more time
*/