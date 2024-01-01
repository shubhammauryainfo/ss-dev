// area of circle
// #include <iostream>
// using namespace std;
// int main(){
//     float r = 7;
//     // float area = 3.141592*r*r;
//     cout<<"Area of Circle R=7 is : \n";
//     cout<<3.141592*r*r;
// }

// calculate simple interest

// #include <iostream>
// using namespace std;
// int main(){
//     float p = 540;
//     float r = 32;
//     float t = 3;
//     float si = (p*r*t)/100;
//     cout<<si;

    
// }

//  // absolute value 

//  #include <iostream>
// using namespace std;
// int main( ){
// int n;
// cout<<"Enter n : \n";
// cin>>n;
// // if(n>=0){
// //     cout<<n;
// // }

// // else{
// //       cout<<-n;
// // }
// if (n<0) n= -n;
//     cout<<n;

   
// }


// profit loss ques

//  #include <iostream>
// using namespace std;
// int main( ){
// int cp , sp;
// cout<<"Enter cp : \n";
// cin>>cp;
// cout<<"Enter sp : \n";
// cin>>sp;
// if (sp>cp) {
//    cout<<"profit is :"<<sp-cp;
// }
// // if (sp<cp) {
// //    cout<<"loss";
// // }
// // if (sp==cp) {
// //    cout<<"no profit no loss";
// // }
// else if(sp<cp){
//     cout<<"loss is :"<<cp-sp;
// }
// else{
//     cout<<"no profit no loss ";
// }
   
// }



//QUES LOGICAL OPERATORS
// DIVISIBLE BY 5 AND 3
//  #include <iostream>
// using namespace std;
// int main( ){
// int n;
// cout<<"Enter n : \n";
// cin>>n;

// if (n%5==0 && n%3==0) {
//    cout<<"dIVISIBLE BY 3 AND 5 :"<<n;
// }

// else{
//     cout<<"NOT dIVISIBLE BY 3 AND 5  " <<n;
// }
   
// }


// Ques : Take positive integer input and tell if it
// is divisible by 5 or 3.

//  #include <iostream>
// using namespace std;
// int main( ){
// int n;
// cout<<"Enter n : \n";
// cin>>n;

// if (n%5==0 || n%3==0) {
//    cout<<"dIVISIBLE BY 3 OR 5 :"<<n;
// }

// else{
//     cout<<"NOT dIVISIBLE BY 3 OR 5  " <<n;
// }
   
// }


// Ques : Take 3 numbers input and tell ifthey
// can be the sides of a triangle.

//  #include <iostream>
// using namespace std;
// int main( ){
// int a,b,c;
// cout<<"Enter a : \n";
// cin>>a;
// cout<<"Enter b : \n";
// cin>>b;
// cout<<"Enter c : \n";
// cin>>c;

// if ((a+b)>c && (b+c)>a && (c+a)>b) {
//    cout<<"yes this is side of triangle";
// }

// else{
//     cout<<"not a  triangle";
// }
   
// }


///Ques : Take 3 positive integers input and print
// the greatest of them.


//  #include <iostream>
// using namespace std;
// int main( ){
// int a,b,c;
// cout<<"Enter a : \n";
// cin>>a;
// cout<<"Enter b : \n";
// cin>>b;
// cout<<"Enter c : \n";
// cin>>c;

// if (a>b and a>c) {
//    cout<<"greater no. is : \n"<<a;
// }

// else if(b>a and b>c){
//     cout<<"greater no. is : \n"<<b;
// }
// else{
//     cout<<"greater no. is : \n"<<c;
// }

   
// }

// FOR LOOP

// PRINT ONE TO 100


// #include<iostream>
// using namespace std;
// int main(){

// for(int i=39; i<=167; i++){
//     cout<<i<<"\n";
   
// }

// }

// Ques : Print all the even numbers from 1 to 100

// #include<iostream>
// using namespace std;
// int main(){

// // for(int i=1; i<=100; i++){
// //     if(i%2==0) cout<<i<<"\n";
   
// // }
// // 50 times
// for(int i=2; i<=100; i=i+2){
//     cout<<i;
   
// }

// }

// Ques : Print the table of 19.


// #include<iostream>
// using namespace std;
// int main(){

// for(int i=19; i<=190; i++){
//     if(i%19==0) cout<<i<<"\n";
   
// }

// // for(int i=19; i<=200; i=i+19){
// //     cout<<i<<endl;
   
// // }

// }


