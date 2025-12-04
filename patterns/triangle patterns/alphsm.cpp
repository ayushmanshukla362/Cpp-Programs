#include <iostream>
using namespace std;

int main() {
    int n = 5;
    char ch = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ch;
        }
        ch++;  // move to next letter after printing the row
        cout << endl;
    }
    return 0;
}
/*Here is the **clean, step-by-step dry run**, including what happens to **`ch`** in every step.

```cpp
int n = 5;
char ch = 'A';

for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
        cout << ch;
    }
    ch++;      // next row uses next alphabet
    cout << endl;
}
```

---

# 🔹 Before loops

* `n = 5`
* `ch = 'A'`

Outer loop will run for `i = 0, 1, 2, 3, 4`.

---

# ⭐ Row 1 → i = 0

* Current `ch = 'A'`
* Inner loop: `j <= 0` → runs 1 time

Inner loop steps:

* j = 0 → print **A**

After row:

* `ch++` → now `ch = 'B'`

**Row 1 output:**

```
A
```

---

# ⭐ Row 2 → i = 1

* Current `ch = 'B'`
* Inner loop: `j <= 1` → runs 2 times

Inner loop steps:

* j = 0 → print **B**
* j = 1 → print **B**

After row:

* `ch++` → `ch = 'C'`

**Row 2 output:**

```
BB
```

---

# ⭐ Row 3 → i = 2

* Current `ch = 'C'`
* Inner loop: `j <= 2` → runs 3 times

Inner loop:

* j = 0 → C
* j = 1 → C
* j = 2 → C

After row:

* `ch = 'D'`

**Row 3 output:**

```
CCC
```

---

# ⭐ Row 4 → i = 3

* Current `ch = 'D'`
* Inner loop: 4 times (`j = 0..3`)

Print: D D D D

After row:

* `ch = 'E'`

**Row 4 output:**

```
DDDD
```

---

# ⭐ Row 5 → i = 4

* Current `ch = 'E'`
* Inner loop: 5 times (`j = 0..4`)

Print: E E E E E

After row:

* `ch = 'F'` (not used further)

**Row 5 output:**

```
EEEEE
```

---

# 🎯 Final Output

```
A
BB
CCC
DDDD
EEEEE
```

If you want, I can also dry-run the reverse pattern or the triangle where letters keep increasing across rows (A, BC, DEF…).
*/
