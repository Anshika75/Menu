/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int choice =1, itemno, total=0;
    do{
        cout<<"What do you want to order? \n 1. Maggi: Rs.30 \n 2. Chocolate: Rs.45 \n 3. Ice-Cream: Rs.40 \n 4. Coffee: Rs. 70\n 5. Pizza: Rs.100\n Please enter your item code: ";
        cin>>itemno;
        switch(itemno) {
            case 1:
                cout<<"Maggi added to your ordered list.";
                total = total + 30;
                break;
            case 2:
                cout<<"Chocolate added to your ordered list.";
                total = total + 45;
                break;
            case 3:
                cout<<"Ice-Cream added to your ordered list.";
                total = total + 40;
                break;
            case 4:
                cout<<"Coffee added to your ordered list.";
                total = total + 70;
                break;
                
            case 5:
                cout<<"Pizza added to your ordered list.";
                total = total + 100;
                break;
            default:
                cout<<"Please enter correct item code.";
}
        cout<<"\nEnter 1 to add one more item. Enter 0 to quit.\n";
        cin>>choice;
    }
    while(choice == 1);
    cout<<"Your total is: "<<total;
}




