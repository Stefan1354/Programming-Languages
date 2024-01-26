#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main()
{
    YoutubeChannel ytChannel; //object of class YoutubeChannel
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideoTitles = {"C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

    cout<<"Name: "<<ytChannel.Name<<endl;
    cout<<"OwnerName: "<<ytChannel.OwnerName<<endl;
    cout<<"SubscribersCount: "<<ytChannel.SubscribersCount<<endl;
    cout<<"Videos:"<<endl;
    for(string videoTitle: ytChannel.PublishedVideoTitles){
        cout<<videoTitle<<endl;
    }

    YoutubeChannel ytChannel2; //object of class YoutubeChannel
    ytChannel2.Name = "AmySings";
    ytChannel2.OwnerName = "Amy";
    ytChannel2.SubscribersCount = 2000;
    ytChannel2.PublishedVideoTitles = {"Johnny B - Cover", "Lorelei - Cover"};

    cout<<"Name: "<<ytChannel2.Name<<endl;
    cout<<"OwnerName: "<<ytChannel2.OwnerName<<endl;
    cout<<"SubscribersCount: "<<ytChannel2.SubscribersCount<<endl;
    cout<<"Videos:"<<endl;
    for(string videoTitle: ytChannel2.PublishedVideoTitles){
        cout<<videoTitle<<endl;
    }

    //Vseki pyt kogato iskame da syzdadem obekt ot tozi klas
    //shte trqbva da kopirame gorniq kod i tova naistina se
    //sblyskva s  principa narechen 'ne se povtarqyte',
    //koeto oznachava ne povtarqyte koda si, ako naistina
    //ne trqbva da go povtarqte.
    //Na pomosht v takyv sluchai ni idvat konstruktorite

    return 0;
}
