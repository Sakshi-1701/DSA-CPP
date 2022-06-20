 #include<iostream>
 using namespace std;
 int main()
 {
     int n;int a[20];int t;
     cout<<"enter the number of elements in array"<<endl;
     cin>>n;
     for(int i=0;i<=n-1;i++)
     { cin>>a[i];}
     cout<<"original array is"<<endl;
     for(int i=0;i<=n-1;i++)
     cout<<a[i]<<" ";
     int j=n-1;
      for(int i=0; i<j; i++, j--)
     {
         t = a[i];
         a[i] = a[j];
         a[j] = t;
     }
     cout<<"\n\nThe Reverse of Given Array is:\n";
     for(int i=0; i<n; i++)
         {cout<<a[i]<<" ";}
     cout<<endl;
     return 0;

 }

