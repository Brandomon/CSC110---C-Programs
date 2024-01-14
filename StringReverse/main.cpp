#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence, rSentence, temp;
    int index, length;

    cout << "Enter a sentence : ";
    getline(cin, sentence);
    length = sentence.length();

    index = sentence.rfind(" ",length);
    //cout << index << endl;
    rSentence = "";

    while(index != -1)
    {
        temp = sentence.substr(index + 1, length);
        length = length - temp.length() - 1;
        rSentence += temp + " ";
        cout << rSentence << endl;
        sentence = sentence.substr(0, index);
        index = sentence.rfind(" ", index - 1);
        cout << index << endl;
    }
    rSentence += sentence;
    cout << rSentence << endl;

    return 0;
}
