#include <iostream>
using namespace std;

int main() {
    int n=4;
    for (int i=0;i<n;i++){
        char ch='A';
        for (int j=0;j<n;j++){
            cout<<ch;
            ch+=1;
            /* ascii values mai hote naa alphabet
            isley a=65, +1 hoke 66 ho gya B ho gya*/
        }
        cout<<endl;
    }
    return 0;
}
/*
Dry run step-by-step, like before:

```cpp
int n = 4;

for (int i = 0; i < n; i++) {
    char ch = 'A';
    for (int j = 0; j < n; j++) {
        cout << ch;
        ch += 1;
    }
    cout << endl;
}
```

---

### Before loops

* `n = 4`

---

## Outer loop: `i = 0`

Check: `0 < 4` → **true** → enter loop.

* `char ch = 'A';`

### Inner loop (j from 0 to 3)

* `j = 0`: `0 < 4` → print `A`, then `ch = 'B'`
* `j = 1`: `1 < 4` → print `B`, then `ch = 'C'`
* `j = 2`: `2 < 4` → print `C`, then `ch = 'D'`
* `j = 3`: `3 < 4` → print `D`, then `ch = 'E'`
* `j = 4`: `4 < 4` → false → inner loop ends

`cout << endl;` → go to next line.

**Row 1 output:** `ABCD`

---

## Outer loop: `i = 1`

`i++` → `i = 1`
Check: `1 < 4` → **true**

* `char ch = 'A';` (again reset)

### Inner loop

* j = 0 → print `A`, ch = 'B'
* j = 1 → print `B`, ch = 'C'
* j = 2 → print `C`, ch = 'D'
* j = 3 → print `D`, ch = 'E'
* j = 4 → stop

newline.

**Row 2 output:** `ABCD`

---

## Outer loop: `i = 2`

`i++` → `i = 2`
`2 < 4` → **true**

* `ch = 'A';`

Inner loop does the same: prints `A B C D`, then newline.

**Row 3 output:** `ABCD`

---

## Outer loop: `i = 3`

`i++` → `i = 3`
`3 < 4` → **true**

* `ch = 'A';`

Inner loop again prints `A B C D`, then newline.

**Row 4 output:** `ABCD`

---

## Outer loop: `i = 4`

`i++` → `i = 4`
Check: `4 < 4` → **false** → outer loop ends.

---

### Final output

```
ABCD
ABCD
ABCD
ABCD
```

now why char ch is inside the loop and not above the 
outer loop for, because every line starts with 'A'so
we want that agle line ka bhi character starting ka
'A' ho so what does the inner line do? it starts
the line thats why A is above it so that it automatically
comes in front and then the rest of the result is 
printed */