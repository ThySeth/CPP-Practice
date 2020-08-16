double a = 4.99;

const doube b = 9.99; // Cannont be modified with "const" declaired before the variable

if(a < b) {
  cout << a << " is less than " << b; // 4.99 is less than 9.99
}

a = 10.99;

if(a < b) {
  cout << a << " is less than " << b;
} else {
  cout << a << " is greater than " << b; // 10.99 is greater than 9.99
}

double c = 16.77;

if(a > c) {
  cout << a << " is greater than " << c;
} else if(a > b) {
  cout << a << " is greater than " << b;
}
