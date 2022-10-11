#include<bits/stdc++.h>
using namespace std;

struct Item
{
    int profit;
    int weight;
};

bool comp(Item a, Item b)
{
    double r1=(double)a.profit / (double)a.weight;
    double r2=(double)b.profit / (double)b.weight;
    return r1>r2;
}

double fracKnapsack(int W, Item arr[], int n)
{
    sort(arr,arr+n,comp);
    int currentWeight=0;
    double finalProfit=0;
    for(int i=0;i<n;i++)
    {
        if(currentWeight+arr[i].weight<= W)
        {
            currentWeight += arr[i].weight;
            finalProfit += arr[i].profit;
        }
        else
        {
            int remain = W-currentWeight;
            finalProfit += (arr[i].profit/(double)arr[i].weight)*(double)remain;
            break;
        }
    }
    return finalProfit;
}

int main()
{
    int n;
    cout << "Enter number of items: ";
    cin >> n;
    int capacity;
    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;
    struct Item i[n];
    for(int j=0;j<n;j++)
    {
        cout << "Enter profit of item " << j+1 << ":";
        cin >> i[j].profit;
        cout << "Enter weight of item " << j+1 << ":";
        cin >> i[j].weight;
    }
    cout<<"Final Maximum Value is: "<<fracKnapsack(capacity,i,n);
    return 0;
}

