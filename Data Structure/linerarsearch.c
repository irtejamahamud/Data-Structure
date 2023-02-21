#include<stdio.h>
int main(){
int a[100],n,i;
printf("enter the size of array:");
scanf("%d",&n);
printf("enter the elements of array: ");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);
printarray(a,n);
linearserach(a,n);
binarysearch(a,n);
return 0;
}
void printarray(int a[],int n){
printf("\nElements are: ");
for(int i=0;i<n;i++)
    printf("%d ",a[i]);

}

void linearserach(int a[],int n){
int item,i,count=0;
printf("\nenter the value you want to search:");
scanf("%d",&item);

for(i=0;i<n;i++){
    if(a[i]==item){
        count++;
        break;
    }
}
if(count==0){
    printf("\nData not Founded");
}else{
printf("\nFounded");
}
}
void binarysearch(int a[],int n){
int beg,end,mid,item,count=0;
beg=0;
end=n-1;

printf("\nenter the value you want to search:");
scanf("%d",&item);

while(beg<=end){
    mid=(beg+mid)/2;
    if (a[mid]==item){
     count++;
       break;
    }
    else if(a[mid]>item){
        end=mid-1;
    }else{
    beg=mid+1;
    }
}
if(count==0){
    printf("\nData not found");
}else{
printf("\nFounded");
}


}
