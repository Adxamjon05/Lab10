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




//Question 5
template <typename T>
double min5(T arr5, double size){
    double min=arr5[0];
    for (int i=0; i<size; i++){
        if (arr5[i]<min){
            min=arr5[i];
        }
    }
    return min;
}



//Question 6
int indexOfLargestElement(double array[], int size){
    int index=0;
    int max=array[0];
    if (size<=0){
        return -1;
    } else{
        for (int i=0; i<size; i++){
            if(array[i]>=max){
                max=array[i];
                index=i;
            }
        }
    }
    return index;
}



//Question 7
bool strictlyEqual(const int list1[], const int list2[], int size){
    if (size<=0){
        return false;
    } else{
        for (int i=0; i<size; i++){
            if(list1[i]!=list2[i]){
                return false;
            }
        }
    }
    return true;
}



//Question 8
void chartype(char arr8[], int size8){
    int uppercase=0;
    int lowercase=0;
    int digit=0;
    int special=0;
    for (int i=0; i<size8; i++){
        if (arr8[i]>='a' and arr8[i]<='z'){
            lowercase++;
        } else if (arr8[i]>='A' and arr8[i]<='Z'){
            uppercase++;
        } else if(arr8[i]>='0' and arr8[i]<='9'){
            digit++;
        } else{
            special++;
        }
    }
    cout<<"Uppercase: "<<uppercase<<endl;
    cout<<"Lowercase: "<<lowercase<<endl;
    cout<<"Digit: "<<digit<<endl;
    cout<<"Special: "<<special<<endl;
}




//Question 9
void sort(int arr9[], int size){
    double temp=arr9[0];
    for (int i=0; i<size-1; i++){
        for(int k=0; k<size-1; k++) {
            if (arr9[k] > arr9[k + 1]) {
                temp = arr9[k + 1];
                arr9[k + 1] = arr9[k];
                arr9[k] = temp;
            }
        }
    }
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



    //Question 5
    int length5;
    cin>>length5;
    double arr5[length5];
    for (int i=0; i<length5; i++){
        cin>>arr5[i];
    }
    cout<<"Min="<<min5(arr5, length5);



    //Question 6
    int size6=0;
    cin>>size6;
    double array6[size6];
    for (int i=0; i<size6; i++){
        cin>>array6[i];
    }
    if (indexOfLargestElement(array6, size6)==-1){
        cout<<"There is nothing"<<endl;
    } else{
        cout<<"The index is "<<indexOfLargestElement(array6, size6)<<endl;
    }



    //Question 7
    int size7;
    cin>>size7;
    int list1[size7], list2[size7];
    for (int i=0; i<size7; i++){
        cin>>list1[i];
    }
    for (int i=0; i<size7; i++){
        cin>>list2[i];
    }
    if(strictlyEqual(list1, list2, size7)){
        cout<<"Strictly equal"<<endl;

    } else{
        cout<<"Not strictly equal"<<endl;
    }



    //Question 8
    int n8;
    cout<<"n=";
    cin>>n8;
    char arr8[n8];
    for (int i=0; i<n8; i++){
        cin>>arr8[i];
    }
    chartype(arr8, n8);




    //Question 9
    int n9;
    cin>>n9;
    int arr9[n9];
    for (int i=0; i<n9; i++){
        cin>>arr9[i];
    }
    sort(arr9, n9);
    for (int i=0; i<n9; i++){
        cout<<arr9[i]<<" ";
    }
    



    return 0;
}
