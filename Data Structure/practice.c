#include<stdio.h>
void selectionsort(int a[],int n){
int min_index,i,j,temp;
for(i=0;i<n;i++){
    min_index=i;
    for(j=i+1;j<n;j++){
        if(a[j]<a[min_index]){
            min_index=j;
        }
    }
    if(min_index!=i){
        temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }
}
}

int main(){
int a[100],n,i;
printf("enter the row of matrix:");
scanf("%d",&n);

printf("enter the elements of matrix:");
for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
}
selectionsort(a,n);
printf("the elements of matrix:");
for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
