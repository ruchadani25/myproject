#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string s = "hello";
    
    s = +"hi";            //works
  //  s = "hi" + "hello"; //compile error  //Either âaâ or âbâ can be string literal or a value of type char but not both.
    s = s + "hi" + "world";//works
   
    
    cout << s;
    return 0;
}
