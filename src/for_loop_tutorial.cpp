#include <cstdio>
#include<map>
#include<set>
#include<list>
#include<cmath>
#include<ctime>
#include<deque>
#include<queue>
#include<stack>
#include<bitset>
#include<vector>
#include<cstring>
#include<fstream>
#include<numeric>
#include<climits>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<cstdlib>

using namespace std;
int main(){
  int i;
  int n;
  scanf("%d %d", &i, &n);
  for(i; i<=n; i++){
    if(i==1){
      printf("one\n");
    } else if (i==2) {
      printf("two\n");
    } else if (i==3) {
      printf("three\n");
    } else if (i==4) {
      printf("four\n");
    } else if (i==5) {
      printf("five\n");
    } else if (i==6) {
      printf("six\n");
    } else if (i==7) {
      printf("seven\n");
    } else if (i==8) {
      printf("eight\n");
    } else if (i==9) {
      printf("nine\n");
    } else {
      if (i%2==0) {
        printf("even\n");
      } else if (i%2==1) {
        printf("odd\n");
      }
    }
  }
  return 0;
}
