#include<iostream>
using namespace std;
void sortfunction(int *arr,int s,int e){
     int m=(e+s)/2;
    int len1=(m-s)+1;
    int len2=e-m;
    int  *arr1=new int[len1];
    int *arr2=new int[len2];
    int mian_arr_start=s;

    for(int f=0;f<len1;f++)
  {
      arr1[f]=arr[ mian_arr_start++];
  }
     
      mian_arr_start=m+1;
   for(int f=0;f<len2;f++)
  {
      arr2[f]=arr[ mian_arr_start++];
  }
  int index1=0;
  int index2=0;
  mian_arr_start=s;
  while(index1<len1 && index2<len2){
    if(arr1[index1]>arr2[index2])
    {
        arr[mian_arr_start++]=arr2[index2++];

    }
    else
    {
         arr[mian_arr_start++]=arr1[index1++];

    }
  }
  while(index1<len1)
  {
      arr[mian_arr_start++]=arr1[index1++];

  }
   while(index2<len2)
  {
      arr[mian_arr_start++]=arr2[index2++];

  }
//must be deleted bcz heap
  delete []arr1;
  delete []arr2;

}
void mergesort(int *arr,int s,int e){
    if(s>=e)
    {
         return ;
    }
    int m=(e+s)/2;
    mergesort(arr,s,m);
    mergesort(arr,m+1,e);
    sortfunction(arr,s,e);

}
int main(){
    int n=6;
    int arr[6]={3,1,0,7,8,5};
    mergesort(arr,0,n-1);
    for(int i=0;i<6;i++){
        cout<<"in main "<<arr[i]<<endl;

    }

    
    return 0;
}