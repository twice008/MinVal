// Поиск наименьшего элемента массива
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
setlocale(LC_ALL, "ru");
srand(time(NULL));
bool alreadyHere;
const int SIZE = 10;
int arr[SIZE];

for(int i = 0; i<SIZE;)
{
    alreadyHere = false;
    int newvar = rand() % 1500;
    for(int j = 0; j<i; j++)
    {
        if (arr[j]==newvar)
        {
            alreadyHere = true;
            break;
        }
    }
    if(!alreadyHere)
    {
        arr[i] = newvar;
        i++;
    }
}
 cout<< "----------------Массив----------------"<< endl;
 for(int i = 0; i<SIZE; i++)
 {
  cout<< arr[i]<< endl;
 }
 
cout<< "----------------Максимальное число----------------"<< endl;
 
int minval = arr[0];
 
  for(int i = 1; i<SIZE; i++)
 {
      if(arr[i]>minval)
      {
        minval=arr[i];
      }
 }
 
cout<< "Максимальное число - "<<minval<< endl;


for(int i = 0; i<SIZE; i++)
{
    for(int j = i+1; j<SIZE; j++)
    {
        if(arr[i]>arr[j]) swap (arr[i], arr[j]);
    }
}


 cout<< "----------------Массив----------------"<< endl;
 for(int i = 0; i<SIZE; i++)
 {
  cout<< arr[i]<< endl;
 }

   return 0;
}


