#include <iostream>
#include <list>
using namespace std;


class YoutubeChannel{
private:
string Name;
string OwnerName;
int SubscriberCount;
list<string> PublishedVideoTitles;

public:
YoutubeChannel(string name, string ownerName){
Name = name;
OwnerName = ownerName;
SubscriberCount = 0;
}
int Subscribe(){
    SubscriberCount += 1 ;
    return SubscriberCount;
}
int Unsubscribe(){
    if (SubscriberCount > 0) {
    SubscriberCount -= 1;
    return SubscriberCount;
}
}
string getname(){
    return Name;
}
void setname (string newName){
    Name = newName;
}
void PublishVideo(string videoTitle){
    PublishedVideoTitles.push_back(videoTitle);
}

void GetInfo() {
cout << "Name: " << Name << endl;
cout << "Owner Name: " << OwnerName <<endl;
cout << "Number of Subscribers: " <<SubscriberCount <<endl;
}

};


int main(){
    YoutubeChannel ytChannel(  "izzyTv" , "izzy" );
    ytChannel.PublishVideo( "OOP Tutorial. ");
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Unsubscribe();
    ytChannel.GetInfo();
return 0;
}