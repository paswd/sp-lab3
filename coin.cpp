//coin.cpp
#include "mlisp.h"

double cc(double amount, double largest__coin);
double count__change(double amount);
double next__coin(double coin);
double GR__AMOUNT();
extern double LAGEST__COIN;
extern double LAST__DIGIT__OF__GROUP__NUMBER;

double cc(double amount, double largest__coin){
{return
 (  (amount == 0 || largest__coin == 1.) ? 1.
  : !(amount  > 0 && largest__coin > 0) ? 0
  : (cc(amount, next__coin(largest__coin)) +
     cc(amount - largest__coin, largest__coin)
    )
 );
}}

double count__change(double amount){
{return
 cc(amount, LAGEST__COIN);
}}

double next__coin(double coin){
{return 
  ( coin == 25. ? 15.
  : coin == 15. ? 5.
  : coin == 5. ? 2.
  : 0
 );
}}

double GR__AMOUNT(){{
  return 10. * LAST__DIGIT__OF__GROUP__NUMBER;
}}
double LAGEST__COIN=25.;
double LAST__DIGIT__OF__GROUP__NUMBER=8.;

int main(){
 display(" SPA variant 17");newline();
 display(" 2-5-15-25");newline();
 display("count__change for 100 \t= ");
 display(count__change(100.));newline();
 display("count__change for ");
 display(GR__AMOUNT());
 display(" \t= ");
 display(count__change(GR__AMOUNT()));newline();

 std::cin.get();
 return 0;
}