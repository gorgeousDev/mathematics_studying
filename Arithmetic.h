#ifndef ARITHMETIC_H
#define ARITHMETIC_H

class Arithmetic
{
private:
  /* data */
public:
  // العمليات الأساسية
  int add(int a, int b);
  int subtract(int a, int b);
  int multiply(int a, int b);
  double divide(int a, int b); // return -1 لو القسمة غير معرفة

  // القواسم والمضاعفات
  int gcd(int a, int b); // القاسم المشترك الأكبر
  int lcm(int a, int b); // المضاعف المشترك الأصغر

  // تحليل العدد لعوامله الأولية
  void primeFactors(int n);

  // دالة للقسمة المطولة (عرض خطوات)
  void longDivision(int dividend, int divisor);
};

#endif
