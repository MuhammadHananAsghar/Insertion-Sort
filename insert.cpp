// CREATED BY MUHAMMAD HANAN ASGHAR
// PYTHONIST

#include <iostream>
using namespace std;

class InsertionSort{
  private:
  int *arr;
  int arraySize;
  const int maximum_number = 1;
  const int minimum_number = 50;
  public:
  InsertionSort(int size){
    arr = new int[size];
    arraySize = size;
  }
  void Insert(){
    for(int i=0;i<arraySize;i++){
      arr[i] = (rand() % (maximum_number + 1 - minimum_number)) + minimum_number;
    }
  }
  void Display(){
    for(int i=0;i<arraySize;i++){
      cout<<arr[i]<<" - ";
    }
  }
  void Sort(){
    int temp,i,j;
    for(int i=1;i<arraySize;i++){
      temp = arr[i];
      j = i-1;
      while(j>=0 && arr[j]>temp){
        arr[j+1] = arr[j];
        j--;
      }
      arr[j+1] = temp;
    }
  }
};

int main() {
  InsertionSort i(10);
  i.Insert();
  i.Display();
  i.Sort();
  cout<<endl;
  i.Display();
}
