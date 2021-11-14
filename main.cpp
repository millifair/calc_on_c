#include <iostream>
int getnumber1() {
    int value1;
    std::cout << "введите первое число  ";
    std::cin >> value1;
    return value1;
}
int getnumber2() {
    int value2;
    std::cout << "введите второе число  ";
    std::cin >> value2;
    return value2;
}
void operators(char *operator1) {
    bool flag= true;
    std::cout << "введите оператор  ";
  std::  cin >> operator1;
  while (flag == true) {
      if ((strcmp(operator1, "+") != 0) && (strcmp(operator1, "-") != 0)) {
          std::cout << "повторите ввод  ";
          std::cin >> operator1;
      }
      else {
          flag = false;
      }
  } 
}
int schet(char * op,int (*num1)(),int (*num2)()) {
    if ((strcmp(op, "+")==0)) {
        return num1() + num2();
    }
    if ((strcmp(op, "-") == 0)) {
        return num1() - num2();
    }

}
int main()
{
    setlocale(LC_ALL, "Russian");
    char operator1[255] = "";
    char* op1 = operator1;
    operators(op1);
    std::cout << schet(op1, getnumber1, getnumber2);;
    return 0;
}
