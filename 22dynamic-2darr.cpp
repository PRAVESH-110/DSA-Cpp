//program to create a 2D dynamic array in C++ and also release the memory
#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> col;

    int** arr= new int*[row];
    for (int i=0;i<row;i++){
        arr[i]=new int [col];
    }
 
    //input
    for( int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>> arr[i][j];
        }
    }
    //output
    for( int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<< arr[i][j];
        }
        cout<<endl;
    }

    //releading memory using 'delete' keyword
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete [] arr;

    return 0;
    
}