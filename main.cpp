#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outf("list.txt");
    string temp;
    const string mass[159] = {"", " ", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "A", "b", "B", "c", "C", "d", "D", "e", "E", "f", "F", "g", "G", "h", "H", "i", "I", "j", "J", "k", "K", "l", "L", "m", "M", "n", "N", "o", "O", "p", "P", "q", "Q", "r", "R", "s", "S", "t", "T", "u", "U", "v", "V", "w", "W", "x", "X", "y", "Y", "z", "Z", "а", "А", "б", "Б", "в", "В", "г", "Г", "д", "Д", "е", "Е", "ё", "Ё", "ж", "Ж", "з", "З", "и", "И", "й", "Й", "к", "К", "л", "Л", "м", "М", "н", "Н", "о", "О", "п", "П", "р", "Р", "с", "С", "т", "Т", "у", "У", "ф", "Ф", "х", "Х", "ц", "Ц", "ч", "Ч", "ш", "Щ", "ъ", "Ъ", "ы", "Ы", "ь", "Ь", "э", "Э", "ю", "Ю", "я", "Я", "~", "`", "!", "@", "#", "$", "%", "^", "&", "*", "(", ")", "_", "-", "+", "=", "{", "}", "[", "]", ":", ";", "'", "<", ">", ",", ".", "?", "/"};
    for(int a = 0; a < 159; a++) {
        for (int b = 0; b < 159; b++) {
            for (int c = 0; c < 159; c++) {
                for (int d = 0; d < 159; d++) {
                    for (int e = 0; e < 159; e++) {
                        for (int f = 0; f < 159; f++) {
                            for (int g = 0; g < 159; g++) {
                                for (int h = 0; h < 159; h++) {
                                    for (int i = 0; i < 159; i++) {
                                        for (int j = 0; j < 159; j++) {
                                            for (int k = 0; k < 159; k++) {
                                                for (int l = 0; l < 159; l++) {
                                                    for (int m = 0; m < 159; m++) {
                                                        for (int n = 0; n < 159; n++) {
                                                            for (int o = 0; o < 159; o++) {
                                                                for (int p = 0; p < 159; p++) {
                                                                    temp = mass[a] + mass[b] + mass[c] + mass[d] + mass[e] + mass[f] + mass[g] + mass[h] + mass[i] + mass[j] + mass[k] + mass[l] + mass[m] + mass[n] + mass[o] + mass[p];
                                                                    outf << temp << endl;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
