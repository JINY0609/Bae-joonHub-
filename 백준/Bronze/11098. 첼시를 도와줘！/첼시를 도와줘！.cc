#include <iostream>
using namespace std;
struct member{
    char name[21]="";
    int value;
};
struct group{
    member n[100];
};

int main(){
    int test;
    int number;
    int max_value;
    int max_person=0;
    
    cin>>test;
    
    group mn[100];
    for(int i=0; i<test; i++)
    {
        max_value=0;
        cin>>number;
        for(int j=0; j<number; j++)
        {
            cin>>mn[i].n[j].value >>mn[i].n[j].name;
            if(max_value<mn[i].n[j].value)
            {
                max_value = mn[i].n[j].value;
                max_person = j;
            }
                
        }
        cout<<mn[i].n[max_person].name<<endl;
        
    }
}