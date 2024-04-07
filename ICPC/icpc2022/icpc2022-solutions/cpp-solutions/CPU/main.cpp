#include <iostream>
using namespace std;
#include <stdio.h>
void ActivitySelection(int start[], int finish[], int done[], int n)
{
  int j;
  for (int k = 0; k < n; k++)
  {
      if (done[k] == 0) {
        j = k;
        done[k] = 1;
        break;
      }
  }
  int i;
  for (i = j+1; i < n; i++)
  {
    if (start[i] >= finish[j] && done[i] != 1)
    {
      done[i] = 1;
      j = i;
    }
  }
}
bool checkActivity (int done[], int n)
{
    int k;
    for (k = 0; k < n; k++)
  {
    if (done[k] == 0)
    {
      return false;
    }
  }
  return true;

}
// Driver function
int main()
{
  int c;
  scanf("%d", &c);
  int result[c] = {0};
  for (int f = 0; f < c; f++) {

  int i, m;
  scanf("%d", &m);
  int start[m], finish[m];
  for (i = 0; i < m; ++i) {
    scanf("%d", &start[i]);
  }
  for (i = 0; i < m; ++i) {
    scanf("%d", &finish[i]);
  }
  for (i = 0; i < m-1; i++){
    for (int j = i+1; j < m; j++) {
        if (finish[j] < finish[i]) {
            int temp = finish[i];
            finish[i] = finish[j];
            finish[j] = temp;
            temp = start[i];
            start[i] = start[j];
            start[j] = temp;
        }
    }
  }

  int done[m] = {0};
  int cpu = 0;
  int n = sizeof(start) / sizeof(start[0]);
  if (n == 0) {
        result[f] = 0;
  }
  while (!result[f]){
  cpu += 1;
  ActivitySelection(start, finish, done, n);
  if (checkActivity(done, n)) {
    result[f] = cpu;
  }
  }
  }
  for (int l = 0; l < c; l++) {
    cout << result[l] << endl;
  }
}
