#include<iostream>
using namespace std;
int main(){
    int row,col;
    // for(row=1; row<=5; row++){
    //     for(col=1; col<=5; col++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(row=1; row<=5;row++){
    //     for(col=1;col<=5;col++){
    //         cout<<row<<" ";
    //     }
    //     cout<<endl;
    // }




    // 1 4 9 16 25 
    // 1 4 9 16 25 
    // 1 4 9 16 25 
    // 1 4 9 16 25 
    // 1 4 9 16 25
    // for(row=1;row<=5;row=row+1){
    //     for(col=1; col<=5;col++){
    //         cout<<col*col<<" ";
    //     }
    //     cout<<endl;

    // }



    // a a a a a 
    // b b b b b 
    // c c c c c 
    // d d d d d 
    // e e e e e 
    for(row=1;row<=5;row++){
        for(col=1; col<=5; col++){
            char name='a'+(row-1);
            cout<<name<<" ";
        }
        cout<<endl;

    }
}



