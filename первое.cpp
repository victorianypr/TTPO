#include <iostream>
#include<cassert>
#include<math.h>
using namespace std;


void sum()
{
    int k,n = 0;
    cout<<"vvedite kol-vo el-tov: ";
    cin>>n;
    int a[n];
    
    for (int i = 0 ; i<n;i++){
        a[i] = rand()%100;
    }
    
    for (int i =0;i<n;i++){
        if (a[i]<0){
            k+=a[i];
        }
    }
    
    cout<<"sum otric el-tov: "<<k;
}

int main()
{
    sum();
    return 0;
}
