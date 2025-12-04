#include <iostream>
using namespace std;

int main() {
    int n=4;
    for (int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j<<"";
        }
        cout<<endl;
    }
    return 0;
}
/***Dry run (n = 4):**
Outer loop → `i = 0,1,2,3`

---

### **i = 0**

Inner loop: `j = i+1 = 1` → runs while `j > 0`

* j = 1 → print **1**, then j-- → j = 0 → loop ends

Output so far:
`1`

---

### **i = 1**

Inner loop: `j = 2`

* j = 2 → print **2**, j=1
* j = 1 → print **1**, j=0

Output:
`21`

---

### **i = 2**

Inner loop: `j = 3`

* 3
* 2
* 1

Output:
`321`

---

### **i = 3**

Inner loop: `j = 4`

* 4
* 3
* 2
* 1

Output:
`4321`

---

### **Final output**

```
1
21
321
4321
```
It decreases the value of `j` by **1** after each iteration.

In your loop:

```cpp
for(int j = i+1; j > 0; j--) 
```

`j--` does this:

* Moves `j` one step down each time (like 4 → 3 → 2 → 1 → 0).
* This makes the loop eventually stop when `j` becomes 0.
* It also makes the pattern print in **reverse order** (3 2 1, 4 3 2 1).

So it's just counting backward.

*/