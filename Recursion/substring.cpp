//Generate all possible substrings with ASCII numbers of a string"AB" 
#include<iostream>
using namespace std;

void allsubstring(string s,string ans)
{
  if(s.length()==0)
  {
      cout<<ans<<endl;
      return;
  }
  char ch=s[0];
  int code=ch;
  string ros=s.substr(1);
  allsubstring(ros,ans);
  allsubstring(ros,ans+ch);
  allsubstring(ros,ans+to_string(code));
}
int main()
{
    allsubstring("AB","");

   return 0;
}
/*
//Generate all possible subset of a string"ABC" 
#include<iostream>
using namespace std;

void allsubstring(string s,string ans)
{
  if(s.length()==0)
  {
      cout<<ans<<endl;
      return;
  }
  char ch=s[0];
  string ros=s.substr(1);
  allsubstring(ros,ans);
  allsubstring(ros,ans+ch);
}
int main()
{
    allsubstring("ABC","");

   return 0;
}
*/