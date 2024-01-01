//       CHAPTER - 1 //

//first program
// #include <iostream>
// using namespace std;

// int main(){
//   cout<<"Hello World!"<<endl<<45436565;
 
// }

// printing number
// #include <iostream>
//  using namespace std;
// int main(){
//     cout<<"4*3";
// }
 
//  variables
// #include <iostream>
//  using namespace std;
// int main(){
//     int x;//declear
//     x = 5;//intialization
//     int y = 6;//both
//  // two variable declear and intialization 
//     cout<<x*y<<endl<<x+y<<endl<<y-x;
// }

// updation of variables

// #include <iostream>
//  using namespace std;
// int main(){
//    int x = 5;
//    cout<<x<<endl; //5
//    x = x+8;
//    cout<<x<<"\n";//13

// x = x + 6;
// cout<<x<<endl;//19
// x = 7;
// cout<<x<<endl;//7
// x = x-20;
// cout<<x<<endl;//-13
// x= x*-13;
// cout<<x<<endl; //


// }

// arithmatic operators

// #include <iostream>
//  using namespace std;
// int main(){
//     int x = 7 , y = 4;
//     cout<<x+y<<endl;
//     cout<<x-y<<endl;
//     cout<<x*y<<endl;
//     cout<<x/y<<endl;

// }


//float data type
// #include <iostream>
//  using namespace std;
// int main(){
//     float x = 7.5 , y = 4;
//     cout<<y<<endl;
//     cout<<x+y<<endl;   // float is for storing real numbers
//     cout<<x-y<<endl;
//     cout<<x*y<<endl;
//     cout<<x/y<<endl;

// }


// increment and Decrement OPerators
// #include <iostream>
//  using namespace std;
// int main(){

//     int x = 4;
//     cout<<x<<endl;//4
//     x = x+1;
//     cout<<x<<endl;//5
//     x += 1;
//     cout<<x<<endl;//6
//     x++;
//     cout<<x<<endl;//7
//     x--;
//     cout<<x<<endl;//6
//     --x;
//     cout<<x<<endl;//5
//   cout<<++x<<endl; // pre increment //6
//     cout<<x++<<endl;// post increment6


// }


// variables naming rule
// #include <iostream>
// using namespace std;
// int main( ){
// // int 1x = 3; error
// // cout<<1x;
// int x = 3;
// cout<<x; //capital is allow not start with number 
//special character are not allowed (){<>?/"\'/'/"}
//key words are not allowed
//Conmas or blanks are not allowed.
// key words are 
// auto double int break extern enum unsigned while
// case sizeof for const static tong continue float
// else signed do Short switch Char volatile default
// goto struct if union return void register typedef

// }

// Taking input  Square of a Number

// #include <iostream>
//  using namespace std;
// int main(){
//     int x , y;
    
//     cout<<"Enter value of X : \n";
//     cin>>x;
//      cout<<"Enter value of Y : \n";
//     cin>>y;
//     cout<<"The Sum of X and Y is : "<<x+y;
    
// }

// Modulus OPerators (% sign)
// a%b is remainder when a is divided by b
// important is divisibilty
// #include <iostream>
//  using namespace std;
// int main(){
//     int x , y;
    
//     cout<<"Enter value of X : \n";
//     cin>>x;
//      cout<<"Enter value of Y : \n";
//     cin>>y;
//     cout<<"The modulus of X and Y is : "<<x%y;
    
// }


// type casting 
// float to int , int to float
// #include <iostream>
//  using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     float y = (float)x;// typecasting
//     cout<<y/3;
   
    
// }

//char data type

// #include <iostream>
//  using namespace std;
// int main(){
//     char x = '>'; 
//     cout<<x;

// }

// ASCII value 

// #include <iostream>
//  using namespace std;
// int main(){
//     // char x; 
//     // cin>>x;

//     // cout<<(int)x; // char to int 
//     char x; 
//     cin>>x;

//     cout<<(int)x; //int  to char

// }

// very important
// #include <iostream>
// using namespace std;
// int main( ){

// cout<<5/2<<endl;
// cout<<5.0/2<<endl;
// cout<<5/2.0<<endl;
// cout<<5.0/2.0<<endl;

// }

//                 CHPTER-2 - CONDITIONALS //

// if else 
// #include <iostream>
// using namespace std;
// int main( ){
// int n;
// cout<<"Enter n : \n";
// cin>>n;
// if(n%2==0){
//     cout<<"even number";
// }
    
// // if(n%2!=0) cout<<"odd number";
// else{
//       cout<<"odd number"<<endl;
//        cout<<"WOW";
// }
   
