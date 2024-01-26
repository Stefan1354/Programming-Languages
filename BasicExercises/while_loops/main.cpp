#include <iostream>

using namespace std;

/*int main()
{
    //Write out all the numbers between 100-500 that are
    //divisible by 3 and 5.

    int counter = 100;
    while(counter < 501)
    {
        if(counter%3==0 && counter%5==0)
            cout<<counter<<" is divisible\n";
        counter++;
    }
    return 0;
}
*/

/*int main()
{
    //Count digits of a number
    int number;
    cout<<"Number: ";
    cin>>number;

    if(number == 0)
        cout<<"You have entered 0.\n";
    else
    {
        if(number < 0)
            number = -1 * number;

        int counter = 0;
        while(number > 0){
            number /= 10;
            counter++;
        }
        cout<<"Number contains "<<counter<<" digits\n";
    }

    return 0;
}
*/

int main()
{
    //Reversing number

    int number, reversedNumber = 0;
    cout<<"Number: ";
    cin>>number;

    while(number!=0){
            reversedNumber *= 10;
            int lastDigit = number % 10;
            reversedNumber+=lastDigit;
            number /= 10;
    }
    cout<<"Reversed: "<<reversedNumber;

    return 0;
}
