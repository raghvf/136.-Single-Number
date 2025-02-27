#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter the elements : ";
    for(int i=0; i<vec.size(); i++){
        cin>>vec[i];
    }


    cout<<" Elements are : "<<endl;
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<endl;
    }


    return 0;
}