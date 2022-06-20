// #include<iostream>
// using namespace std;
// int main()                                   THIS IS MY CODE AND THE BELOW ONE IS FROM APNA COLLEGE
// {
//     int n;
//     cout<<"enter numer of rows"<<endl;
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {     int count=1;
//         for(int j=1;j<=i;j++)         
//         {   
//              cout<<count;
//              count++;
            
//         }
//         cout<<endl;
//     }
// }
    //  or another method is
     
    #include<iostream>
    using namespace std;
    int main()
    { int n;
    cout<<"enter rows"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        {cout<<j<<" "; }
        cout<<endl;
    }
    }