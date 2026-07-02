#include <iostream>
#include <string>

using namespace std;

string encryptDecrypt(string input, char key) {
    int length = input.length();
    for (int i = 0; i < length; i++) {
        input[i] = input[i] ^ key;
    }
    return input;
}

int main() {
    string message = "Ahmad Soheil";
    char secretKey = 'Z';

    cout << "before encrypt: " << message << endl;

    string encrypted = encryptDecrypt(message, secretKey);
    cout << "Cipher Text: " << encrypted << endl;

    string decrypted = encryptDecrypt(encrypted, secretKey);
    cout << "Decrypted Text: " << decrypted << endl;

    return 0;
}
