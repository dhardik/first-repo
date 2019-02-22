#include <iostream>
using namespace std;

template <class T>
class demo
{
  T arr[10];
  int size;
public:
  void read();
  void sort();
  void show();
};

int main()
{
  demo <int>obj;
  obj.read();
  obj.sort();
  obj.show();
  return 0;
}

template <class T>
void demo<T>::read()
{
  cin>>size;
  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }
}

template <class T>
void demo<T>::sort()
{
  T temp;
  for(int i=0;i<size-1;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(arr[i]<arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
}

template <class T>
void demo<T>::show()
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<endl;
  }
}
