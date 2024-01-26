#include <iostream>

using namespace std;

/*int main()
{
    //The factorial of a number
    //6!=720

    int number;
    cout<<"Enter number: ";
    cin>>number;
    int factorial=1;

    /*for(int i=1; i<=number; i++){
            factorial*=i;
    }
    */
    //6!=6*5*4*3*2*1=720
/*
    for(int i=number; i>=1; i--){
        factorial*=i;
    }
    cout<<"Factorial of number "<<number <<" is: "<<factorial;

    return 0;
}
*/



/*int main()
{
    //for each loop
    /*for(variable: array/range)
    {

    }
    */
    /*int arr[] = {20,10,40,50,25};
    for (int i: arr)
    {
        cout<<"Value = "<<i<<endl;
    }
    return 0;
}
*/

//nested for and do while loops

/*int main()
{
    //Student enter 3 grades or more.
    //I want to grades are between 1 and 5.
    //I want to write average grade between those 3 that entered.

    int grade, sum=0;
    for(int i=0; i<3; i++){

        do{
            cout<<"Enter grade "<<i+1<<": ";
            cin>>grade;
        } while(grade<1 || grade>5);
        sum+=grade;
    }
    cout<<"Sum = "<<sum<<endl;
    cout<<"Average grade = "<<(float)sum/3<<endl;

    return 0;
}
*/

int main()
{
    //nested for loops
    //Multiplication table

    for(int i=1; i<11; i++)
    {
        for(int j=1; j<11; j++){
            cout<<i<<" * "<<j<<" = "<<i * j<<endl;
        }
        cout<< endl;
    }

    return 0;
}
