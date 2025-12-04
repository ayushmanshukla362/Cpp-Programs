#include <iostream>
using namespace std;

int main() {
    int n=3;
    int num=1;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<num<<"";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
//https://youtu.be/rga_q2N7vU8?si=vpYXdbymZdrpqMqI&t=1776
/*Got you, let’s focus on **`num`** properly this time 👇

Code:

```cpp
int n = 3;
int num = 1;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << num << "";
        num++;
    }
    cout << endl;
}
```

---

### Start (before loops)

* `n = 3`
* `num = 1`  👉 this is the number we are printing and increasing

---

## 🔹 Row 1 → `i = 0`

Condition: `0 < 3` → true

Inner loop starts (`j = 0` to `2`):

* `j = 0`: print `num` → prints **1**
  then `num++` → `num = 2`
* `j = 1`: print `num` → prints **2**
  then `num++` → `num = 3`
* `j = 2`: print `num` → prints **3**
  then `num++` → `num = 4`

Row 1 printed: `123`
Now `num = 4`

---

## 🔹 Row 2 → `i = 1`

`1 < 3` → true

Inner loop again:

* `j = 0`: print `num` → **4**, then `num = 5`
* `j = 1`: print `num` → **5**, then `num = 6`
* `j = 2`: print `num` → **6**, then `num = 7`

Row 2 printed: `456`
Now `num = 7`

---

## 🔹 Row 3 → `i = 2`

`2 < 3` → true

Inner loop again:

* `j = 0`: print `num` → **7**, then `num = 8`
* `j = 1`: print `num` → **8**, then `num = 9`
* `j = 2`: print `num` → **9**, then `num = 10`

Row 3 printed: `789`
Now `num = 10`

---

Next `i = 3` → `3 < 3` → false → stop.

---

### ✅ Final output

```
123
456
789
```

So **`num` starts at 1 and keeps increasing by 1 every time it is printed**, across all rows (it does *not* reset in any row).
*/