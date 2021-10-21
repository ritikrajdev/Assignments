#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[7] = {64,34,25,12,22,11,90};
    int counter = 1;
    while(counter < 7)
    {
       for(int i=0;i<7-counter;i++)
       {
           if(array[i]>array[i+1])
           {
               int temp;
               temp = array[i];
               array[i] = array[i+1];
               array[i+1] = temp;
           }
       }
       counter++;
    }
    for(int i=0;i<7;i++)
    {
        cout<<array[i]<<" ";
    }
}