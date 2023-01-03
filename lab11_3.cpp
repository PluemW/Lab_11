#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    int count = 0;
    string text; 
    double sum,r,t;
    while(getline(source,text)){
        r += pow(atof(text.c_str()),2);
        sum += atof(text.c_str());
        count ++;
    }
    t = r/count;
    cout << "Number of data = "<< count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<< sum/count<<endl;
    cout << "Standard deviation = "<< pow((t-(pow((sum/count),2))),0.5);
    source.close();
    return 0;
}