#include<fstream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(0));
    const char* filenames[] = {"file1.txt", "file2.txt", "file3.txt"};
    const int countNumbers = 10;
    for (const char* filename : filenames){
        ofstream file(filename);
        if (!file.is_open()) return 1;
        for (int i = 0; i < countNumbers; i++){
            int number = rand()%10+1;
            file << number;
            if (i < countNumbers - 1) file << " ";
        }
    }
    return 0;
}   