#include<cstdio>
#include<cstdlib>
using namespace std;
int gcd(int m,int n){
 if(n==0)
  return m;
 else 
  return gcd(n,m%n);
}
int main(){
 int a,b,c,t,g,e=1;
 scanf("%d",&t);
 while(t--){
  scanf("%d %d %d",&a,&b,&c);
  g=gcd(abs(a),abs(b));
  if(c%g==0)
   printf("Case %d: Yes\n",e);
  else 
   printf("Case %d: No\n",e);
   e++;
 }
 return 0;
}
