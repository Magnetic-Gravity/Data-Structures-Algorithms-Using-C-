#include <iostream>
#include <deque>
using namespace std;
 
int main()
{
    deque<int> mydeque{ 1, 2, 3, 4, 5 };
    mydeque.push_back(6);
    for (auto it = mydeque.begin();
              it != mydeque.end(); ++it)
        cout << ' ' << *it;

        int sum=0;
        cout<<"\nThe sum is "<<" ";
        while(!mydeque.empty()){
            sum+=mydeque.front();
            mydeque.pop_front();
        }
        cout<<sum;
        return 0;
}