#include<iostream>
using namespace std;

//Find maximum of three numbers .!

void maxOfThree(){
    int num1,num2,num3;
    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;
    if(num1>num2){
        if (num1>num3) cout<<num1<<" is greater !";
           }
    else if (num2>num3) cout<<num2<<" is greater !";

    else cout<<num3<<" is greater !";

    // using built in function
    int ans1=max(num1,num2);
    int res=max(ans1,num3);
    cout<<res<<" is greater !";
}

// Counting from 1 to n

void Counting(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    for (int i = 1; i <=n; i++) cout<<i<<" ";
};

// Check prime number or not 

void PrimeNum(){
    int n;
    cout<<"Enter any positive number for checking prime number : ";
    cin>>n;
    if(n<0) cout<<"Its negative number !!";
    if(n==0 || n==1){
        cout<<"This is not a prime number !";
        exit(0);
    } 
    int count=0;
    for (int i = 2; i <n; i++)
    {
        if(n%i==0) count++;
    }
    if(count) cout<<"This is not a prime number !";
    else cout<<"This is a prime number !";
}

// check even or odd

void EvenOdd(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    if(n%2==0) cout<<"Even ";
    else cout<<"Odd ";
}

// Sum of all numbers upto 1->n

void sumOfAllnum(){
    int n;
    cout<<"Enter any number : ";
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++) sum+=i;
    cout<<sum;
}

// Sum of all even numbers upto 1->n

void sumOfAllEvenNum(){
    int n,sum=0;
    cout<<"Enter any number : ";
    cin>>n;
    for (int i = 1; i <= n; i++) if (i%2==0) sum+=i;
    cout<<sum;
}

int main(){
// maxOfThree();
// Counting();
PrimeNum();
// EvenOdd();
// sumOfAllnum();
// sumOfAllEvenNum();

return 0;
}