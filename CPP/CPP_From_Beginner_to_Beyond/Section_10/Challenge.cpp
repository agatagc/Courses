/* 
A simple and very old method of sending secret messages in the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a ssecret message.

Encrypt this messageusing the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the orginal message.

You may uuse the 2 strings below for your subsitition.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the ciper only substitutes letters - you could easily add digits, puncuation, whitespace and so forth. 
Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have test!
Reuse existing functionality in libraries and in the std::str ing class!
*/

#include <iostream>
#include <string>

int main() 
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message {};
    cout << "";

    return 0;
}