int main() {
  
  double temp;

  std::string foo;
  double bar;

  std::cout << "What temp are you wanting to convert to? [ 'f' or 'c' ]\n";
  
  std::cin >> foo;
  
  if(foo == "f") { // to fahrenheit
  // (foo - 32) * 5/9
    std::cout << "Provide a temperature in celcius!\n";
    std::cin >> bar;
     int fahrenheit = (bar * 9/5) + 32;
     std::cout << fahrenheit;
  } else if(foo == "c") { // to celcius
    std::cout << "Provide a temperature in fahrenheit!\n";
    std::cin >> foo;
     int celcius = (bar * 32) * 5/9;
     std::cout << celcius;
  }
  
  return 0;
}
