#include<stdio.h>
void merge(int n,int n1,int n2,int a[],int b[],int c[],int lb)
{
    int i=0,j=0,k=lb;
    while(i<n1 && j<n2)
    {
        if(b[i]<=c[j])
        {
            a[k]=b[i];
            i++;
        }
        else
        {
            a[k]=c[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=b[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=c[j];
        j++;
        k++;
    }

}

void sort(int n,int a[],int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        sort(n,a,lb,mid);
        sort(n,a,mid+1,ub);
        int n1=mid-lb+1,n2=ub-mid;
        int b[n1],c[n2];
        for(int i=0;i<n1;i++)
            b[i]=a[lb+i];
        for(int i=0;i<n2;i++)
            c[i]=a[mid+1+i];
        merge(n,n1,n2,a,b,c,lb);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(n,a,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}