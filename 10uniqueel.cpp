//find unique elemt in an array and print it (print the find function)

//brute force approach- use loop to check each element in the array is unique or not

//most optimal approach using bitwise opertor (XOR- anything XOR weiht itself cancels out , so only unique elements remain)
int findUnique(int *arr, int size){
    int unique = 0;
    for(int i=0;i<size;i++){
        unique = unique ^ arr[i];
    }
}