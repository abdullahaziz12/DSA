#include<iostream>
#include<ctime>
#include<cstdlib>
#include <string>
using namespace std;
bool seat_car[5][3]={{false,false,true},{true,true,true},{true,true,true},{true,true,true},{true,true,true}};
bool booked_car[5]={false,false,true,true,false};
void avalible_cars(){
    cout<<"\t\tAvalible Cars Are"<<endl;
    for(int i=0;i<5;i++){
        if (booked_car[i]!=true){
            cout<<i+1<<endl;
        }
    }
}
void avalible_seats(int sel_car){
    cout<<"Avalible Seats Are"<<endl;
    for(int i=0;i<3;i++){
         if(seat_car[sel_car-1][i]!=false){
             cout<<i+1<<endl;
         }
    }
}
void set_status_reserved(int sel_car,int sel_seat){
    seat_car[sel_car-1][sel_seat-1]=false;
    int count=0;
    for(int i=0;i<3;i++){
        if(seat_car[sel_car-1][i]==false){
            count++;
        }
    }
    if(count==3){
        booked_car[sel_car-1]=true;
    }
}
void check_token_change_status(string token){
    if(isdigit(token[0])&& isdigit(token[6])){
        int car=token[0]- '0';
        int seat=token[6]- '0';
        if(car<=5&&seat<=3){
            seat_car[car-1][seat-1]=true;
            if(booked_car[car-1]==true){
            booked_car[car-1]=false;
            }
            cout<<"Your Seat "<<seat<<" in Car "<<car<<" is Successfully Unreserved"<<endl;
        }
        else{
            cout<<"Invalid Token!Enter Valid token"<<endl;
        }
    }
    else{
        cout<<"Invalid Token!Enter Valid token";
    }
}
string gen_token(int sel_car,int sel_seat){
    srand(time(0));
    string rand_token="abcdefghsfnmy12320971";
    string token=to_string(sel_car);
    for(int i=0;i<5;i++){
        token+=rand_token[rand() % rand_token.length()];
    }
    token+=to_string(sel_seat);
    return token;
}
void reservation(){
    int sel_car;
    int sel_seat;
    avalible_cars();
    cout<<"Select a Car:";
    cin>>sel_car;
    if(sel_car<0 || sel_car>5){
        cout<<"Select Valid Car! Aggaints this not Avalible"<<endl;
    }
    else{
        if(booked_car[sel_car-1]==false){
            avalible_seats(sel_car);
            cout<<"Select Your Seat:";
            cin>>sel_seat;
            if(sel_seat<0 || sel_seat>3){
                cout<<"Select Valid Seat! Aggaints this not Avalible"<<endl;
            }
            else{
                if(seat_car[sel_car-1][sel_seat-1]==true){
                    set_status_reserved(sel_car,sel_seat);
                    cout<<"Your Seat "<<sel_seat<<" in Car "<<sel_car<<" is Reseverd aggainst token:"<<gen_token(sel_car,sel_seat)<<endl; 
                }
                else{
                    cout<<"Select Valid Seat! Aggaints this not Avalible"<<endl;
                }

            }
        }
        else{
           cout<<"Select Valid Car! Aggaints this not Avalible"<<endl;
        }
    }

}
void cancel_reservation(){
    string token;
    cout<<"Enter Your Token:";
    cin>>token;
    if(token.length()==7){
        check_token_change_status(token);
    }
    else{
        cout<<"Invalid Token!Enter Valid token"<<endl;
    }
}
int main(){
    while(true){
        int option;
        cout<<"\t\tShared Car Seats Reservation System"<<endl;
        cout<<"1.Book a Seat \t2.Cancel Your Reservation\t3.Terminate Program\nEnter:";
        cin>>option;
        if(option==3){
            cout<<"Program is Terminated......";
            break;
        }
        else if(option==1){
            reservation();
        }
        else if(option==2){
            cancel_reservation();
        }
        else{
            cout<<"You Entered the Wrong Option...";
        }
    }
}