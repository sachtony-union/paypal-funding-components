#include <iostream>
#include <string>;
using namespace std;

void myFunction() {
  cout << "I send funding to Vietnam!\n";
  cout << "Add bank account and withdraw or send money to bank local Vietnam!\n";
   cout << "Bank send sms to number phone or report to them!\n";
  cout << "They only provider bank account and get money at bank local of them!\n";
  cout << "Recipients provide information: identity card at the bank, provide money transaction code, amount received, money source from Paypal!\n";
  
}
int main() {
  myFunction();
  return 0;
};
// Data for sandbox when account paypal live
int main() {
  string sandbox = "sandbox.paypal.com";
  string &live = sandbox;

  cout << sandbox << "\n";
  cout << live << "\n";
  return 0;
}
