#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct emp
{
    string name,id,address;
    int contact,salary;
};
emp e[100];
int total=0;
void empdata()
{
   int choice;
   cout<<"ENTER NO OF EMPLOYEE TO BE ADDED"<<endl;
   cin>>choice;
   for(int i=total;i<total+choice;i++)
   {
    cout<<"ENTER DATA OF EMPLOYEE"<<i+1<<endl;
    cout<<"Name :";
    cin>>e[i].name;
    cout<<"ID :";
    cin>>e[i].id;
    cout<<"Contact :";
    cin>>e[i].contact;
    cout<<"Salary :";
    cin>>e[i].salary;
   }
   total=total+choice;
}
void show()
{
  if(total!=0)
  {
     for(int i=0;i<total;i++)
     {
        cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name :"<<e[i].name<<endl;
        cout<<"Id :"<<e[i].id<<endl;
      //   cout<<"Address :"<<e[i].address<<endl;
        cout<<"Salary :"<<e[i].salary<<endl;
        cout<<"Contact :"<<e[i].contact<<endl;
     }
  }
  else
  {
    cout<<"SORRY, RECORD EMPTY  "<<endl;
  }
}
void search()
{
    if(total!=0)
    {
     string id;
     cout<<"ENTER ID TO BE SEARCH"<<endl;
     cin>>id;
     for(int i=0;i<total;i++)
     {
      if(id==e[i].id)
      {
          cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name :"<<e[i].name<<endl;
        cout<<"Id :"<<e[i].id<<endl;
      //   cout<<"Address :"<<e[i].address<<endl;
        cout<<"Salary :"<<e[i].salary<<endl;
        cout<<"Contact :"<<e[i].contact<<endl;
        break;
      }
      if(i==total-1)
      {
         cout<<"NO, SUCH RECORD FOUND"<<endl;
      }
     }
    }
    else
    {
       cout<<"YOUR RECORD EMPTY"<<endl;
    }
}
void updata()
{
     if(total!=0)
     {
        string id;
     cout<<"ENTER ID TO BE UPDATED"<<endl;
     cin>>id;
     for(int i=0;i<total;i++)
     {
      if(id==e[i].id)
      {
         cout<<"Previous data"<<endl;
        cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name :"<<e[i].name<<endl;
        cout<<"Id :"<<e[i].id<<endl;
      //   cout<<"Address :"<<e[i].address<<endl;
        cout<<"Salary :"<<e[i].salary<<endl;
        cout<<"Contact :"<<e[i].contact<<endl;
        cout<<"Enter new data"<<endl;
        cout<<"Enter Name :";
        cin>>e[i].name;
        cout<<"ID :";
        cin>>e[i].id;
        cout<<"Contact :";
        cin>>e[i].contact;
        cout<<"Salary :";
        cin>>e[i].salary;
        break;
      }
      if(i==total-1)
      {
         cout<<"NO such record found"<<endl;
      }
     }
    }
     else
     {
      cout<<"Your record is empty"<<endl;
     }
}
void del()
{
  if(total!=0)
  {
     char user;
     cout<<"Press 1 (DELETE FULL RECORDS)"<<endl;
     cout<<"Press 2 (ENTER ID OF SPECIFIC EMPLOYEE)"<<endl;
     user=getch();
     if(user=='1')
     {
      total = 0;
      cout<<"All RECORD DELETED SUCESSFULLY!"<<endl;
     }
    else if(user=='2')
    {
      string id;
     cout<<"ENTER ID OF DATA TO DELETE"<<endl;
     cin>>id;
     for(int i=0;i<total;i++)
     {
      if(id==e[i].id)
      {
         for(int j=i;j<total;j++)
        {
         e[j].name=e[j+1].name;
         e[j].id=e[j+1].id;
         // e[j].address=e[j+1].address;
         e[j].contact=e[j+1].contact;
         e[j].salary=e[j+1].salary;
         total--;
         cout<<"Your required recored is deleted"<<endl;
         break;
        }
        if(i==total-1)
        {
         cout<<"NO, RECORD FOUND "<<endl;
        }
     }
    }
  }
  }
  else
  {
   cout<<"YOUR RECORD EMPTY"<<endl;
  }
}
int main()
{
    cout<<"\n\n\t\tEMPLOYEE MANAGEMENT SYSTEM"<<endl;
    cout<<"\n\n\t\tSIGN UP"<<endl;
    string username,password;
    cout<<"\n\t\tENTER USERNAME :";
    cin>>username;
    cout<<"\n\t\tENTER PASSWORD :";
    cin>>password;
    cout<<"\n\tID IS CREATING, PLEASE WAIT...";
    for(int i=0;i<4;i++)
    {
        cout<<".";
        Sleep(1000);
    }
    cout<<"\n\n\t\tID CREATED SUCESSFULLY"<<endl;
    system("CLS");
    stat:
    system("CLS");
     cout<<"\n\n\t\tEMPLOYEE MANAGEMENT SYSTEM"<<endl;
     cout<<"\n\n\t\tLOGIN:"<<endl;
     string username1,password1;
     cout<<"USERNAME :";
     cin>>username1;
     cout<<"PASSWORD :";
     cin>>password1;
     if(username==username1&&password==password1)
     {
        system("CLS"); 
        char user;
        while(1)
        {
            cout<<"\n\nPress 1(ENTER DATA)"<<endl;
            cout<<"Press 2 (SHOW DATA)"<<endl;
            cout<<"Press 3 (SEARCH DATA)"<<endl;
            cout<<"Press 4 (UPDATE DATA)"<<endl;
            cout<<"Press 5 (DELETE DATA)"<<endl;
            cout<<"Press 6 (LOGOUT)"<<endl;
            cout<<"Press 7 (EXIT)"<<endl;
            user=getch();
            system("CLS");
            switch(user) 
            {
                case '1':
                empdata();
                break;
                case '2':
                show();
                break;
                case '3':
                search();
                case '4':
                updata();
                break;
                case '5':
                del();
                break;
                case '6':
                goto stat;
                break;
                case '7':
                cout<<"Thank You";
            }

        }
     }
     else if(username1!=username)
     {
        cout<<"Your username is incorrect"<<endl;
        Sleep(3000);
        goto stat;
     }
     else if(password1!=password)
     {
        cout<<"Your password is incorrect"<<endl;
        Sleep(3000);
        goto stat;
     }
    return 0;
}