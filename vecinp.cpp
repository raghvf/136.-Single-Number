#include <iostream>
#include <vector>
using namespace std;

int vecJ(){
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    vector<int> vec(n);

    cout<<" Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }

    cout<<"Elements are : "<<endl;
    for(int i=0; i<n; i++){
        cout<<vec[i]<<" "<<endl;
    }

    
}

int main(){
    vecJ();

    return 0;
}