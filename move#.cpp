#include <iostream>
#include <cstring>
using namespace std;

void moveHash(char str[], int n) {
    char str1[100] = {0}, str2[100] = {0}; // Initialize arrays to 0 (null-terminated)
    int j = 0, k = 0;

    // Loop through the string to separate hashes and non-hash characters
    for (int i = 0; i < n; i++) {
        if (str[i] == '#') {
            str1[j++] = str[i]; // Add hashes to str1
        } else {
            str2[k++] = str[i]; // Add non-hash characters to str2
        }
    }

    // Null-terminate both strings
    str1[j] = '\0';
    str2[k] = '\0';

    // Concatenate str1 and str2 (str1 contains the hashes at the start)
    strcat(str1, str2);

    // Print the final result
    cout << str1 << endl;
}

int main() {
    char a[100];
    cin >> a;
    int len = strlen(a);
    moveHash(a, len);
    return 0;
}
