# problem-solving-project
#include<iostream>
#include<string>
using namespace std;
//han3mel partion lel instructor w el user
//a sample of the instructor schedule
struct instructor
{
    string subject;
    string day;
    int starttime;
    int endtime;
};

int main() {
    instructor uni;
    cout << "enter the subject name";
        cin >> uni.subject;
    cout << "enter the subject day";
        cin >> uni.day;
    cout << "enter the subject start time";
        cin >> uni.starttime;
    cout << "enter the subject end time";
        cin >> uni.endtime;
    //display the scedule of this subject
    cout << uni.subject<<endl;
    cout << uni.day<<endl;
    cout << uni.starttime<<endl;
    cout<<uni.endtime<<endl;



}