// }
 


// Multiple condition using (&& and ) and (|| or) this are logical operators


// three digit or not 

//  #include <iostream>
// using namespace std;
// int main( ){
// int n;
// cout<<"Enter n : \n";
// cin>>n;

// if (n>99 && n<1000) {
//    cout<<"number is three digits :"<<n;
// }

// else{
//     cout<<"No. is not three digits  " <<n;
// }
   
// }


//nested if else
// Ques : Take 3 positive integers input and print
// the greatest of them. without using multiple conditions

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
// // a>b and —> —Y a greatest
// if (a>b) { // b can never be the greatest
//  if (a>c){
//     cout<<"greater no. is : \n"<<a;
//  }
//  else{//c>a ,a>b —> c>a>b
//      cout<<"greater no. is : \n"<<c;
//  }
 
// }
// }


// else{ // b>a
//     if (b>c)
//     {
//         cout<<"greater no. is : \n"<<b;
//     }
//     else{  // c>b , c>b>a
//        cout<<"greater no. is : \n"<<c; 
//     }
   
// }

   
// }



// Else if //

// Ques : Take input percentage of a student and
// print the Grade according to marks:
// l) 81-100 very Good
// 2) 61-80 Good
// 3) 41-60 Average
// 4) <=40 Fail


//  #include <iostream>
// using namespace std;
// int main( ){
// int n;
// cout<<"Enter n : \n";
// cin>>n;
//  if(n>=81 and n<=100){
//     cout<<"very good";
//  }

// else if(n>=61 and n<=80){
//     cout<<"good";

// }
// else if(n>=41 and n<=60){
//     cout<<"average";

// }
// else {
//     cout<<"fail";

// } 
   
// }

//Ternary Operator// to save line and make code easy
// expression 1 ? expression 2 : expression 3

// #include <iostream>
// using namespace std;
// int main( ){
// int n;
// cout<<"Enter n : \n";
// cin>>n;

//   //(condition) ? if ture : if false    
// (n%2==0) ? cout<<"even number":cout<<"odd number"<<endl;
   
// }

//Switch Statement also another replacement of if else//

// Ques : Write a program to create a calculator that performs basic arithmetic operations (add,
// subtract, multiply and divide) using switch case The calculator should input two
// numbers and an operator from user.

// #include <iostream>
// using namespace std;
// int main( ){
// int n1;
// cin>>n1;
// char op;
// cin>>op;      normal method
// int n2;
// cin>>n2;
// if(op=='+') cout<<n1+n2;
// if(op=='-') cout<<n1-n2;
// if(op=='*') cout<<n1*n2;
// if(op=='/') cout<<n1/n2;
   
// }

// with switch method

// #include <iostream>
// using namespace std;
// int main( ){
// int n1;
// cin>>n1;
// char op;
// cin>>op;     
// int n2;
// cin>>n2;
// switch(op){
//     case '+':
//     cout<<n1+n2<<endl;
//     break;
// case '-':
// cout<<n1-n2<<endl;
// break;
// case '*':
// cout<<n1*n2<<endl;
// break;
// case '/' :
// cout<<n1/n2<<endl;
// break;
// default:
// cout<<"Invalid operator";

// }
   
// }

// CHAPTER -3 LOOPS// -- repetition

// FOR LOOP

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a n : \n ";
// cin>>n;
// for(int i=1; i<=n; i++){// intialization // condition //increment and decrement } format of for loop
//     cout<<"helloworld \n";
   
// }




// }


//  BREAKS // is use for get out from loop

// Ques : WAP to find the highest factor of a
// number In' (other than n itself)
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a n : \n ";
// cin>>n;
// int f; // store karaunga highest factor
// for(int i=1; i<n; i++){
//    if (n%i==0) f = i;
    
// }
// cout<<f;
// }


///revese method

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a n : \n ";
// cin>>n;
// for(int i=n/2; i>=1; i--){
//    if (n%i==0){
//        cout<<i<<" ";
//        break;  // to get out of the loop
//    } 
    
// }

// }


/// CONTINUE - Mean if you want skip particular round..
// #include<iostream>
// using namespace std;
// int main(){

// for(int i=1; i<=20; i++){
//     if(i==3 || i==8) continue;
    
//      cout<<i<<" ";

    
// }

// }


// WHILE LOOP - an alternate of for loop use when you don't  know  how many time loop have to run

// while=for but semicolon is use

// #include<iostream>
// using namespace std;
// int main(){

// int i=1;
// while (i<=10)
// {
//     cout<<i<<" ";
//     i++;
// }

