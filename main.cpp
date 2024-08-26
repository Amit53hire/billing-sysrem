#include <iostream>
using namespace std;

int main() {
    int returnTotalBill(void);
   int totalbill= returnTotalBill();
   cout<<"your total bill amount is"<<totalbill;
   cout<<"thank u for your order"<<endl;
}
  int returnTotalBill() {
    char c;
    char item;
    char vegitem;
    int BillAmount=0;
    char SelectAgain;
    char nonvegitem;
    cout<<".........welcome yo online food order........"<<endl;
    cout<<".........please follow below instrucytion........"<<endl;
    cout<<"step 1 : pleae press s to strat your order"<<endl;
    cout<<"step 2 : you can order both veg and non vege food"<<endl;
    cout<<"step 3 : press a to select veg food"<<endl;
    cout<<"step 4 : press b to slelct nonveg food"<<endl;
    cout<<"step 5 : you will get bill after selecting order"<<endl;
    start:
    cin>>c;
    if (c=='s' || c=='S'){
        items:
        cout<<"pelase select yous choice"<<endl;
        cout<<"(a) veg Items      (b)nonveg Items"endl;
        cin>>item;
        if(item=='a' || item=='A'){
            vegItemList:
            cout<<"as per your choice select 1,2,3,4,5"<<endl;
            cout<<"(1)panner : price:900"<<endl;
            cout<<"(2)pizza : price:800"<<endl;
            cout<<"(3)burger : price:700"<<endl;
            cout<<"(4)chinese : price:600"<<endl;
            cout<<"(5)italian : price:500"<<endl;
            cin>>veg Item;
            vegItemList;
            if(vegItem=='1'){
               BillAmount=BillAmount+900;
            }
            else if(vegItem=='2'){
                BillAmount=BillAmount+800;
            }
            else if(vegItem=='3'){
                BillAmount=BillAmount+700;
            }

            else if(vegItem=='4'){
                BillAmount=BillAmount+600;
            }
            else if(vegItem=='5'){
                BillAmount=BillAmount+500;
            }
            else{
                cout<<"you have enter wrong value,please try again"<<endl;
            goto vegItemList;
                
            }
            cout<<"do u want to add for item yes or more"<<endl;
            cin>>SelectAgain;
            if(SelectAgain=='y'){
                goto item;
            }
            else{
                return BillAmount;
            }
        }
        else(item=='b' || item=='B'){
            nonvegItemList:
            cout<<"as per your choice select 1,2,3,4,5"<<endl;
            cout<<"(1)chicken : price:450"<<endl;
            cout<<"(2)pizza : price:400"<<endl;
            cout<<"(3)burger : price:350"<<endl;
            cout<<"(4)chinese : price:300"<<endl;
            cout<<"(5)italian : price:2500"<<endl;
            cin>>veg item;
            nonvegItemList;
            if(nonvegItem=='1'){
               BillAmount=BillAmount+450;
            }
            else if(nonvegItem=='2'){
                BillAmount=BillAmount+400;
            }
            else if(nonvegItem=='3'){
                BillAmount=BillAmount+350;
            }

            else if(nonvegItem=='4'){
                BillAmount=BillAmount+300;
            }
            else if(nonvegItem=='5'){
                BillAmount=BillAmount+2500;
            }
            else{
                cout<<"you have enter wrong value,please try again"<<endl;
            goto nonvegItemList;
                
            }
            cout<<"do u want to add for item yes or more"<<endl;
            cin>>SelectAgain;
            if(SelectAgain=='y'){
                goto item;
            }
            else{
                return BillAmount;
            }
              
        }
        else{
            cout<<"you have enter wrong value,please try again"<<endl;
            goto item;
        }
    }
    else{
        cout<<"you have enter wrong value,please pres s"<<endl;
        goto start;
    }
     BillAmount;
  }
