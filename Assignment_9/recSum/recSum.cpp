/***********************************************
 * recPrint.cpp
 * Created by Matthew D Mayberry on 3/8/15
 * CS161_400_W2015_Assignment9
 ***********************************************/

#include<iostream>
using namespace std;


double sumArray(double numbers[], int size)
{
    if (size == 0)
        return 0;
    else
        return numbers[size-1] + sumArray(numbers, size-1);
}

int main(){
    
    //implement the dynamic allocation of array
    int size;
    double *a = NULL;
    
    cout << "How many integer would you like to enter?" << endl;
    cin >> size;
    
    a = new double[size];
    
    
    for(int i=0; i<size; i++){
        cout<<"Enter an integer into the array:";
        cin>>a[i];
    }
    
    //call to sumArray
    sumArray(a, size);
    
}