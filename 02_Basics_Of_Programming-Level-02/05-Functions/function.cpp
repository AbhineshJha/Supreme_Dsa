// #include<iostream>
// using namespace std;
// void PrintLine(){
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<"Sundar ko sundari pasand  hai .!"<<endl;
//     }
    
// }
// int main(){
//  PrintLine();
// return 0;
// }


#include<iostream>
using namespace std;
void PrintC(){
    cout<<"Inside C"<<endl;
}
void PrintB(){
    cout<<"Inside B"<<endl;;
    PrintC();
}
void PrintA(){
   cout<<"Inside A"<<endl;;
   PrintB(); 
}
int main(){

PrintA();
return 0;
}