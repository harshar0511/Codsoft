#include<bits/stdc++.h>
using namespace std;
class todo{
    int id;
    string task;
    string status;
public:
    todo()
    {
        id=0;
        task="";
        status="PENDING";
    }

    
    bool add_task(string task1,int id1)
    {
    task=task1;
    id=id1;
    
    }
    bool edit_task(string newt,int id2)
    {
        task=newt;
        id=id2;
        return true;
    }
    int getid()
    {
        return id;
    }  
    string gettask()
    {
        return task;
    }  
    string stat()
    {
        return status;
    } 
    bool update(char statu)
    {
        status=(statu=='Y')? "FINISH":"PENDING";
        return true;
    }

};
int main()
{   int c=0,opt,menu_opt,edit,id1;
    char statu;
    list<todo>td;
    string t1,ud1;
    list<todo>::iterator it;
    td.clear();
    while(1)
{       line1: cout<<"*********************"<<endl;
        cout<<"----->TODO LIST<-----"<<endl;
        cout<<"*********************"<<endl;
        todo tds;
        if(td.empty())
        {
            cout<<"LIST IS EMPTY PLEASE ADD\n";
            cout<<"1->MENU"<<endl;
            cout<<"2->QUIT"<<endl;
            cout<<"INPUT TO PROCEED\n";
            cin>>opt;
            if(opt==1)
            goto line;
            else if(opt==2)
            break;
            else
            goto line1;
        }
        line:cout<<"MENU \n";
            cout<<"1->ADD TODO\n";
            cout<<"2->DISPLAY TODOS\n";
            cout<<"3->EDIT TASK\n";
            cout<<"4->UPDATE STATUS\n";
            cout<<"5->DELETE THE TASK\n";
            cout<<"6->QUIT\n";

            
            cin>>menu_opt;
            if(menu_opt==1)
            {
                
                    c++;
                    cin.clear();
                    cout<<"ENTER THE TASK NAME\n";
                    cin.ignore();
                    getline(cin,t1);
                    tds.add_task(t1,c);
                    td.push_back(tds);
                    
                
            }
            else if(menu_opt==2)
            {
                    for(it=td.begin();it!=td.end();it++)
                    {
                        cout<<it->getid()<<"\t"<<it->gettask()<<"\t"<<it->stat()<<endl;
                    }
            
            }
            else if(menu_opt==3)
            {
             for(it=td.begin();it!=td.end();it++)
                    {
                        cout<<it->getid()<<"\t"<<it->gettask()<<"\t"<<it->stat()<<endl;
                    }  
                    cout<<"ENTER ID TO EDIT THE TASK\n";
                    cin>>id1;
                    for(it=td.begin();it!=td.end();it++)
                    {
                        cout<<it->getid()<<"\t"<<it->gettask()<<"\t"<<it->stat()<<endl;
                        if(it->getid()==id1)
                        {
                            cout<<"ENTER NEW TASK NAME\n";
                            cin.clear();
                            cin.ignore();
                            getline(cin,ud1);
                            
                            if(it->edit_task(ud1,id1))
                            {
                                cout<<"TASK ID "<<it->getid()<<" EDITED SUCCESSFULLY\n";
                            }
                            
                            break;    
                        }
                    }   
            }
            else if(menu_opt==4)
            {
                cout<<"ENTER ID TO MARK THE TASK\n";
                    cin>>id1;
                    for(it=td.begin();it!=td.end();it++)
                    {
                        cout<<it->getid()<<"\t"<<it->gettask()<<"\t"<<it->stat()<<endl;
                        if(it->getid()==id1)
                        {   
                            cout<<"Y->FINISH\n";
                            cout<<"N->PENDING\n";
                            cin>>statu;
                            if(it->update(statu))
                            {   cout<<"TASK UPDATED SUCCESSFULLY\n";
                                cout<<it->getid()<<"\t"<<it->gettask()<<"\t"<<it->stat()<<endl;
                            }
                        }
                    }
            }
            else if(menu_opt==5)
            {
                cout<<"ENTER ID TO DELETE THE TASK\n";
                    cin>>id1;
                    for(it=td.begin();it!=td.end();it++)
                    {
                        cout<<it->getid()<<"\t"<<it->gettask()<<"\t"<<it->stat()<<endl;
                        if(it->getid()==id1)
                        {  
                           it=td.erase(it);
                        }
                    } 
            }
            else{
                cout<<"wrong entry\n";
                break;
            }
}
                
    
    return 0;
}