#include <bits/stdc++.h>
using namespace std;
/* * * * * * * * * * * * * * 
 *                         *
 *    !(I hate Coding)     *
 *                         *
 * * * * * * * * * * * * * */


// void tower(int n, string A, string B, string C) 
// { 
// if (n == 1)
//  { 
//  cout << A << "->" << C << “ ”; 
//  return;
//  } 
// tower(n - 1, A, C, B); 
// cout << A << "->" << C << “ ”; 
// tower(n - 1, B, A, C); 
// } 


int check(char x){
   if(x=='(')return -1;  
   if(x=='+'||x=='-')return 1;
   if(x=='/'||x=='*')return 2;
   if(x=='^')return 3;
}
string infixToPostfix(){
   string s,ans=""; cin >> s;
   stack<char> st;
   for(int i=0; i<s.size(); i++){

      if(s[i]=='(')
         st.push(s[i]);

      else if(s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a'&& s[i] <= 'z')
         ans+=s[i];
      
      else if( s[i]==')' ) {
         while(!st.empty() && st.top()!='('){
            ans+=st.top();
            st.pop();
         }
         if(!st.empty())
            st.pop(); 
      }

      else {
         while(!st.empty() && check(s[i])<=check(st.top()) ){

            ans+=st.top();
            st.pop();
         }
         st.push(s[i]);
      }
   }

   while(!st.empty()){
         ans+=st.top();
         st.pop();
   }
   cout << ans; 
}

int sparse_matrix(){

    int sparserMatrix[5][6]= {
        {0,0,0,0,9,0},
        {0,8,9,9,9,9},
        {4,0,0,2,0,0},
        {0,0,0,0,0,5},
        {0,0,2,0,0,0}
    };

    int siz=0;
    for(int row=0; row<5; row++){
        for(int column=0; column<6; column++){
            if(sparserMatrix[row][column]!=0)
                siz++;
        }
    }

    int resultMatrix[siz][3];
    int k=0;
    for(int row=0; row<5; row++)
        for(int column=0; column<6; column++)
        if(sparserMatrix[row][column]!=0){
            resultMatrix[k][0]=row+1;
            resultMatrix[k][1]=column+1;
            resultMatrix[k][2]=sparserMatrix[row][column];
            k++;
        }
    cout << 5 <<" " << 6 << " " << siz <<"\n";

    for(int i=0; i<siz;i++){
        for(int j=0;j<3;j++)
            cout<<resultMatrix[i][j]<<" ";
        cout <<endl;
    }
}

int algo_saddle_point(){

   int rub,cub; cin >> rub >> cub;

    int a[rub][cub];
    for (int r = 0; r < rub; ++r)
       for(int c = 0; c < cub; ++c)
         cin >> a[r][c];


   int k,r,c,flag=1,v[rub],value;
   int f=0;
   for(k=1; k<=2; k++){

      for(r=0; r < rub; r++){// this loop for finding row wise maximum for k=1 and then row wise minumum for k=2
         v[r]=a[r][0];       // and store all maximum value to v variable

         for(c=1; c < cub; c++){
            if(flag*v[r]<flag*a[r][c])
               v[r]=a[r][c];
         }
      }

         for(c=0; c < cub; c++){
            
            value=a[0][c];
            for(r=1; r < rub; r++){//this loop will find column wise minimum for k=1 and then find column wise maximum for k=2
               if(flag*value>flag*a[r][c])
                  value=a[r][c];
            }

            for(r=0; r < rub; r++){ // matching value to stored value of v
               if(value==a[r][c] and value==v[r]){
                  cout << "Saddle point " << ++f << ": " << value << " \n" << r << ' ' << c << endl;
               }
            }
         }
      flag=-flag;

   }
   if(!f)cout << "No saddle point\n";

 // Sesh :)

}



int delete_value(){

      int n,i,v;
      cout << "Enter aray size:\n"; 
      cin >> n ; 

      cout << "Enter arrray elements : \n";
      int a[n]; for (int i = 0; i < n; ++i) cin >> a[i];

      cout << " Enter the value to be deledet: \n";
      cin >> v;


      //for finding position of the value in the array
      int loc; for (int i = 0; i < n; ++i){if(a[i]==v)loc=i; break;}

      //shifting array elements
      for(int i=loc; i<n-1; i++) 
         a[i]=a[i+1];

      cout << "Array after delete: \n";

      for (int i = 0; i < n-1; ++i)
         cout << a[i] << ' ';

}



int birary_search(){

      int n,i,v;
      cout << "Enter aray size:\n"; 
      cin >> n ; 

      cout << "Enter arrray elements : \n";
      int a[n]; for (int i = 0; i < n; ++i) cin >> a[i];

      cout << "Enter the value to be searched: \n";
      cin >> v;

      int beg=0,loc,end=n-1, mid=(beg+end)/2;

      while(a[mid]!=v && beg<=end)
      {
         if(a[mid]>v)
            end=mid-1;
         else
            beg=mid+1;
         if(a[mid]==v)
            end=mid+1;

         mid=(beg+end)/2;
      }

      if(a[mid]==v)
         cout << mid+1 << endl;
      else
         cout << "Not found :(" << endl;

}

int linier_search(){
   int n,i,v;
   cout << "Enter aray size:\n"; 
   cin >> n ;

   cout << "Enter arrray elements : \n";

   int a[n]; 
   for (int i = 0; i < n; ++i) cin >> a[i];

   cout << " Enter the value to be searched: \n";
   cin >> v;
   
   for (i = 0; i < n; ++i)
      if(a[i]==v)break;

   if(i==n)
      cout << "Item not found!";
   else
      cout << "Item found at position of the array: " << i+1 << endl; 
  
}


int32_t main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

      // algo_saddle_point();
      // linier_search();
      // birary_search();
      // delete_value();
      // sparse_matrix();
      infixToPostfix();

    return 0;
}



