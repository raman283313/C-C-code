#include<bits/stdc++.h>
using namespace std;
void Pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<"* ";
        }
    cout<<endl;
    }
}
void Pattern2(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;++j){
            cout<<"* ";
        }
    cout<<endl;
    }
}
void Pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;++j){
            cout<<j;
        }
    cout<<endl;
    }
}
void Pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;++j){
            cout<<i;
        }
    cout<<endl;
    }
}
void Pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<"* ";
        }
    cout<<endl;
    }
}
void Pattern6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<j;
        }
    cout<<endl;
    }
}
void Pattern7(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int s=0;s<n-i;s++)
        cout<<" ";
        //stars
        for(int j=0;j<(2*i-1);j++)
        cout<<"*";
    cout<<endl;
    }
}
void Pattern8(int n){
   
    for(int i=0;i<n;i++){
        //space
        for(int s=0;s<i;s++)
        {
            cout<<" ";
        }
        //stars
        for(int j=0;j<(2*(n-i)-1);j++)
        cout<<"*";
      
    cout<<endl;
    }
}
void Pattern9(int n){
   for(int i=1;i<=n;i++){
        //space
        for(int s=0;s<n-i;s++)
        cout<<" ";
        //stars
        for(int j=0;j<(2*i-1);j++)
        cout<<"*";
    cout<<endl;
    }
    for(int i=0;i<n;i++){
        //space
        for(int s=0;s<i;s++)
        {
            cout<<" ";
        }
        //stars
        for(int j=0;j<(2*(n-i)-1);j++)
        cout<<"*";
      
    cout<<endl;
    }
}
void Pattern9b(int n){
    for(int i=1;i<=n;i++){
        //space
       for(int j=0;j<n-i;j++)
       cout<<" ";
        //stars
        for(int s=0;s<i;s++){
            cout<<"* ";
        }
    cout<<endl;
    }
    for(int i=0;i<n;i++){
        //space
        for(int s=0;s<i;s++)
        {
            cout<<" ";
        }
        //stars
        for(int j=0;j<(n-i);j++)
        cout<<"* ";
      
    cout<<endl;
    }
}
void Pattern10(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;++j){
            cout<<"* ";
        }
    cout<<endl;
    }
     for(int i=0;i<n;i++){
        for(int j=1;j<(n-i);j++){
            cout<<"* ";
        }
    cout<<endl;
    }

}

void Pattern11(int n){
    //printing the rows
    int start=1;
    for(int i=0;i<n;i++){
        if(i%2==0) start=0;
        else start=1;
        for(int j=0;j<=i;j++){
        cout<<start;
        start=1-start;
        }
    cout<<endl;
    }
    
}

void Pattern12(int n){
    //printing rows of the pattern
     
        for(int i=1;i<=n;i++){
        //printing value
        for(int j=1;j<=i;j++)
        cout<<j;
        //printing spaces
        for (int s = 1; s<=2*(n-i); s++)
           cout<<" ";
        //printing value in reverse
        for(int j=i;j>=1;j--)
        cout<<j;
    //for the next line
    cout<<endl;
    }
}


int main(){
int n=5;
Pattern10(n);
    return 0;
}