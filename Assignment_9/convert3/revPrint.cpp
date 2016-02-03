/***********************************************
 * revPrint.cpp
 * Created by Matthew D Mayberry on 3/8/15
 * CS161_400_W2015_Assignment9
 ***********************************************/

#include<iostream>
using namespace std;

void reverse(int *a, int size)
{
    if (size!=0)
    {
        cout << a[size-1]; 
        reverse(a,size-1);
    }
}


int main()
{
    //implement the dynamic allocation of array
    int size;
    int *a = NULL;
    
    cout << "How many integer would you like to enter?" << endl;
    cin >> size;
    
    a = new int[size];
    
    
    for(int i=0; i<size; i++){
        cout<<"Enter an integer into the array:";
        cin>>a[i];
    }
    
    //call the reverse
    reverse(a, size);

   cout << "  " << endl << endl;
   
   return 0; 
}
