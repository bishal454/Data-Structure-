#include<bits/stdc++.h>
using namespace std;
int main (){
int mark;
cin>>mark;
if(mark<=30){
    cout<<"F";
}
else if(mark>=45)
{
    cout<<"D";

}
else if(mark>=55){
    cout<<"C";

}
else if(mark>=65)
{
    cout<<"B";
}
else if(mark>=75)
{
    cout<<"B+";
}
else if (mark>=85)
{
    cout<<"A";
}
else if(mark>=100)
{
    cout<<"A+";
}
}
