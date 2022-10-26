#include <iostream>
#include <cmath>
using namespace std;

/*int getmax (int num1 , int num2){
int result;

if ((num1 > num2)) {
        result = num1;

} else {
result = num2;
}

return result;
}*/
/*int getmax (int num1, int num2, int num3){
int result;

if (num1 >= num2 && num1 >= num3){
    result = num1;
} else if (num2 >= num1 && num2 >= num3){
    result = num2;
} else {
  result = num3;
}
return result;
}*/
/*void say() {
cout << "hello bro";
//it wont get printed out because you have to call it. itll work if you put say(); inside the int main
}*/
/*void say( string name ,int age) {
cout << " hello " << name <<  " you are "  << age << endl;
}*/

/*double cube (double n) {
double result = n * n * n;
return result;

}*/
//switch statements
/*string getday (int num) {
string num;

if (num == 0){
    num ==  "sunday";
    else if  (num == 1){
        num == "monday";

    } else if  (num == 2){
        num == "tuesday";
    }else if  (num == 3){
        num == "wednesday";
    } else if  (num == 4){
        num == "thursday";
    } else if  (num == 5){
        num == "friday";
    } else if  (num == 6){
        num == "saturday";

}
else
    cout <<
return num;
} */

//or
/*string getday (int daynum) {
string dayname;

switch (daynum) {
case 0 :
    dayname = "sunday";
    break;
case 1:

dayname = "monday";
break;
case 2:

dayname = "tuesday";
break;
case 3:

dayname = "wednesday";
break;
case 4:

dayname = "thursday";
break;
case 5:

dayname = "friday";
break;
case 6:

dayname = "saturday";
break;
default:
    dayname = "invalid day";
}
return dayname;
}*/

// exponent function

/*int power ( int basenum, int pownum){
int result = 1;
for (int i =0; i < pownum; i++) {
    result = result * basenum;
}
return result;
}*/

//class and objects
/*class Book {
public:
    string title;
    string author;
    int pages;

};*/
class Book {
public:
    string title;
    string author;
    int pages;
    Book (){
    cout << "creating object" <<endl;

    }
};
int main()

{
    //int age;
   // cout << "enter your age:";
    //cin >> age;
    // for cin we us >> and it is also used to store data

   // cout << "you are" << age << "years old";

   // building a calculator

   //int num1;
   //int num2;
   //normal numbers

   //double num1;
   //double num2;

   //cout << "enter number:";
   //cin >> num1;
   // cin to input first number

  // cout << "enter number:";
  // cin >> num2;

  // cout << num1 + num2;

  // build a mad libs game
 /* string color, noun, verb;
  cout << "enter a color:";
  getline (cin, color);
   cout << "enter a noun:";
  getline (cin, noun);
   cout << "enter a verb:";
  getline (cin, verb);

  cout << "hopes of " << color << endl;
  cout << noun << " are cool" << endl;
  cout << "i love" << verb << endl; */

  /*int lucky[] = {4, 6, 7, 9 ,47};
  lucky[0] = 2;
  // to change the first number
  cout << lucky [0];*/

 /* int lucky [20];
  lucky[0] = 2;
  cout << lucky [1];*/


  // functions

  /*say();

cout << "bottom";*/
/*say("mike", 40);
say("tom", 60);
say("timmy", 70);*/

/*double answer = cube (5.0);
cout << answer;*/

// if statements

/*bool male = false;
// but if its false the code wont get printed through

if (male) {
   cout << "you are a male";

} else {
cout << " you are not male";
}*/
/*bool male = true;
bool tall = true;
// but if its false the code wont get printed through

if (male && tall) {
        // when you use || it means or
   cout << "you are a tall male";

} else if (male && !tall){
    //  ! means not
    cout << "you are a short male";

} else if (!male && tall){
    cout << "you are not male";
}
else {
cout << " you are not male or tall";
}*/

  // cout << getmax(2,5);

  //cout << getmax(20,5,6);


  // build a better calculator

  /*int num1, num2;
   char op;


   cout << "enter first number:";
   cin >> num1;
   cout << "enter operator:";
   cin >> op;
   cout << "enter second number:";
   cin >> num2;
   int result;

   if (op == '+'){
    result = num1 + num2;

   } else if  (op == '-'){
      result = num1 - num2;
   }
    else if  (op == '*'){
      result = num1 * num2;
   }
    else if  (op == '/'){
      result = num1 / num2;
   } else {
   cout << "invalid op";
   }
   cout << result;*/

   // switch statements
  // cout << getday (6);

  // while loops
  /* int index = 1;
   while (index <= 5){
        cout << index << endl;
   index++;*/

   // guessing game
/*int num = 2;
int guess;
int guessCount = 0;
int guesslim = 5;
bool outofGuesses = false;
 while (num != guess && ! outofGuesses){
        if (guessCount < guesslim){
        cout << "enter guess:";
 cin >> guess;
 guessCount++;

 } else {
 outofGuesses = true;
 }
 }
 if (outofGuesses){

    cout << "you  lose";
 } else {

 cout << " you win";
 }*/

 // for loop
/* int index = 1;
   while (index <= 5){
        cout << index << endl;
   index++;
   }
   for ( int i = 1; index <= 5; i++){
    cout << index << endl;
   }*/

  /* int nums[] = {1,2,3,7,8};
   for (int i =0 ; i < 5; i++){
    cout << nums[i] << endl;
   }*/

   //exponent function
//cout << power (2,3);

/*int numberGrid [3][2] = {
                        {1,2},

                        {3,4},
                        {5,6},
};
             cout << numberGrid [2][1];*/

/*int numberGrid [3][2] = {
                        {1,2},

                        {3,4},
                        {5,6},
};
 for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
        cout << numberGrid [i][j];
    }
    cout << endl;
 }*/

 /*int age = 19;
 double gpa = 2.7;
 string name = "mike";*/

 /*cout << "Age:" << &age << endl;
 cout << "Gpa:" << &gpa << endl;
 cout << "Name:" << &name << endl;*/

 /*int age = 19;
 int *pAge = &age;
 double gpa = 2.7;
 double *pGpa = &gpa;
 string name = "mike";
 string *pName = &name;

// cout << pAge;
 // dereferencing the pointer
 cout << *pAge;*/
 // classes and objects
 /*string name = "mike";
 double pi = 3.14;
 char fav = 'g';*/

 //book
  /*Book book1;
  book1.title = "harry p";
  book1.author = "jk";
  book1.pages = 500;

  Book book2;
  book2.title = "ltr";
  book2.author = "jl";
  book2.pages = 40;

  cout << book2.pages;*/

  // constructors
  Book book1;
  book1.title = "harry p";
  book1.author = "jk";
  book1.pages = 500;

  Book book2;
  book2.title = "ltr";
  book2.author = "jl";
  book2.pages = 40;

  cout << book2.pages;

    return 0;
}
