#include <iostream>


using namespace std;

template <typename T>
T largest(T a, T b, T c){
    if (a>b and a>c){
        return a;
    } else if (b>c){
        return b;
    } else{
        return c;
    }
}
template<typename T>
T swap1(T& a, T& b){
    a=a+b;
    b=a-b;
    a=a-b;
}



double avg4(double n4){
    double num4;
    double sum4=0;
    for (int i=0; i<n4; i++){
        cin>>num4;
        sum4+=num4;
    }
    return sum4/n4;
}



int main() {
    int n3;
    cout<<"n=";
    cin>>n3;
    int sum3, num3;
    sum3=0;
    for (int i=0; i<n3; i++){
        cin>>num3;
        sum3+=num3;
    }
    cout<<"sum="<<sum3<<endl;



    double n4;
    cin>>n4;
    cout<<avg4(n4);



    return 0;
}
