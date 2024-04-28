 #include<bits/stdc++.h>
 using namespace std;
 int main(){
string a,b;

while (cin>>a>>b)
{
  
for( int i =0;i<=a.size();i++){
  if(a[i]>='A' && b[i]<='Z')
  {
    a[i]=a[i] -'A'+97;
  }
  if(b[i]>='A'&&b[i]<='Z')
  {
    b[i]=b[i] -'A'+97;
  }
}
  for( int i =0;i<=b.size();i++){
    if(a[i]==b[i]){
        cout<<0<<endl;
        return 0;
    }
    else if(a[i]>b[i]){
        cout<<-1<<endl;
         return 0;
    }
    else
    cout<<1<<endl;
  }
}

return 0;
 }