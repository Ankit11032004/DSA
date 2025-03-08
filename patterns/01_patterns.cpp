//Patterns Notes
//For the outer loop count the no. of lines.
//For the inner lopp count the no. of column,and connect them somehow to the rows.
//Print them '*' inside the innner for loop
//observe symmetry[optiinal]
#include <iostream>
using namespace std;
void print(int n){
    for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
   cout<<"*";
    } 
cout<<endl;
}
}
int main() {
    int t;
    cout<<"Enter the no.";
    cin>>t;
    print(t);
}
