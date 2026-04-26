
#include<iostream>//It is a headerfile that contains a lot of sets of standard input and output function
using namespace std;//we use it For std::
void bubbleSort(int n,int arr[]);// prototypes
int main()//it returns integer value
{
    int n;//declare the n for array size
    cin>>n;//input n
    int a[n];//declare Array
    for(int i=0;i<n;i++)//it is a loop for receiving array
    {
        cin>>a[i];//input elements of this Array
    }
    bubbleSort(n,a);//call a function
 return 0;//the program is finished
}
void bubbleSort(int n,int arr[])//it is a function that doesn't return value
{
    int Count=0;//it counts the swaps number
    for(int i=0;i<n;i++)//for pass
    {
      for( int j=0;j<n-1;j++)//loop for swaping
      {
          if(arr[j]>arr[j+1])//check
          {
              swap(arr[j],arr[j+1]);//swap if previous number is greater than the next number
            Count++;//Updating and keep the number of swap
          }
      }
    }
    cout<<"Array is sorted in "<<Count<<" swaps."<<"\n";//how many swaps have been
    cout<<"First Element: "<<arr[0]<<"\n";//First element of sorting array
    cout<<"Last Element: "<<arr[n-1]<<"\n";//Last element of sorting array
}