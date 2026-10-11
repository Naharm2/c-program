#include <stdio.h>

int main() {
    int timer = 5; // शुरुआत 5 से होगी

    // जब तक टाइमर 0 से बड़ा है, लूप चलेगा
    while (timer > 0) {
        printf("रॉकेट लॉन्च इन: %d... 🚀\n", timer);
        
        timer--; // हर बार टाइमर को 1 से कम कर रहे हैं (5, 4, 3, 2, 1)
    }

    printf("BOOM! रॉकेट उड़ गया! 🌌🛸\n");
    return 0;
}
