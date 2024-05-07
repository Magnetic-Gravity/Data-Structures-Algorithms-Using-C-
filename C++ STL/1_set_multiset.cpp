
// (1) UnOrdered Set
#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    
    cout<<"starting insertion is : ";
    for(auto i : s)
        cout<<i<<" ";
    s.erase(s.find(3));
    cout<<"\n";
     cout<<"After erasing is : ";
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";
}

//.........................................................................................
/*
// (2)  Multi-Set
#include<iostream>
#include<set>
using namespace std;

int main(){
    multiset<int> s;
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(7);
    s.insert(8); 
    s.insert(8);
    s.insert(9);
    s.insert(9);
    s.insert(9);
    cout<<"First Time Inserted Values is : ";
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";
    
    cout<<"size is : "<< s.size()<<"\n";
    s.erase(6); 
    s.erase(8);
    cout<<"After deleted 6 & 8 is : ";
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";

    s.erase(s.find(9));
    cout<<"Remaining Elements is  : ";
    for(auto i=s.begin(); i!=s.end(); i++)
          cout<< *i <<" ";
    cout<<"\n";

    cout<<"Elements after reversed operation is : ";
    for(auto i=s.rbegin(); i!=s.rend(); i++)
          cout<< *i <<" ";
    cout<<"\n";
    
    cout<<"Size after erasing operation : "<<s.size()<<"\n";
    cout<<endl;
    cout<<"upper bound of 5 is : "<< *s.upper_bound(5) <<"\n"; 
    cout<<"upper bound of 9 is : "<< (s.upper_bound(9) == s.end()) <<"\n"; //true =1 and false = 0

    cout<<"erasing begining element of set : ";
    s.erase(s.begin()); 
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";

    cout<<endl<<endl;
    
}

//.........................................................................................
/*
// (1) Ordered Set
#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);
    cout<<"starting insertion is : ";
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";
    
    cout<<"size is : "<< s.size()<<"\n";
    s.erase(2); 
    s.erase(7);
    cout<<"elements after erasing : ";
    for(auto i=s.begin(); i!=s.end(); i++)
          cout<< *i <<" ";
    cout<<"\n";
    cout<<"reversed elements is : ";
    for(auto i=s.rbegin(); i!=s.rend(); i++)
          cout<< *i <<" ";
    cout<<"\n";
    
    cout<<"size again after erasing elements is : "<<s.size()<<"\n";
    
    set<int,greater<int>> st;
    st.insert(22);
    st.insert(23);
    st.insert(24);
    st.insert(25);
    cout<<"Second insertion is : ";
    for(auto i : st)
        cout<<i<<" ";
    cout<<"\n";

    cout<<"lower bound of 1 is : "<< *s.lower_bound(1) <<"\n";
    cout<<"lower bound of 3 is : "<< *s.lower_bound(3) <<"\n";     
    cout<<"lower bound of 5 is : "<< *s.lower_bound(5) <<"\n"; 
    cout<<"upper bound of 5 is : "<< *s.upper_bound(5) <<"\n"; 
    cout<<"upper bound of 9 is : "<< (s.upper_bound(9) == s.end()) <<"\n"; //true =1 and false = 0

    cout<<"erasing begining element of set : ";
    s.erase(s.begin()); 
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";
    
}
*/