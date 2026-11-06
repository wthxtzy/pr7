#include <iostream>
int main (){
    setlocale(LC_ALL, "");
int N,d;

std::cout << "Enter the value of N";
std::cin >> N;
int k=0;
for (d = 1; d <= N; d++)
{
    if (N%d == 0 ){
    k++;
}
//else {
//    return 0;
//}

}
std::cout << "The amount of even divider for "<< N << " is: " << k;
    return 0;
}

