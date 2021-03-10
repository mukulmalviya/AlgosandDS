#include<bits/stdc++.h>

using namespace std;

int main()
{
  //int a[10] = {0,-5,5,6,9,5,8,33,1592}; //9 digits only
  int arrlen = 10;
  int a[arrlen] = {1,3,5,8,7,9,4,6,2,0};
  vector<int> _vecta(a,a+10);
  //sort(_vecta.begin(),_vecta.end());

  quicksort(*a,*a+arrlen,arrlen);

  for(int i=0; i<arrlen; i++)
  {
  //cout<<_vecta[i]<<" ";
  cout<<a[i]<<" ";
  }

  return 0;
}

void quicksort(int* lb,int* ub,int arrlen)
{
  int pivotindex = randpivot(*lb,*ub,arrlen); //lb[pivotindex] is the pivot now
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

int randpivot(int* lb, int* ub,int arrlen)
{
  int pivotindex = rand() % arrlen;
  return pivotindex;
}
