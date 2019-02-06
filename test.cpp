#include <iostream>

using namespace std;

int reverseArray(int &array[], int size);

int main()
{
  int size = 5;
  int myarray[10,20,30,40,50];
  cout<<"Array before reversal: "<<endl;
  for (int i = 0; i<size; i++)
  {
    cout << myarray[i]<<" ";
  }
  cout<<endl;
  reverseArray(&myarray[], size);
  cout<<"Array after reversal: "<<endl;
  for (int j = 0; j<size; j++)
  {
    cout<<myarray[i]<<" ";
  }

  return 0;
}

int reverseArray(int &array[], int size)
{
  int tempsize = size -1;
  int temparray[size];
  for (int k=0; k<size; k++)
  {
    temparray[tempsize] = myarray[i];
    tempsize--;
  }
  return myarray[];
}
