#include<stdio.h>
#include<conio.h>

void swap(int *x, int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
}

//bubble sort
void bubbleSort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
            
        }
    }
}

//insertion sort
void insertionSort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(arr[i]<arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }
}

//selection sort
void selectionSort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int position=i;
        for(j=i+1;j<n;j++){
            if(arr[position]>arr[j]){
                position=j;
            }
        }
        swap(&arr[position],&arr[i]);
    }
    
}

//Quick sort
int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int i=low-1,j;
    for(j=low;j<high;j++){
        if(pivot>arr[j]){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {   
       
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high); 
    }
}

int main(){
    int arr[]={5,3,2,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]),i;
    int low=0,high=n-1;
    quickSort(arr,low,high);
    // selectionSort(arr,n);
    printf("sorted array is:\n ");
    printArray(arr,n);
    return 0;
}
