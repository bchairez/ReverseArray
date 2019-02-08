#include <iostream>

using namespace std;

void reverseArray(int array[], int size);

int main()
{
  int size = 5;
  int myarray[size];

  cout<<"Enter 5 numbers into the array."<<endl;
  for (int l= 0; l<size; l++)
  {
    cin >> myarray[l];
  }

  cout<<"Array before reversal: "<<endl;
  for (int i = 0; i<size; i++)
  {
    cout << myarray[i] <<" ";
  }
  cout<< endl;

  reverseArray(myarray, size);

  cout<<"Array after reversal: "<<endl;
  for (int j = 0; j<size; j++)
  {
    cout<< myarray[j]<< " ";
  }
  cout<<endl;

  return 0;
}

void reverseArray(int array[],int size)
{
  int tempsize = size -1;
  int temparray[size];
  for (int k=0; k<size; k++)
  {
    temparray[k] = array[k];
  }
  for (int i=0;i<size;i++)
  {
    array[tempsize] = temparray[i];
    tempsize--;
  }
}