// for (;i<=10;)
// {
//      cout<<i<<" ";
//     i++;
// }



// }

// DO-WHILE LOOP // run one time minimum


// #include<iostream>
// using namespace std;
// int main(){

// int i=11;
// do
// {
//         cout<<i<<" ";
//         i++;
// } while (i<=10);



// }


/// CHAPTER NO.-4 // PATTERN PRINTING QUESTIONS

// NESTED LOOP mean loop ke andar loop//

// Ques : Print the given pattern

// star rectangle

// #include<iostream>
// using namespace std;
// int main(){
// // rectangle bannana hai
// // row=m , cols = n given  by user
// int m;
// cout<<"enter no. row : \n";
// cin>>m;
// int n;
// cout<<"enter no. cols : \n";
// cin>>n;
// for(int i=1;i<=m;i++)
// {  
//     for(int j=1;j<=n;j++){
//         cout<<"* ";
//     }

// cout<<endl;



// }




// }

// #include<iostream>
// using namespace std;
// int main(){
// // square bannana hai
// // row=m , cols = n given  by user
// int m;
// cout<<"enter value of n : \n";
// cin>>m;

// for(int i=1;i<=m;i++)
// {  
//     for(int j=1;j<=m;j++){
//         cout<<"* ";
//     }

// cout<<endl;



// }




// }
//TRIANGLE PROBLEMS

    // *
    // **
    // ***
    // ****

//     #include<iostream>
// using namespace std;
// int main(){

// // row=m , cols = n given  by user
// int m;
// cout<<"enter no.: \n";
// cin>>m;

// for(int i=1;i<=m;i++)
// {  
//     for(int j=1;j<=i;j++){
//         cout<<"*"<<" ";
    
//     }

// cout<<endl;



// }

// }


// ****
// ***
// **
// *


//     #include<iostream>
// using namespace std;
// int main(){

// // row=m , cols = n given  by user
// int m;
// cout<<"enter no.: \n";
// cin>>m;

// for(int i=1;i<=m;i++)
// {  
//     for(int j=1;j<=m+1-i;j++){
//         cout<<"*"<<" ";
    
//     }

// cout<<endl;

// }

// }


// odd number triangle //

//     #include<iostream>
// using namespace std;
// int main(){

// // row=m , cols = n given  by user
// int m;
// cout<<"enter no.: \n";
// cin>>m;

// for(int i=1;i<=m;i++)               method-1
// {  
//     for(int j=1;j<=i;j++){
//         cout<<2*j-1<<" ";
    
//     }

// cout<<endl;

// }

// }

//     #include<iostream>
// using namespace std;
// int main(){
// int m;
// cout<<"enter no.: \n";
// cin>>m;

// for(int i=1;i<=m;i++)
// {  
//     int a=1;                        method-2
//     for(int j=1;j<=i;j++){
//         cout<<a<<" ";
//         a += 2;
    
//     }

// cout<<endl;

// }

// }






//     #include<iostream>
// using namespace std;
// int main(){
// int m;
// cout<<"enter no.: \n";
// cin>>m;

// for(int i=1;i<=m;i++)
// {  
   
//     for(int j=1;j<=2*i-1;j+=2){      method -3
//         cout<<j<<" ";
       
    
//     }

// cout<<endl;

// }

// }


/// CHAPTER NO - 5 FUNCTIONS AND POINTERS

// use

// 1) to tackle repetition
// 2) use particular part of code many times

 // Basic syntax of function

//  fun(){
//     //code
//  }

// main() - it cannot be called more than once
//  return; =- keyword which stop the function like breaks;
// we can make unlimited function


//     #include<iostream>
// using namespace std;
// void usa(){
//     cout<<"You are in usa \n";
  
//     return;
//      cout<<"You are in usa \n";
// }
// void india(){
//     cout<<"You are in india \n";
//   return;
// }
// int main(){

//   usa();
// //  cout<<"You are in main \n";
// //  india();




// }
//


// MULTIPLE FUNCTION

//     #include<iostream>
// using namespace std;
// void usa(){
//     cout<<"You are in usa \n";
  
//     return;
//      cout<<"You are in usa \n";
// }
// void india(){
//     cout<<"You are in india \n";
//   usa();
// }
// int main(){


//  cout<<"You are in main \n";
//  india();

// return 0;


// }


// sum

//     #include<iostream>
// using namespace std;
// void sum( int a, int b){
//     cout<<a+b;
  
  
// }
// int main(){

// int a ,b;

