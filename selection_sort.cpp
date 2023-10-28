using namespace std;
#include<iostream>
#include<stdlib.h>
#include<limits.h>

void selection_sort(int x[],int n)
{
    int index,i,j,large;
    for(i=n-1;i>0;i--)
    {
        large = x[0];
        index = 0;
        for(j=0;j<=i;j++)
        {
            if(x[j]>large)
            {
                large = x[j];
                index = j;
            }
        }
        x[index] = x[i];
        x[i] = large;
    }
}

void input(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the elements : ";
        cin>>x[i];
    }

}

void show(int x[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<x[i]<<"\t";
    }
}

int main()
{
    int a[10],n;
    input(a,10);
    show(a,10);
    cout<<endl;
    selection_sort(a,10);
    show(a,10);
    return 0;
}

