#include<iostream>
using namespace std;
int main()
{   
    cout<<"Enter the size of input: ";
    int n;
    cin>>n;
    cin.ignore();

    cout<<"Enter the Word for checking: ";
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen=0, maxLen=0;
    int st=0, maxst=0;
    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0')
        {
            if(currLen > maxLen)
            {
                maxLen = currLen;
                maxst=st;
            }
            currLen = 0;
            st = i+1;
        }
        else
        currLen++;
        if(arr[i] == '\0')
        break;


      i++;
    }
    cout<<"Maximum length of a word in the sentence is: ";
    cout<< maxLen << endl;
    cout<<"And that word in the sentence is: ";
    for(int i=0; i<maxLen; i++)
    cout<<arr[i+maxst];
    
    return 0;
}