// imp Ques
// Ques : Display this AP - 1,3,5,7,9 .. upto 'n'
// terms.

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a n : \n ";
// cin>>n;
// for(int i=1; i<=2*n-1; i+=2){
//    cout<<i<<"\n";
   
// }



// }


// M-2

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// // 4,7,10,13.....
// cout<<"Enter a n : \n ";
// cin>>n;
// int a=4;
// for(int i=1; i<=n; i++){
//    cout<<a<<"\n";
//    a=a+3;
// }


// }

// Ques : Display this GP - 1,2,4,8,16,32,.. upto an'
// terms.

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// // 4,7,10,13.....
// cout<<"Enter a n : \n ";
// cin>>n;
// int a=1;
// for(int i=1; i<=n; i++){
//    cout<<a<<"\n";
//    a=a*2;
// }


// }

// breaks

// Ques : WAP to check if a number is composite
// or not.

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a n : \n ";
// cin>>n;
// for(int i=2; i<=n/2; i++){
//    if (n%i==0){
//        cout<<"number is composite"<<" ";
//        break;  // to get out of the loop
//    } 
//    else {
//     cout<<"number is prime";
//     break;
//    }
    
// }

// }

// bool method-2
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a n : \n ";
// cin>>n;
// bool flag = true; // true nmean prime
// for(int i=2; i<=n/2; i++){
//    if (n%i==0){
//        flag = false;
//        break;  // to get out of the loop
//    } 
   
// }
// if (n==1)
// {
//     cout<<"neither prime nor composite";
// }

//  if(flag==true) cout<<"prime";
//  else cout<<"composite";

// }
// Question on aritmatic operators

// Ques : WAP to count digits of a given number.

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter a mumber : \n";
// cin>>n;
// int count=0;
//  while (n!=0){
//     n=n/10;
//     count++;
//  }
// cout<<count;


// }

// Ques : WAP to sum digits of a given number.

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter a mumber : \n";
// cin>>n;
// int sum=0;
//  while (n!=0){
//     int ld=n%10;
//     n=n/10;
//     sum+=ld;
//  }
// cout<<sum;


// }

// print reverse number
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number :\n";
// cin>>n;
// int r = 0;
// while(n!=0){
//     int ld = n%10;
//     r *= 10;
//     r += ld;
//     n/= 10;
// }
// cout<<r;
// }

//factorials with loop

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number :\n";
// cin>>n;
// int product=1;
// for (int i=1; i<=n; i++){
// product *= i;
// }
// cout<<product;
// }

// patterns

// Ques : Print the given pattern
// 1234
// 1234
// 1234

// #include<iostream>
// using namespace std;
// int main(){
// // square bannana hai
// // row=m , cols = n given  by user
// int m;
// cout<<"enter side of square: \n";
// cin>>m;

// for(int i=1;i<=m;i++)
// {  
//     for(int j=1;j<=m;j++){
//         cout<<j;
    
//     }

// cout<<endl;



// }

// }


//ABCD
//ABCD
//ABCD
//ABCD
// ALPHABET SQUARE

// #include<iostream>
// using namespace std;
// int main(){
// // square bannana hai
// // row=m , cols = n given  by user
// int m;
// cout<<"enter side of square: \n";
// cin>>m;

// for(int i=1;i<=m;i++)
// {  
//     for(int j=1;j<=m;j++){
//         cout<<(char)(j+96)<<" ";
    
//     }

// cout<<endl;



// }

// }



//*Ques : Print the given pattern

    // 1
    // 23
    // 456
    // 78910

//  #include<iostream>
// using namespace std;
// int main(){
// int m;
// cout<<"enter no.: \n";
// cin>>m;
// int a=1;
// for(int i=1;i<=m;i++) 
// {  

//     for(int j=1;j<=i;j++){    
//         cout<<a++<<" ";
       
    
//     }

// cout<<endl;

// }

// }

    // *Ques : Print the given pattern
    // 1
    // 01
    // 101
    // 0101

// #include<iostream>
// using namespace std;
// int main(){
// int m;
// cout<<"enter no.: \n";
// cin>>m;
// int a=1;
// for(int i=1;i<=m;i++)
// {  

//     for(int j=1;j<=i;j++){ 
//         if((i+j)%2==0)   cout<<1<<" ";
//         else cout<<0<<" ";
       
    
//     }

// cout<<endl;

// }

// }


// print given pattern
    //     *
    //     *
    // *  * * * *
    //     *
    //     * 

    // star plus//

