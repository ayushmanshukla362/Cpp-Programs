#include <iostream>
using namespace std;

int main() {
    int n=4;
    for (int i=0;i<n;i++){
        for (int j=0;j<i+1;j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}
/*Here is the **clear step-by-step dry run** of your code:

```cpp
int n = 4;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
        cout << (i + 1);
    }
    cout << endl;
}
```

---

# Before loops

* `n = 4`

Outer loop will run for `i = 0, 1, 2, 3`

---

# ⭐ Row 1 → i = 0

Check: `0 < 4` → true

Inner loop condition: `j < i+1` → `j < 1`

* j = 0 → print `i+1 = 1`
* j becomes 1 → `1 < 1` false → stop

Print newline.

**Row 1 output:**

```
1
```

---

# ⭐ Row 2 → i = 1

Check: `1 < 4` → true

Inner loop: `j < i+1` → `j < 2`

* j = 0 → print `2`
* j = 1 → print `2`
* j = 2 → `2 < 2` false → stop

Print newline.

**Row 2 output:**

```
22
```

---

# ⭐ Row 3 → i = 2

Inner loop: `j < 3`

* j = 0 → print `3`
* j = 1 → print `3`
* j = 2 → print `3`
* j = 3 → stop

**Row 3 output:**

```
333
```

---

# ⭐ Row 4 → i = 3

Inner loop: `j < 4`

* j = 0 → print `4`
* j = 1 → print `4`
* j = 2 → print `4`
* j = 3 → print `4`
* j = 4 → stop

**Row 4 output:**

```
4444
```

---

# 🎯 Final Output

```
1
22
333
4444
```

If you want, I can also show how to print the reverse pattern or character version.
*/