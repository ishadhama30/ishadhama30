/* print

A B C
B C D
C D E 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no.of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            char ch='A'+i+j-2; // i+j-1=1 => i+j-1+'A'-1=1+'A'-1=i+j-2
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}