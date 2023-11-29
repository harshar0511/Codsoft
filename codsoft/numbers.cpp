#include<bits/stdc++.h>
using namespace std;
class numbers{
    
    int num,guess;
    public:
    int generate(){
        num=rand()%100+5;
        return num;
    }
    void validate(int num)
    {
        do{
        cout<<"GUESS THE NUMBER BEYWEEN 1-100"<<endl;
        cin>>guess;

    

        if(num>guess)//Guess is Lesser than the Generated Number
            cout<<"Guess is Low"<<endl;
        
        
        else if(num<guess)//Guess is Greater than the Generated Number
            cout<<"Guess is To High"<<endl;
        
        
        else//Guess is correct
        
            cout<<"Wow You did it  ****Congrats****"<<endl;
         
    }while(guess!=num);
    }
    
};
int main()
{ int i;
    numbers n;
   i= n.generate();
   cout<<"RANDOM GENERATED NUMBER IS "<<i<<endl;//just to show the number
   n.validate(i);

 return 0;   
}