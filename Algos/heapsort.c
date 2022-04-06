#include<stdio.h>
void heapify(int n,int a[])
{
    int v,heap,k,j;
    for(int i=n/2;i>=1;i--)
    {
        k=i;
        v=a[k];
        heap=0;
        while(!heap && 2*k<=n)
        {
            j=2*k;
            if(j<n && a[j+1]>a[j])
                j++;
            if(v>=a[j])
                heap=1;
            else
            {
                a[k]=a[j];
                k=j;
            }
            a[k]=v;
        }
    }
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n+1];
    printf("Enter the elements: ");
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);

    heapify(n,a);

    for(int i=0;i<n;i++)
    {
        swap(&a[1],&a[n-i]);
        heapify(n-i-1,a);
    }

    printf("After sorting the elemnts are: ");
    for(int i=1;i<=n;i++)
        printf("%d ",a[i]);
    return 0;
}
