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

    return 0;
}
