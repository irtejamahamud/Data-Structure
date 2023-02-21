#include<stdio.h>
int main(){
int a[100],n,i;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements of array: ");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printarray(a,n);
//insertionsort(a,n);
//selectionsort(a,n);
marge(a,0,n-1);
printarray(a,n);
return 0;
}
void printarray(int a[],int n){
printf("\nElements are: ");
for(int i=0;i<n;i++)
    printf("%d ",a[i]);

}
void marge(int a[], int l, int h){
if(l<h){
      int  mid=l+(h-l)/2;
    marge(a,l,mid);
    marge(a,mid+1,h);

    margesort(a,l,mid,h);
}
}
void margesort(int a[],int l,int m,int h){
int i,j,n1,n2,k;
n1=m-l+1;
n2=h-m;
int L[n1],R[n2];

for (i = 0; i < n1; i++)
		L[i] = a[l + i];
	for (j = 0; j < n2; j++)
		R[j] = a[m + 1 + j];

i=0;
j=0;
k=l;
while(i<n1 && j<n2){
    if(L[i]<=R[j]){
        a[k]=L[i];
        k++;
        i++;
    }else{
    a[k]=R[j];
    j++;
    }
    k++;
}
while(i<n1){
    a[k]=L[i];
    i++;
    k++;
}
while(j<n2){
    a[k]=R[j];
    j++;
    k++;
}


}
