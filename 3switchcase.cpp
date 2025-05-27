//you are given a number (amount), find the denomination of it in 100rs notes, 50rs notes and 10rs notes (eg: 330 --> 3-hundred rs, 3 10rs notes)
#include<iostream>
using namespace std;
int main(){
    int amount, category;
    int hundred=0, fifty=0, ten=0;

    cout<<"enter the amount";
    cin>>amount;

    while(amount>=10){
        switch(category){
            case 1:
            if(amount>=100){
                hundred= amount/100;
                amount= amount%100;
                cout<<"The denom in 100 are"<<hundred<<endl;
                break;
    
            }
    
            case 2:
            if (amount>=50){
                fifty= amount/50;
                amount = amount%50;
                cout<<"The denom in 50 are"<<fifty<<endl;
                break;
    
            }
            case 3:
            if (amount>=10){
                ten= amount/10;
                amount = amount%10;
                cout<<"The denom in 10 are"<<ten<<endl;
                break;
    
            }
        }
    }
    if (amount > 0) {
        cout << "Remaining amount not covered by 100/50/10 notes: " << amount << endl;
    }

    return 0;
}
