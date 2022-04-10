#include <bits/stdc++.h>
using namespace std;

int main(){
   #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 
   int a;
   int ar[] = {1,2,3,4,5,6,8,9,10};
   int temp;
   a=sizeof(ar)/sizeof(ar[0]);
   

   //brut
   for(int j=0; j<a/2; j++){
      swap(ar[j],ar[a-j-1]);  
   }
   for(int j=0; j<a; j++){
      cout<<ar[j];
   }

   //second
   int start=0;
   int end=a-1;
   while(start<end){
      swap(ar[start],ar[end]);
      start++;
      end--;
   }
   for(int j=0; j<a; j++){
      cout<<ar[j];
   }





   //optimised
   //this is optimised only


   
   

   return 0;    
}