//  cout<<"enter first no. \n";
// cin>>a;
// cout<<"enter second no. \n";
// cin>>b;
// sum(a,b);



// }


// return type
// return are two type its change nature  from int to void  in void stop the procces & in int return the particular value

//     #include<iostream>
// using namespace std;
// int sum( int a, int b){
//     return a+b;
  
  
// }
// int main(){

// int a ,b;

//  cout<<"enter first no. \n";
// cin>>a;
// cout<<"enter second no. \n";
// cin>>b;
// cout<<sum(a,b);



// }


// LIBRARY FUNCTION//
// MEAN SET OF PRE DEFINE FUNCTIONS//
// LIKE 
// sqrt() cbrt() min max pow etc 

//     #include<iostream> // header diclearatrion
//      #include<cmath>
// using namespace std;

// int main(){

// cout<<cbrt(8)<<endl;                  /// library function 

// cout<<min(4,6)<<endl;
// cout<<max(4,6)<<endl;
// cout<<pow(4,6)<<endl;


// }



// scope of variable function - scope mean  aukat of variable

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for (int i=0; i<=10; i++)
//     {
//         cout<<i<<endl;
//     }
//     cout<<i<<endl;
// }



// ques swap the value

// #include<iostream>
// using namespace std;
// int main(){
//    int x=2;
//    int y=5;
//    cout<<x<<" "<<y<<endl;   method-1
//    int temp =x;
//    x=y;
//    y= temp;
//    cout<<x<<" "<<y<<endl;

// }


// #include<iostream>
// using namespace std;
// int main(){
//    int x=2;
//    int y=5;
//    cout<<x<<" "<<y<<endl;  method-2
//   x=x+y;
//   y=x-y;
//   x=x-y;
//    cout<<x<<" "<<y<<endl;

// }



//PASS BY VALUE AND PASS BY REFRENCE//

// #include<iostream>
// using namespace std;
// void   swap(int& x , int& y){ // & is pass by refrence
// int temp=x;
// x=y;
// y=temp;
// }
// int main(){
//    int x=2;
//    int y=5;
//    cout<<x<<" "<<y<<endl;
//  swap(x,y);
//    cout<<x<<" "<<y<<endl;

// }


// pointers///////////we can acces value of variable whose sddress in the pointer
// using derefrence /* operator
// #include<iostream>
// using namespace std;
// // & is pass by refrence & ---> print location

// int main(){
//    int x=3;
//    int* p=&x; // ---ptr / p is pointer

//  cout<<&x<<endl;
//    cout<<p<<endl;
//     cout<<x<<endl;
//    cout<<*p<<endl; // * oper


// }

//dereferenceOperator

// #include<iostream>
// using namespace std;



// int main(){
//    int x=12;
//    int* ptr=&x; // ---ptr / p is pointer

//    cout<<x<<endl;
//     *ptr=17;
//     cout<<x<<endl;


// }

// swap using  pointer

// #include<iostream>
// using namespace std;
// void   swap(int* a, int* b){ // & is pass by refrence
// int temp=*a;
// *a=*b;
// *b=temp;
// }
// int main(){
//    int x=2;
//    int y=5;
//    cout<<x<<" "<<y<<endl;
//  swap(x,y);
//    cout<<x<<" "<<y<<endl;

// }


// CHAPTER -6 RECURSION /


// FUNCTION CALL ITSELF
// #include<iostream>
// using namespace std;
// void greet(){
//     cout<<"good morning \n";
//  greet();
// }
// int main(){
//     greet();
// }


// *Multiple Calls
// Ques : Write a function to calculate the nth
// fibonacci number using recursion.

// #include<iostream>
// using namespace std;

// int fibo(int a){    
//     if(a==1 || a==2) return 1; /// base case
//     return fibo(a-1) + fibo(a-2);    
  

// }
// int main(){
//     int a;
//     cout<<"Enter value of a base  : \n";
//     cin>>a;
   
//     cout<<fibo(a);
// }



// CHAPTER NO-7 ARRAYS

// WHAT IS ARRAY - list of integer 11,545,5465,4556,4545
// -list of char  n'jk'nhh'nhyrhr'nhj'
// -list of float 56.56 .56780
// // to store data
// ek declearation  se multiple dabbe bana sakta hu.


// syntax of array
// syntax declearation 
// int x[5];   five dabbe
// int x[ 0]=4;-- intializon of array elements(indirdual)



// #include<iostream>
// using namespace std;
// int main(){
//    // 5 integers —> 6,2,8,5,0
// int arr[5]; // declaration 
// cout<<"enter a array element : \n";
// for (int i = 0; i <= 4; i++)
//  {
//     cin>>arr[i];
//  }
 

