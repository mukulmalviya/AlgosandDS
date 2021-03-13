#include<bits/stdc++.h>

using namespace std;

/*void quicksort(int* lb,int* ub,int arrlen)
{
  // Recursive code
  // Boundary condition if array is only 1 element.
  if(lb==ub)
  {
    return;
  }
  // New Pivot
  int pivotindex = randpivot(*lb,*ub,arrlen); //lb[pivotindex] is the pivot now ???? HOW?
  //TODO arrlen update
  int i = 0;
  int j = (arrlen-1);
  while(i<j)
  {
    if(lb[pivotindex]<)
    i++;
    j--;
  }

}
*/
int randpivot(int lb, int ub)
{
  int arrlen = ub-lb+1 ;
  int pivotindex = lb + (rand() % arrlen);
  return pivotindex;
}

void swap(int lb, int ub, int* a)
{
  int temp = a[lb];
  a[lb] = a[ub];
  a[ub] = temp;
}

void recqsort(int lb, int ub, int* a)
{
// Recursive code
// Boundary condition if array is only 1 element.
if(lb>=ub)
{
  return;
}
//Pivot
int pivotindex = randpivot(lb,ub);
//code
while(lb<ub)
{
  if(a[lb]>a[pivotindex] && a[ub]<a[pivotindex])
    swap(lb,ub,a);
  lb++;
  ub--;
}
recqsort(lb,pivotindex-1, a);
recqsort(pivotindex+1,ub, a);
}

void quicksort(int* a, int len)
{
  //cout<<endl<<a[5]<<endl;  //debug code
  int lb=0, ub=9;
  //int pivotindex = randpivot(lb,ub);
  recqsort(lb,ub,a);

}

int main()
{
  //int a[10] = {0,-5,5,6,9,5,8,33,1592}; //9 digits only
  int arrlen = 10;
  int a[arrlen] = {1,3,5,8,7,9,4,6,2,0};
  vector<int> _vecta(a,a+10);
  //sort(_vecta.begin(),_vecta.end());

  //quicksort(*a,*a+arrlen,arrlen);
  quicksort(a,10);
  for(int i=0; i<arrlen; i++)
  {
  //cout<<_vecta[i]<<" ";
  cout<<a[i]<<" ";
  }

  return 0;
}
