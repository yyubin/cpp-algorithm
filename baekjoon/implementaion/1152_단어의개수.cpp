#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string line;
    getline(cin, line);    // 한 줄 전체를 문자열로 입력받고
    stringstream ss(line); // 스트림처럼 변환해서
    string word;
    int count = 0;

    while (ss >> word) // 공백 단위로 단어를 하나씩 추출
    {
        count++;
    }

    cout << count << endl;
    return 0;
}