//  for (int i = 0; i <= 4; i++)
//  {
//     cout<<arr[i]*2<<" ";
//  }
// arr[0]=100;
// cout<<endl;
//   for (int i = 0; i <= 4; i++)
//  {
//     cout<<arr[i]<<" ";
//  }
 
// }


// intialization of array method -2

// #include<iostream>
// using namespace std;
// int main(){
//    // 5 integers —> 6,2,8,5,0
// int arr[5]= {4,5,8,9,1}; 
// for (int i = 4; i >=0; i--)
//  {
//    cout<<arr[i]<<" "; // reverse printing
//  }
 

 
// }


// memory allocation in array



// passing array to functions

// #include<iostream>
// using namespace std;
// void change(int arr[]){
//     arr[0]=9;
// }
// int main(){
//     int arr[3]={1,2,3};
//     for (int i = 0; i <=2; i++)
//     {
//          cout<<arr[i]<<" ";
//     }
//      cout<<endl;
//     change(arr);
//      for (int i = 0; i <=2; i++) //array pass by refrence hota hai 
//                                 // but normal int mai pass by value  hota hai
//     {
//          cout<<arr[i]<<" ";
//     } 
    
// }
 

 /// CHAPTER -8 2D ARRAYS  ///vector

//  What and why?
// So far we have explored arrays with only one dimension. It is also
// possible for arrays to have two or more dimensions. The two
// dimensional array is also called a matrix.

// int arr[r][c];
// This is a 2D array where r depicts number of rows in matrix and c
// depicts number of columns in the matrix.

// basic syntax of 2d array

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[2][3];
//     arr[0][0] =6 ;
//     arr[0][1] = 1;
//     arr[0][2] = 2;
//     arr[1][0] = 4;
//     arr[1][1] = 3;
//     arr[1][2] = 5;
//    for ( int j= 0;j<3; j++)//row //col
//    {
//     for ( int i= 0;i<2; i++)//cols  //row
//    {
//    cout<<arr[i][j]<<" ";
//    }
//    cout<<endl;
//    }
   

// }

// Ques : Write a program to add two matrices.


// #include<iostream>
// using namespace std;
// int main(){

//     int arr[4][2] = {{76,81},{13,76},{82,91},{88,90}};
//   int mx = INT16_MIN;
//    for ( int i= 0;i<4; i++)//row
//    {
//     for ( int j= 0;j<2; j++)//cols  
//    {
//    mx = max(mx,arr[i][j]);
//    }
  
//    }
//     cout<<mx;

// }

/// CHAPTER NO.- 9 STRINGS -- char arrays

// #include<iostream>
// using namespace std;
// int main(){
// // shubham
//     // char arr[7] = {'s','h','u','b','h','a','m'};
// //  string x = "shubham is boss"; // declearation and intialization in one line
   
// string s;
// cout<<"Enter a string : \n";
// // cin>>s;
// getline(cin,s);
// cout<<s;

// }


// indexing of string 

// \0 is a null character to declear string end here
// #include<iostream>
// using namespace std;
// int main(){
// string s = "shubham";

// cout<<s.length();


// }

// Ques : Input a string and count all
// the vowels in the given string.


// #include<iostream>
// using namespace std;
// int main(){
// string s = "Cow is a animal  four legs";
// int count=0 ;
// for (int i = 0; i <s.length(); i++)
// {
//     if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
//     {
//         count++;
//     }
    
// }
// cout<<count;


// }


//  Built-in string functions
// STL - STANDARD TEMPLATE LIBRARY
// size()
// length()
// push_back()  
// append()
// pop_back()
//clear 
// '+' operator
// reverse()

// #include<iostream>
// using namespace std;
// int main(){
// string s = "shubham";


// // s.push_back('a');
// // cout<<s<<endl;
// // s.push_back('s');
// // cout<<s<<endl;
// s.pop_back();
// cout<<s<<endl;


// cout<<s<<" "<<s.length()<<endl;
// // s.clear();
// // cout<<s<<" "<<s.length()<<endl;

// }


// '+' operator

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
// string s = "shubham is man";

// cout<<s<<endl;

// reverse(s.begin(),s.end());

// cout<<s<<endl;

// }



//to_string  integer to string

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     int x= 4564654;
// string s = to_string(x);
// s+="hello";
// cout<<s.length()<<endl;

// }

/// stoi        string to integer            


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
    
// string s = "shubham";
// int x= stoi(s);
// cout<<x+1<<endl;

// }
