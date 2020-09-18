void Binary(int x) {
 int[] binary;
 int place = 0;
  try {
    if(x >= 128) {
      binary[place] = 1;
       place++;
        x - 128;
         if(x < 0) return x + 128; binary[place--] = 0;
    }
    if(x >=64) {
      binary[place] = 1;
       place++;
        x - 64;
         if(x < 0) return x + 64; binary[place--] = 0;
    }
    if(x >= 32) {
      binary[place] = 1;
       place++;
        x - 32;
         if(x < 0) return x + 32; binary[place--] = 0;
    }
    if(x >= 16) {
      binary[place] = 1;
       place++;
        x - 16;
         if(x < 0) return x + 16; binary[place--] = 0;
    }
    if(x >= 8) {
      binary[place] = 1;
        place++;
         x - 8;
          if(x < 0) return x + 8; binary[place--] = 0;
    }
    if(x >= 4) {
      binary[place] = 1;
        place++;
          x - 4;
           if(x < 0) return x + 4; binary[place--] = 0;
    }
    if(x >= 2) {
      binary[place] = 1;
       place++;
        x - 2;
         if(x < 0) return x + 2; binary[place--] = 0;
    }
    if(x >= 1) {
      binary[place] = 1;
       place++;
        x - 1;
         if(x < 0) return x + 1; binary[place--] = 0;
    }
    if(x == 0) {
      binary[place] =1;
    } else {
      binary[place] = 0;
    }
    cout << binary;
  }
  catch(...) {
    cout << "Looks like there was an error:\n" + ...
  }
}

int main() {
  
  cout << "Please specify an integer to convert to binary!";
  int num;
  cin >> num;
  
  Binary(num);
  
  return 0;
}
