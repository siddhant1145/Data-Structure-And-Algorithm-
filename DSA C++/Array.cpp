#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter size of array :: ";
    cin>>n;

    if (n == 0 || n<1){
        cout << "Maximum "<<0<<endl<<"Minimum "<<0<<endl;
    }
    else{

        int a[n];
        for(int i = 0 ; i < n ; i ++){
            cout << "Enter item "<<i + 1<<endl;
            cin >> a[i];
        }
        
        int max = a[0];
        int min = a[0];
        for (int i = 0; i < n; ++i)
        {
           if (a[i] > max){
                max = a[i];
           }
           if (a[i] < min){
                min = a[i];
           }
        }
        cout  << "Maximum : "<<max<<endl;
        cout  << "Minimum : "<<min<<endl;
    }
    
    return 0;
}