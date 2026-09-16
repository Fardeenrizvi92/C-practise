// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//          cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[minIndex]>arr[j]){
//                minIndex=j;
//                 //minElement=arr[minIndex];
                
//             }
            
//         }
//         swap(arr[i],arr[minIndex]);
        
//     }
//     for(int i=0;i<n;i++){
//          cout<<arr[i]<<" ";
//     }
// }



//p ut the last element(key) in its correct position in an sorted array
//eg arr= 2 7 9 12 5
//output = 2 5 7 9 12
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    int i=n-1;//i is what need to be inserted
    int j=i-1;//j is to check cond that where it need to be inserted
    int key=arr[i];
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }

}
