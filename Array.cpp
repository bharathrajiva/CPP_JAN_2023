#include <iostream>
using namespace std;
class arr{
    int length,count=0;
    int array1[];
    public:
    arr(int length){
        int* array1 = new int[length];
    }
    public:
    void insert(int item){
        if(length==count){
            int* newar = new int[length*2];
            for(int i=0 ;i<count;i++){
                newar[i]=array1[i];
            }
            newar=array1;

        }
        array1[count]=item;
        count++;

    }
    void print(){
        for(int i=0;i<count;i++){
            cout<<array1[i]<<" ";
        }

    }
    void remove(int item){
        if(item>=count || item>=0){
        for(int i=item;i<count;i++){
            array1[i]=array1[i+1];
        }
        count--;
    }}
    int index(int item){
        for(int i =0;i<count;i++){
            if(array1[i]==item)
            return i;
        }
        return -1;
    }

};
int main(){
    arr arr1(1);
    arr1.insert(1);
    arr1.insert(34);
    arr1.remove(0);
    cout<<arr1.index(9)<<endl;
    arr1.print();
    } 