/* character is same as normal array but there is a diffrence in input , In this we take input as [n+1]
becouse there is a null character \0 in the last is always present. Null Character tells us that the
sentence has been ended. */
#include<iostream>
using namespace std;
int main()
{
    char arr[100] = "apple";
    int i=0;

    while(arr[i] != '\0')
    {
        cout<<arr[i]<<endl;
        i++;
    }
    return 0;
}