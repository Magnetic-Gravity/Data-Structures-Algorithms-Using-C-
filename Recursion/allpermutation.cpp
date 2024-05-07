//print all permutations of a  String "ABC"
#include<iostream>
using namespace std;

void perm(string s, string ans){
   if(s.length()==0)
   {
       cout<<ans<<endl;
       return;
   }
   for(int i=0; i<s.length(); i++){
     char ch=s[i];//kisi bhi ek element ko fix karenge har ek case mai
      string ros=s.substr(0,i)+s.substr(i+1);
      perm(ros,ans+ch);
   }
   
}
int main(){
    perm("ABC","");
    return 0;
}