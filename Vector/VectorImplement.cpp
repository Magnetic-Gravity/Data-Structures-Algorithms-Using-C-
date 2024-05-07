#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
  vector<int>v;
  v.push_back(2);
  v.push_back(1);
  v.push_back(1);
  v.push_back(5);
  v.push_back(4);
  v.push_back(0);
  v.push_back(3);
  v.push_back(7);
   //vector v 
  cout<<"Vector v is: ";
  for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
  }
   
   //vector iterator
   cout<<"\n   Vector iterator is: ";
   vector<int>::iterator it;
      for(it=v.begin(); it!=v.end(); it++){
          cout<<*it<<" ";
      }
      //auto element of vector
     cout<<"\nVector auto element is: ";
     for(auto element: v){
         cout<<element<<" ";
     }
     
     //removing element from back
     v.pop_back();
     v.pop_back();

    //vector v2 
     cout<<"\n    Vector v2 is: ";
     vector<int>v2(3,50);// 50 50 50
     for (int x : v2){
        cout << x << " ";
     }
     cout<<endl;

      //Swap of elements
      cout<<"After Swapping: ";
      swap(v,v2);       //   v.swap(v2);
      cout<<"\n   V is: "; 
      for(auto element: v){
          cout<<element<<" ";
      }
      cout<<"\n   V2 is: "; 
      for(auto element: v2){
          cout<<element<<" ";
      }
      //sorting of elements 
      cout<<"\nElements After Sorting are: "<<" ";
      sort(v2.begin(), v2.end());
      for(auto element: v2){
          cout<<element<<" ";
      }
      //for sum of elements
      int sum=accumulate(v.begin(),v.end(),0);
          cout<<"\n   the sum of Vector V is "<<sum;
      int sum2=accumulate(v2.begin(),v2.end(),0);
          cout<<"\n       the sum of Vector V2 is "<<sum2;
      
      //for maximum and minimum of elements
      int mx=*max_element(v2.begin(),v2.end());
          cout<<"\nMax of Vector V2 is "<<mx;
      int min=*min_element(v2.begin(),v2.end());
          cout<<"\n   Min of Vector V2 is "<<min;
       
      //to convert vector into a prefix sum vector
      //example: v={1,2,3} prefix_sum v={1,3,6} (1 ,1+2=3 ,1+2+3=6)
        cout<<"\n      Prefix sum of vector v2 is: ";
            partial_sum(v2.begin(), v2.end(),v2.begin());
              for(auto element: v2){
                   cout<<element<<" ";
               } 
         
   return 0;  
}