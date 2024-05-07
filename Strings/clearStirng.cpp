#include<iostream>
#include<string>
using namespace std;
int main()
{
    string abc="family is an important lifelong chapter of our life . You can't deny from the fact.";
    abc.erase(6,16);
       cout<<abc<<endl;
    return 0;
}


/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string abc="family is an important lifelong chapter of our life . You can't deny from the fact.";
    cout<<abc<<endl;
     
     if(!abc.empty())
       cout<<"string is not empty"<<endl;
    return 0;
}
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string abc="family is an important lifelong chapter of our life . You can't deny from the fact.";
    cout<<abc<<endl;
     
     if(!abc.empty())
       cout<<"string is not empty"<<endl;
    return 0;
}
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string abc="family is an important lifelong chapter of our life . You can't deny from the fact.";
    cout<<abc<<endl;  //pehle humarin abc value thi 
     abc.clear(); //iske baad clear function ne sab clear kar diya

     if(abc.empty())
       cout<<"string is empty"<<endl;
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string abc="family is an important lifelong chapter of our life . You can't deny from the fact.";
     abc.clear();
     cout<<abc<<endl;
    return 0;
}*/