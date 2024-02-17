#include <cstring>
#include <iostream>

using namespace std;

char str[20000];

int main() {
    cin.getline(str, 20000);
    char longest[2000] = "";
    char shortest[2000] = "";
    int length = strlen(str);
    int start = 0;
    int end = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ' && str[i] != '.' && str[i] != ',') {
            end++;
        } else {
            if (end - start > strlen(longest)) {
                strncpy(longest, str + start, end - start);
                longest[end - start] = '\0';
            }
            if (strlen(shortest) == 0 || end - start < strlen(shortest)) {
                strncpy(shortest, str + start, end - start);
                shortest[end - start] = '\0';
            }
            start = end + 1;
            end = start;
        }
    }
    cout << longest << endl << shortest;
}
