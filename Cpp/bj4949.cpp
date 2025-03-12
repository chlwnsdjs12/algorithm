#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

vector<char> stringToChar(const string& str)
{
    vector<char> vec;
    for(char c : str)
    {
        vec.push_back(c);
    }
    return vec;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string input, value;
    vector<string> result;
    vector<char> arr;

    while(1)
    {   
        // 입력 받은 한 줄을 line의 각 인덱스에 넣기
        vector<string> line;
        getline(cin, input);
        line.push_back(input);
        stack<char> extracted;

        // line의 각 인덱스에 있는 한 줄을 한 문자씩 arr에 넣기
        arr = stringToChar(line.front());

        // 문자열 입력 받기를 그만 하는 경우
        if(arr.front() == '.')
        {
            break;
        }
        // 문자열 입력을 받은 경우
        else
        {
            for(char& each : arr)
            {
                if(each == '(' || each == '[')
                {
                    extracted.push(each);
                }
                // 왼쪽 소괄호 or 왼쪽 대괄호 가 없는데 오른쪽 소괄호 or 오른쪽 대괄호가 온 경우
                else if(extracted.size() == 0 && (each == ']' || each ==')'))
                {
                    extracted.push(each);
                    break;
                }
                // 괄호의 짝이 맞는 경우
                else if((extracted.empty() == false && extracted.top() == '(' && each == ')') || (extracted.empty() == false && extracted.top() == '[' && each ==']'))
                {
                    extracted.pop();
                }
                // 괄호의 짝이 안맞는 경우
                else if((extracted.empty() == false && extracted.top() == '[' && each == ')') || (extracted.empty() == false && extracted.top() == '(' && each ==']'))
                {
                    break;
                }
            }
            if(extracted.empty())
            {
                value = "yes";
            }
            else
            {
                value = "no";
            }
            result.push_back(value);
        }
    }

    for(string& each : result)
    {
       cout << each << "\n";
    }
}