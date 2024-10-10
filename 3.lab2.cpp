#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int opt;
    int x,n,i2,fact1,i6,i,i3,i4,fact2,fact5;
    double e,a6,a3,a4,a5;
    char cont;
    do{
        // print the menu of options
        cout << "\nSelect an option from [1-8] according to the menu:" <<endl;
        cout << "[1]. Enter the value of the variable \"x\" and the number of members \"n\" (2<=n<=20)" <<endl;
        cout << "[2]. Calculate the Maclaurin series for the exponential functoin"<<endl;
        cout << "[3]. Calculate the Maclaurin series for the natural logarithm function"<<endl;
        cout << "[4]. Calculate the Maclaurin series for the sinusoidal function"<<endl;
        cout << "[5]. Calculate the Maclaurin series for the cosine functoin"<<endl;
        cout << "[6]. Calculate the Maclaurin series for the rational functoin"<<endl;
        cout << "---------------------------------------------------"<<endl;
        cout << "Enter option: ";
        cin>> opt;
        switch(opt){
            case 1:
                cout<<"Enter 2 numbers"<<endl;
                cin>>x>>n;
                break;
            case 2:
                e=1;
                fact1=1;
                    for (i2=1;i2<=n;i2++){
                        e=e+pow(x,i2)/fact1;
                        fact1 *= fact1 + 1;
                    }
                    cout<<e;
                break;
            case 3:
                a3=x;
                for (i3=2;i3<=n;i3++){
                    a3=a3+(pow((-1),i3+1)*pow(x,i3))/i3;
                }
                cout<<a3;
                break;
            case 4:
                a4=x;
                fact2=1;
                for(i4=1;i4<=n;i4++){
                    fact2=fact2*(i4*2)*(2*i4+1);
                    a4=a4+pow((-1),i4)*((pow(x,2*i4+1))/fact2);
                }
                cout<<a4;
                break;
            case 5:
                    // term and taylor result when i = 0
                fact5 = 1;
                a5=1;
                for(i=1; i<=n; i++){
                    fact5=fact5*(2*i-1)*(2*i);
                    a5 = a5+(pow((-1),i)*pow(x,2*i))/fact5;
                }
                cout<<a5;
                break;
            case 6:
                if (abs(x)>=1){
                    a6=0;
                    for (i6=1;i6<=n;i6++){
                        a6=a6+i6*pow(x,(i6-1));
                    }
                    cout<<a6;
                }
                else{
                    cout<<"Enter value \"x\" again because |x|<1 "<<endl;
                    cin>>x;
                }
                break;
            default:
                cout<<"Check the correctness of the entered option and restart the program";
                break;
        }
        // Request to user continue or not
        cout << "\nDo you want continue [Y|N]? "<< endl;
        cin>> cont;
    }while(cont == 'y' || cont == 'Y');
    cout << "\n The program is over!"<< endl;
    return 0;
}