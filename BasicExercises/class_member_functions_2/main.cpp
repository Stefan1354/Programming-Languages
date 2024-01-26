#include <iostream>

using namespace std;

class Takeaway{
public:
    void WantsChicken(){
        chicken = true;
    }

    void WantsChips() {
        chips = true;
    }

    void WantsFish(){
        fish = true;
    }

    bool chicken;
    bool chips;
    bool fish;
};

int main()
{
    char yn1;
    char yn2;
    char yn3;

    Takeaway CustomerOne = {false, false, false}; //klientyt ne iska nishto dokato ne go popitame

    cout<<"Do you want chicken? (Y/N)"<<endl;
    cin>>yn1;
    if(yn1 == 'y' || yn1 == 'Y'){
        CustomerOne.WantsChicken();
    }

    cout<<"Do you want chips? (Y/N)"<<endl;
    cin>>yn2;
    if(yn2 == 'y' || yn2 == 'Y'){
        CustomerOne.WantsChips();
    }

    cout<<"Do you want fish? (Y/N)"<<endl;
    cin>>yn3;
    if(yn3 == 'y' || yn3 == 'Y'){
        CustomerOne.WantsFish();
    }

    cout<<"CustomerOne wants: ";
    if(CustomerOne.fish == true){
        cout<<" fish ";
    }

    if(CustomerOne.chicken == true){
        cout<<" chicken ";
    }

    if(CustomerOne.chips == true){
        cout<<" chips ";
    }
    cout<<"."<<endl;


    return 0;
}
