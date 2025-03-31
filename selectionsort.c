#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        int sindex=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[sindex])
            {
                sindex=j;
            }
        }
        temp=arr[sindex];
        arr[sindex]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
