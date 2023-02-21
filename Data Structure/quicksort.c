#include<stdio.h>
int main(){
int a[100],n,i;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements of array: ");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printarray(a,n);
quicksort(a,0,n-1);
printarray(a,n);
return 0;
}
void printarray(int a[],int n){
printf("\nElements are: ");
for(int i=0;i<n;i++)
    printf("%d ",a[i]);

}
void quicksort(int a[],int beg,int end){
int pi;
if(beg<=end){

    pi=partition(a,beg,end);
    quicksort(a,beg,pi-1);
    quicksort(a,pi+1,end);

}

}
int partition(int a[],int beg, int end){
int pivot,i,j,temp;
pivot = beg;
i=beg;
j=end;
while(i<j){
    while(a[i]<a[pivot])
        i++;
    while(a[j]>a[pivot])
        j--;
    if(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
    temp=a[pivot];
    a[pivot]=a[j];
    a[j]=temp;




return j;
}

