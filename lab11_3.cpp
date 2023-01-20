#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main(){
double sum = 0, sum2 = 0, mean, stdDev, data;
int count = 0;
ifstream score("score.txt");
while (score >> data) {
sum += data;
sum2 += data * data;
count++;
}
mean = sum / count;
stdDev = sqrt((sum2 / count) - (mean * mean));
cout << "Number of data = " << count << endl;
cout << "Mean = " << setprecision(3) << mean << endl;
cout << "Standard deviation = " << setprecision(3) << stdDev << endl;
score.close();
return 0;
}