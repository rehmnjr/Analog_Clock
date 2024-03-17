# include <bits/stdc++.h>
# include <windows.h>
 using namespace std; 

int main (){
int hr=0, mint=0, sec=0;
cout<<"Enter the time in fromat HH:MM:SS : "<<endl;
cin>>hr>>mint>>sec;
while(true){
while(hr<24){
while(mint<60){
while(sec<60){
    Sleep(1000);
    system("cls");
    cout<<hr<<" : "<<mint<<" : "<<sec<<endl;
     sec++;
}
mint++;
sec=0;
}
hr++;
mint=0;
}
hr=0;
}
    return 0;
}