//     #include<iostream>
// using namespace std;
// int main(){
// int m;
// cout<<"enter no.: \n";
// cin>>m;
// int mid = m/2+1;
// for(int i=1;i<=m;i++)
// {  

//     for(int j=1;j<=m;j++){ 

//        if (i==mid || j==mid)
//          cout<<"* ";
//        else cout<<"  ";
    
//     }

// cout<<endl;

// }

// }


    // *Ques : Print the given pattern
    //      *
    //     **
    //    ***
    //   **** 


//     #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter no.: \n";
// cin>>n;

// for(int i=1;i<=n;i++){  
//     for (int j=1;j<=n-i;j++)
//     {
//         cout<<"  ";
//     }
//      for(int j=1;j<=i;j++){
//         cout<<"* ";
    
//     }

// cout<<endl;



// }

// }

// print rhombus

//     #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"enter no.: \n";
// cin>>n;

// for(int i=1;i<=n;i++){  
//     for (int j=1;j<=n-i;j++)
//     {
//         cout<<"  ";
//     }
//      for(int j=1;j<=n;j++){
//         cout<<"* ";
    
//     }

// cout<<endl;



// }

// }


// functions 

// ques : combination and permutation


//     #include<iostream> // header diclearatrion
//      #include<cmath>
// using namespace std;

// int main(){

// int n;
// cout<<"Enter n: \n";
// cin>>n;
// int r;
// cout<<"Enter r: \n";
// cin>>r;

// int a=1;
// for (int i=1 ;i<=n;i++){
//     a *= i;
// }
// int b=1;
// for (int i=1 ;i<=r;i++){ // normal method
//  b *= i;
// }

// int c=1;
// for (int i=1 ;i<=n-r;i++){
//  c *= i;
// }

// cout<<a/(b*c);

// }



// By functions
//     #include<iostream> // header diclearatrion
//      #include<cmath>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for (int i=1;i<=x; i++)
//     {
//         f *=i;
//     }
//     return f;
    
// }
// int main(){

// int n;
// cout<<"Enter n: \n";
// cin>>n;
// int r;
// cout<<"Enter r: \n";
// cin>>r;

// int a=fact(n);

// int b=fact(r);


// int c=fact(n-r);


// cout<<a/(b*c);

// }

// pascal triangle //

//     #include<iostream> // header diclearatrion
//      #include<cmath>
// using namespace std;
// int fact(int x){
//     int f=1;
//     for (int i=1;i<=x; i++)
//     {
//         f *=i;
//     }
//     return f;
    
// }
// int ncr(int n , int r){

// return fact(n)/( fact(r)*fact(n-r));
    
// }
// int main(){

// int n;
// cout<<"Enter n: \n";
// cin>>n;
// for (int i = 0; i<=n; i++)
// {
//     for (int j = 0; j <=i; j++)
//     {
//        cout<<ncr(i,j)<<" ";
//     }
//     cout<<endl;
// }




// }


// chap-6 recusion

// print n to 0

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     cout<<n<<"\n";
//  print(n-1);
// }
// int main(){
//     print(3);
// }

// print n to 1

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0) return;
//     cout<<n<<"\n";
//  print(n-1);
// }
// int main(){
//     int n;
//     cout<<"Enter value of n : \n";
//     cin>>n;
//     print(n);
// }

// print 1 to n

// #include<iostream>
// using namespace std;
// void print(int x , int n){
//     if(x>n) return;
//     cout<<x<<"\n";
//  print(x+1,n);                        //method-2
// }
// int main(){
//     int n;
//     cout<<"Enter value of n : \n";
//     cin>>n;
//     print(1,n);
// }



// without extra parameter

// #include<iostream>
// using namespace std;
// void print(int n){    
//     if(n==0) return;     /// base case
//      print(n-1);  ///call
//     cout<<n<<"\n";  // work

// }
// int main(){
//     int n;
//     cout<<"Enter value of n : \n";
//     cin>>n;
//     print(n);
// }

// Ques : Print sum from 1 to n (Return type)


// #include<iostream>
// using namespace std;
// int sum (int n){    
//     if(n==1) return 1; 
//     return n + sum(n-1);    /// base case
  

// }
// int main(){
//     int n;
//     cout<<"Enter value of n : \n";
//     cin>>n;
//     cout<<sum(n);
// }

// Ques : Make a function which calculates the
// factorial of n using recursion.

// #include<iostream>
// using namespace std;
// int fact (int n){    
//     if(n==0 || n==1) return 1; 
//     return n * fact(n-1);    /// base case
  

