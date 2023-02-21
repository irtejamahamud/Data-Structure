#include<stdio.h>

int main(){
    int i,j,a[100],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nArray elements are: ");
    for(i=0;i<n;i++)
        printf("%d",a[i]);


//insert(a,n);
deletea(a,n);


}
void insert(int a[],int n){
int i,x,lo;
printf("enter the value and position you want to add:");
scanf("%d%d",&x,&lo);
for(i=n;i>=lo;i--){
    a[i]=a[i-1];
}
n++;
a[lo-1]=x;
printf("inserted\n");
printf("\nArray elements are: ");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
void deletea(int a[],int n){
int i,lo;
printf("\nenter position you want to delete:");
scanf("%d",&lo);
for(i=lo-1;i<n-1;i++){
    a[i]=a[i+1];
}
n--;

printf("Deleted\n");
printf("\nArray elements are: ");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
