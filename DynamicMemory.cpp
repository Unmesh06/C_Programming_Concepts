#include<iostream>
using namespace std;

int main()
{
    int Size = 0;
    int i = 0;             // loop counter
    float *Marks = NULL;

    cout<<"Enter number of elements : ";
    cin>>Size;

    // Dynamic Memory allocation
    Marks = new float[Size];

    cout<<"Enter your marks : \n";
    
    // Iteration
    //  1      2      3
    for(i = 0; i < Size; i++)
    {
        cin>>Marks[i];  //4
    }

    cout<<"Entered Marks are : \n";
    
    //  1      2      3
    for(i = 0; i < Size; i++)
    {
        cout<<Marks[i]<<"\n";  //4
    }

    delete [] Marks;

    return 0;
}