// }
// int main(){
//     int n;
//     cout<<"Enter value of n : \n";
//     cin>>n;
//     cout<<fact(n);
// }


// Ques : Make a function which calculates 'a'
// raised to the power 'b' using recursion.

// #include<iostream>
// using namespace std;
// int power(int a, int b){    
//     if(b==0) return 1; 
//     return a *power(a,b-1);    /// base case
  

// }
// int main(){
//     int a;
//     cout<<"Enter value of a base  : \n";
//     cin>>a;
//      int b;
//     cout<<"Enter value of b power : \n";
//     cin>>b;
//     cout<<power(a,b);
// }


// QUESTION ON ARRAY 


// Ques : Calculate the sum of all the elements in the
// given array.

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={12,6,7,34,9,23,56,56,45};
//     int sum=0;
//     for (int i = 0; i <=sizeof(arr)/4; i++)
//     {
//        sum += arr[i];
//     }
//      cout<<sum;
   
// }


//product

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={2,2};
//     int pro=1;
//     for (int i = 0; i <=sizeof(arr)/4; i++)
//     {
//        pro *= arr[i];
//     }
//      cout<<pro;
   
// }


//maximum

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={12,6,7,34,9,23,56,56,45};
//     int n=sizeof(arr)/4;
//     int mx = arr[0];
//     for (int i = 1; i <=n; i++)
//     {
//     //    if(arr[i]>mx) mx=arr[i];
//     mx=max(mx,arr[i]);
//     }
//      cout<<mx;
   
// }


//minimum// 

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={12,6,7,34,9,23,56,56,45};
//     int n=sizeof(arr)/4;
//     int mn = INT_MIN;
//     for (int i = 1; i<=n; i++)
//     {
//        if(arr[i]<mn) mn=arr[i];
//     // mn=min(mn,arr[i]);
//     }
//      cout<<mn;
   
// }


// Ques : Given an array of integers, change the value of
// all odd indexed elements to its second multiple and
// increment all even indexed value by 10.



//Ques : Find the second largest element in the given Array.

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={12,6,7,34,9,23,56,45};
//     int n=sizeof(arr)/4;
//     int mx = INT16_MIN;
//     for (int i = 0; i<n; i++) {
//     mx=max(mx,arr[i]);
//     }
//     int smx = INT16_MIN;
//     for (int i = 0; i<n; i++) {
//    if(arr[i]!=mx)    smx=max(smx,arr[i]);
//     }
    
//    cout<<smx;
// }

// Ques : Write a program to copy the contents of one
// array into another in the reverse order.

// #include<iostream>
// using namespace std;
// int main(){
// int a[]={12,6,7,34,9,23,56,45};
// int n = sizeof(a)/4;
// int b[n];

// for (int i=0; i<n; i++)
// {
//     b[i] = a[n-1-i];
//     cout<<b[i]<<" ";
// }

// }


//Ques : Write a program to reverse the array without using any extra array.

// #include<iostream>
// using namespace std;
// int main(){
// int a[]={12,6,7,34,9,23,56,45};
// int n = sizeof(a)/4;


// for (int i=0; i<n; i++)
// {
//     cout<<a[i]<<" ";
// }
// int i=0;
// int j=n-1;
// while (i<j)
// {
//    int temp =a[i];
//    a[i] = a[j];
//    a[j]=temp;
//    i++;
//    j--;
// }
// cout<<endl;
// for (int i=0; i<n; i++)
// {
//     cout<<a[i]<<" ";
// }


// }


///Ques : Write a program to store roll number and
// marks obtained by 4 students side by side in a matrix.

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[4][2] = {{76,81},{13,76},{82,91},{88,90}};
  
//    for ( int i= 0;i<4; i++)//row
//    {
//     for ( int j= 0;j<2; j++)//cols  
//    {
//    cout<<arr[i][j]<<" ";
//    }
//    cout<<endl;
//    }
   

// }


//Ques : Write a program to store IO at every index of
// a 2D matrix with 5 rows and 5 columns.


// #include<iostream>
// using namespace std;
// int main(){

//     int arr[5][5];
  
//    for ( int i= 0;i<=4; i++)//row
//    {
//     for ( int j= 0;j<5; j++)//cols  
//    {
//       arr[i][j] = 10;
//    }
  
//    }
//       for ( int i= 0;i<=4; i++)//row
//    {
//     for ( int j= 0;j<5; j++)//cols  
//    {
//    cout<<arr[i][j]<<" ";
//    }
//    cout<<endl;
//    }
   

// }