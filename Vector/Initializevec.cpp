//7. Initialize an array with consecutive numbers using std::iota :
#include <iostream>
#include <vector>
#include<numeric>
using namespace std;
 
int main()
{
   int arr[5];
   iota(arr,arr+5,1);
   for(int i=0; i<5; i++){
       cout<<arr[i]<<" ";
   }
}
/*
//6. Initializing all elements with a particular value :
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
     vector<int> vect1(10);
      int value = 5;
       fill(vect1.begin(), vect1.end(), value);
        for (int x : vect1)
          cout << x << " ";
}
/*
//5. Initializing from another vector :
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    vector<int> vect1{ 12, 50, 20,34 };
    vector<int> vect2(vect1.begin(), vect1.end());
    for (int x : vect2)
        cout << x << " ";
 
    return 0;
}

/*
//4. Initializing from an array
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[]={4,5,6,7,2};
    int n=sizeof(arr) / sizeof(arr[0]);
   vector<int>v(arr,arr+n);
       for(auto y: v)
            cout<<y<<" ";
   return 0;
}

/*
//3. Initializing like arrays :
#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector<int>v{5,7,8,7,3,6,2};
       for(auto y: v)
            cout<<y<<" ";
   return 0;
}

/*
//2. Specifying size and initializing all values :
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n = 3;
     vector<int> vect(n, 10);
     for (int x : vect)
        cout << x << " ";
 
  return 0;
}
/*
//1. Initializing by pushing values one by one
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
     vector<int> vect;
     vect.push_back(10);
     vect.push_back(20);
     vect.push_back(30);
       for (int x : vect)
             cout << x << " ";
 
   return 0;
}
*/