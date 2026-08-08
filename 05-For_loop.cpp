#include<iostream>
using namespace std;
int main(){
    // int n,i;
    // cout<<"Enter the Number";
    // cin>>n;
    // for(i=n;i>=1;i=i-1){
    //     cout<<i<<" ";
    // }


    // int i,n;
    // cout<<"Enter the number";
    // cin>>n;
    // for(i=1;i<=n;i=i+3){
    //     cout<<i<<" ";
    // }


    //Table print 
    // int n,i;
    // cout<<"Enter the table Number";
    // cin>>n;
    // for(i=1; i<=10;i=i+1){
    //     cout<<n<<" "<<"X"<<" "<<i<<" "<<"="<<n*i<<endl;
    // }


    //Power print
    // int n,i,pow,num;
    // cout<<"Enter the number";
    // cin>>n;
    // cout<<"Enter the Power";
    // cin>>pow;
    // num=n;

    // for(i=1;i<pow;i=i+1){
    //     num=num*n;
    // }
    // cout<<num;


    // sum of the natural number
//     int n,i,sum=0;
//     cout<<"Enter the Number";
//     cin>>n;
//     for(i=1; i<=n ; i++){
//         sum=sum+i;
//     }
//     cout<<sum<<endl;
// }


// factoria nuumber
    // int n,i,fact=1;
    // cout<<"Enter the Number";
    // cin>>n;
    // for(i=1; i<=n ; i++){
    //     fact=fact*i;
    //     cout<<fact<<endl;
    // }

    // prime number
    int n,i;
    cout<<"Enter the number";
    cin>>n; 
    if(n<2){
        cout<<"Not Prime Number:";
        return 0;
    }
    else{
        for(i=2; i<n; i++){
            if(n%i==0){
                cout<<"Not Prime Number:";
                return 0;
            }

        }   
        cout<<"Prime Number:";
        return 0;
    }
    return 0;


    
}