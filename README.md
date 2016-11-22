## cs50_pset1

### Usage
This is my solution for Problem Set 2 of Harvard’s CS50 course.  The solution contains multiple files, each with a unique solutions.

# Ceasar's Cipher
Encrypts messages by "rotating" each letter by _k_ positions. In other words, if p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as:

ci = (pi + k) % 26


# Vigenere
