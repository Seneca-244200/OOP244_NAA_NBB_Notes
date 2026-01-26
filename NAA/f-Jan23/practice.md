## Lab Exercise: Dynamic String Duplication

### Task

Write a function that:

* **Receives two parameters:**

  * A C-string (`const char *`) — a null-terminated character array
  * A **pointer passed by reference** (`char *&`) to receive the new string address

* **Dynamically allocates memory** for a complete copy of the input string (**including the null terminator**)

* Stores the address of the newly allocated copy in `*destination`

* Returns an integer status code:

  * `0` on success
  * `-1` if memory allocation fails

---

### Function signature (use exactly this)

```c
int duplicate_string(const char *source, char **destination);
```

---

### Requirements / Rules

* The function **must not modify** the source string.
* If `source` is `NULL`, set `*destination = NULL` and return `0`.
* The allocated memory must be large enough to hold the entire string **including** the null terminator (`'\0'`).
* Use `malloc` for dynamic allocation.
* Always check whether the allocation succeeded.
* Copy the string contents (you may use `strcpy`, `memcpy`, or a manual loop).
* The caller is responsible for calling `free()` on the allocated string when it is no longer needed.
* Do **not** use any global variables.

---

### Expected Behavior Examples

```c
char *copy = NULL;
int result;

// Normal case
result = duplicate_string("Hello", &copy);
// → result == 0, copy points to a new heap-allocated "Hello\0"

result = duplicate_string(NULL, &copy);
// → result == 0, copy == NULL

result = duplicate_string("", &copy);
// → result == 0, copy points to a new heap-allocated empty string "\0"
```

---

### Deliverables

1. Write the complete **function definition** for `duplicate_string`.
2. Write a short `main()` function that demonstrates:

   * Copying a normal string
   * Modifying the copy (to prove it’s independent)
   * Printing both the original and the copy **before and after** modification
   * Copying a `NULL` pointer
   * Freeing any allocated memory
3. *(Optional bonus)* Demonstrate handling an **empty string** and/or a **very long string**.

---

### Hints (do not share full solution with student)

* Use `strlen()` to determine how many bytes to allocate.
* Allocate `strlen(source) + 1` bytes to include the null terminator.
* The second parameter is a **pointer to a pointer** (`char **`) so the function can update the caller’s pointer.

---

Good luck — submit clean, well-commented code with proper error handling!
