#include <math.h>
#include <stdio.h>
#include <string.h>

int main() {
  // dataType();
  // arithmaticOperation();
  // takeInput();
  // celciusToFahrenheit();
  // conditionalOperator();
  // mark();
  // logicalOperator();
  // useModulus();
  // loop();
  // loop2();
  // sumOfInteger();
  // doWhile();
  // forLoop();
  // continueStatement();
  // printMultiple();
  // array();
  // additionFromArray();
  // reverse();
  // reverse2();
  // stringInput();
  // stringLength();
  // findInt();
  // squareRoot();
  // power();
  stringLengthWithStringHeader();
  return 0;
}

void dataType() {
  char ch;
  ch = 'X';
  printf("Value stored in ch is %c\n", ch);
  ch = 'Y';
  printf("Value stored in ch is %c", ch);
}

void arithmaticOperation() {
  int number1, number2;
  number1 = 12;
  number2 = 4;
  printf("number1 + number2 = %d\n", number1 + number2);
  printf("number1 - number2 = %d\n", number1 - number2);
  printf("number1 * number2 = %d\n", number1 * number2);
  printf("number1 / number2 = %d\n", number1 / number2);
}

void takeInput() {
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  printf("%d\n", n1 + n2);
}

void celciusToFahrenheit() {
  double C, F;
  scanf("%lf", &C);
  F = (9 / 5 * C) + 32;
  printf("%lf\n", F);
}

void conditionalOperator() {
  int n1 = 5, n2 = 7;
  if (n1 == n2) {
    printf("numbers are equal");
  } else if (n1 > n2) {
    printf("n1 is greater than n2");
  } else {
    printf("Numbers are not equal and n1 is smaller than n2");
  }
}

void mark() {
  int marks;
  scanf("%d", &marks);
  if (marks >= 80) {
    printf("Your grade in A+\n");
  } else if (marks >= 70) {
    printf("Your grade is A\n");
  } else if (marks >= 60) {
    printf("Your grade is A-");
  } else if (marks >= 50) {
    printf("Your grade is B\n");
  } else if (marks >= 40) {
    printf("Your grade is C\n");
  } else if (marks >= 33) {
    printf("Your grade is D\n");
  } else {
    printf("Your grade is F\n");
  }
}

void logicalOperator() {
  int age;
  scanf("%d", &age);
  if (age >= 18 && age <= 35) {
    printf("Yes, you are eligible");
  } else {
    printf("Sorry, you are not eligible");
  }
}

void useModulus() {
  int num;
  scanf("%d", &num);
  if (num % 3 == 0 && num % 5 == 0) {
    printf("FizzBuzz\n");
  } else if (num % 3 == 0) {
    printf("Fizz\n");
  } else if (num % 5 == 0) {
    printf("Buzz\n");
  }
}

void loop() {
  int i = 0;
  while (i < 5) {
    printf("I Love Bangladesh.\n");
    i = i + 1;
  }
}

void loop2() {
  int n = 1;
  while (n <= 100) {
    printf("%d\n", n);
    n = n + 1;
  }
}

void sumOfInteger() {
  int n, sum;
  n = 1;
  sum = 0;

  while (n <= 100) {
    sum = sum + n;
    n++;
  }
  printf("Result: %d", sum);
}

void doWhile() {
  int n = 1;
  do {
    printf("%d\n", n);
    n++;
  } while (n <= 100);
}

void forLoop() {
  int n = 1, sum = 0;
  for (n = 1; n <= 100; n++) {
    sum = sum + n;
  }
  printf("Result: %d\n", sum);
}

void continueStatement() {
  int i;
  for (i = 1; i <= 5; i++) {
    if (i == 1) continue;
    printf("%d", i);
  }
}

void printMultiple() {
  int i, n;
  printf("Enter number: ");

  scanf("%d", &n);
  for (i = 1; i <= 10; i++) {
    printf("%d * %d = %d\n", n, i, n * i);
  }
}

void array() {
  int marks[5];
  marks[0] = 87;
  marks[1] = 82;
  marks[2] = 91;
  marks[3] = 79;
  marks[4] = 83;

  printf("%d\n", marks[0]);
  printf("%d\n", marks[1]);
  printf("%d\n", marks[2]);
  printf("%d\n", marks[3]);
  printf("%d\n", marks[4]);
}

void additionFromArray() {
  int numbers[10] = {9, 76, 2, 45, 3, 81, 25, 33, 71, 10};
  int i, sum;
  sum = 0;
  for (i = 0; i < 10; i++) {
    sum += numbers[i];
  }
  printf("Sum: %d\n", sum);
}

void reverse() {
  int a = 15, b = 9, c;
  c = a;
  a = b;
  b = c;
  printf("Value of a is %d, value of b is %d", a, b);
}

void reverse2() {
  int array[] = {1, 2, 3, 4, 5};
  int n = 5;
  int temp;
  for (int i = 0; i < n / 2; i++) {
    temp = array[i];
    array[i] = array[n - 1 - i];
    array[n - 1 - i] = temp;
  }
  for (int i = 0; i < n; i++) {
    printf("%d\n", array[i]);
  }
}

void stringInput() {
  char name[80];
  scanf("%s", &name);
  printf("%s\n", name);
}

void stringLength() {
  char name[80];
  int length;
  scanf("%s", name);
  int i = 0;
  while (name[i] != '\0') {
    i++;
  }
  length = i;
  printf("%s has %d characters.\n", name, length);
}

// It's called Linear Search
void findInt() {
  int array[] = {1, 2, 3, 4, 6, 8, 9};
  int key, i, n = 7;
  scanf("%d", &key);
  for (i = 0; i < n; i++) {
    if (array[i] == key) {
      printf("%d is found in the array.\n", key);
      break;
    }
  }
  if (i == n) {
    printf("%d is not found in the array.", key);
  }
}

// math.h added
void squareRoot() {
  double num, root;
  scanf("%lf", &num);
  root = sqrt(num);
  printf("Square root of %lf is %lf\n", num, root);
}

void power() {
  double p, x, y;
  scanf("%lf %lf", &x, &y);
  p = pow(x, y);
  printf("%lf to the power %lf is: %lf\n", x, y, p);
}

// string.h added
void stringLengthWithStringHeader() {
  char name[80];
  scanf("%s", name);
  int length = strlen(name);
  printf("%s contains %d characters.\n", name, length);
}