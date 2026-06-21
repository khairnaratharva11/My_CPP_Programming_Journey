#include<iostream>
using namespace std;

int main()
{
    int length= 0;
    int *Arr= NULL;

    cout<<"Enter the Number of Elements: \n";
    cin>>length;

    //Step1: Allocate the Memory
    Arr= new int (length);
    if(Arr=NULL){
        cout<<"Unable to allocate the Memory";
    }
    else{
        cout<<"Memory is Successfully Allocated";
    }

    //Step2 : Use the Resources

    //Step3: Deallocate the Memory
    delete [] Arr;

    return 0;
}