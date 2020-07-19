#include<iostream>
using namespace std;

void bubbleSort(int[],int);
void selectionSort(int [], int);
void swap(int &,int &);

int main()
{
    const int SIZE=20;
    int values[SIZE]={6,1,5,2,4,3,10,9,8,7,15,13,14,12,11,20,19,18,17,16};//unsorted 20 integers
    
    //display unsorted array
    cout<<"The unsorted values:\n";
    for (auto element:values){
        cout<<element<<" ";
    cout<<endl;
    }
    //call bublesort function to sort the array
    bubbleSort(values,SIZE);
    
    //sort the array using bubble sort
    cout<<"The sorted values:\n";
    for(auto element:values){
        cout<<element<<" ";
    cout<<endl;
    }
    //call selection sort function to sort the array
    selectionSort(values,SIZE);
    
    //sort the array using selection sort
    cout<<"The sorted values:\n";
    for(auto element:values){
        cout<<element<<" ";
    cout<<endl;
    }
    
    return 0;
    
}
//the bubble sort function
void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;
    int countSwap=0;
    for(maxElement=size-1; maxElement>0;maxElement--){
        // for loop to run all values from the fisrt value in the array
        for(index=0;index<maxElement;index++){
            
            // if element with smaller index is greater than element with index+1, then swap the two values
            if(array[index]>array[index+1]){
                swap(array[index],array[index+1]);
                countSwap=countSwap+1;//count swap times
            }
        }
        
    }
    cout<<"Bubble Sort Swap count is "<<countSwap<<endl;
    
}
//selection sort function
void selectionSort(int array[],int SIZE)
{
    int minIndex, minValue;
    int countSwap1=0;// initialize swap count as 0;
    
    //for loop to run elements from first element in the array to the last one
    for(int start=0; start <(SIZE-1);start++){
        minIndex=start;// initial minimum index as start, start will be increase 1 as very loop, so minimum index is increase by 1
        minValue=array[start]; // minimum value is the array with minimum index in every loop
        
        //compare array[start+1] to array[start]
        for(int index=start+1; index<SIZE; index++){
            
            //if array[start+1] is less than minimum value which is array[start] value,
            if(array[index] < minValue){
                minValue=array[index];//then minimum values is assigned by array[start+1]
                minIndex=index;//minimum index is then index which is start+1
                
            }
            
        }
        swap(array[minIndex],array[start]);
        countSwap1=countSwap1+1;
        
    }
    cout<<"Selection Sort Swap count is "<<countSwap1<<endl;
}

//swap function
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}










