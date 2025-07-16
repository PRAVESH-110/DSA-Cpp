long long int binarySearch(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        long long int sqr=mid*mid; //since mid is the sqrt, so we consider n as mid
        if(sqr==n){
            return mid;
        } 
        if(sqr<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double morePrecision(int n,int precision, int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j=j<n;j=j+factor){
        ans=j;
        }
    
    }
    return ans;
}
int floorSqrt(int n)
{
    return binarySearch(n);
    // Write your code here.
    
}


