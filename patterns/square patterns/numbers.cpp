#include <iostream>
using namespace std;

int main() {
    int n=4;
    //outer loop will run for n times for the numbers of line
    for (int i=1;i<=n;i++) {
//inner loop for 1 single row,what needs to be printed in the row is told by inner loop
        for (int j=1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    } 

    return 0;
}
/*
Let’s go line by line like the computer.

```cpp
int n = 4;
for (int i = 1; i <= n; i++) {        // outer loop
    for (int j = 1; j <= n; j++) {    // inner loop
        cout << j;
    }
    cout << endl;
}
```

---

### Before loops

* `n = 4`

---

## Outer loop: i = 1

Condition: `i <= n` → `1 <= 4` → true → enter outer loop.

### Inner loop (for i = 1)

* `j = 1` → `j <= n`? → `1 <= 4` → true → print `1`
* `j++` → `j = 2`
* `2 <= 4` → true → print `2`
* `j++` → `j = 3`
* `3 <= 4` → true → print `3`
* `j++` → `j = 4`
* `4 <= 4` → true → print `4`
* `j++` → `j = 5`
* `5 <= 4` → false → inner loop stops

Now `cout << endl;` → go to new line.

**First line output:** `1234`

---

## Outer loop: i = 2

`i++` → `i = 2`
Condition: `2 <= 4` → true.

### Inner loop (for i = 2)

Again `j` starts from 1:

* j = 1 → print `1`
* j = 2 → print `2`
* j = 3 → print `3`
* j = 4 → print `4`
* j = 5 → stop

`cout << endl;` → new line.

**Second line output:** `1234`

---

## Outer loop: i = 3

`i++` → `i = 3`
`3 <= 4` → true.

Inner loop does the **same**: prints `1 2 3 4`, then newline.

**Third line output:** `1234`

---

## Outer loop: i = 4

`i++` → `i = 4`
`4 <= 4` → true.

Inner loop again: prints `1 2 3 4`, then newline.

**Fourth line output:** `1234`

---

## Outer loop: i = 5

`i++` → `i = 5`
Check: `5 <= 4` → false → outer loop stops.

---

### Final output

```
1234
1234
1234
1234
```
*/
 