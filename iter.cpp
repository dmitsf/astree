#include <iostream>
#include <vector>

using namespace std;

int main() {

vector<int> the_vector;
vector<int>::iterator the_iterator;

for (int i=0; i < 10; i++) {
  the_vector.push_back(i);
 }
int total = 0;
the_iterator = the_vector.begin();
while (the_iterator != the_vector.end()) {
  total += *the_iterator; /* Обратите внимание, что доступ к элементу можно получить посредством разыменования итератора */
  ++the_iterator;
 }


 std::cout << "Итого=" << total << endl;

}
