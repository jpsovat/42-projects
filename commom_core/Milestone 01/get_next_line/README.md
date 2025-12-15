*This project has been created as part of the 42 curriculum by jsovat-d.*

## Description

The **get_next_line** project consists of implementing a function that reads and returns a single line from a file descriptor each time it is called. The main goal of this project is to understand and correctly use **static variables**, manage dynamic memory safely, and handle file using the `read()` system call.

The function must return lines one by one, including the terminating `\n` character when present, and return `NULL` when there is nothing left to read or when an error occurs.

The implementation works correctly and returns exactly one line per call independently of the chosen BUFFER_SIZE value, whether it is very small or very large.

---

## Prototype

```bash
char *get_next_line(int fd);
```

---

## Files

Mandatory files for this project:

* `get_next_line.c`
* `get_next_line_utils.c`
* `get_next_line.h`

---

## Instructions

### Compilation

The project must be compiled using the following flags:

```bash
cc -Wall -Wextra -Werror -D BUFFER_SIZE=(value) get_next_line.c get_next_line_utils.c
```

The `BUFFER_SIZE` value defines how many bytes are read from the file descriptor on each call to `read()`.

The project **must also compile without defining `BUFFER_SIZE`**, in which case a default value is used:

```bash
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
```

### Usage Example

```c
int fd = open("file.txt", O_RDONLY);
char *line;

while ((line = get_next_line(fd)) != NULL)
{
    printf("%s", line);
    free(line);
}
close(fd);
```

---

## Behavior Rules

* The returned line **includes the terminating `\n` character** if it exists.
* If the end of file is reached and the file does not end with `\n`, the last line is returned **without** `\n`.
* The function returns `NULL` when there is nothing left to read or if an error occurs.
* The function works correctly with any `BUFFER_SIZE` value (e.g. `1`, `42`, `9999`).

---

## Algorithm Explanation

The implementation follows a **stash-based approach**:

1. A static variable (`stash`) stores leftover data between calls.
2. Data is read from the file descriptor using `read()` and appended to the stash.
3. Reading stops as soon as a newline character (`\n`) is found.
4. The function extracts and returns one line from the stash.
5. Any remaining data is kept in the stash for the next call.

This approach ensures that:

* Only the required amount of data is read.
* The function always returns exactly one line per call.
* Correct behavior is preserved regardless of the `BUFFER_SIZE` value.

---

## Memory Management

* All memory allocated on the heap is properly freed.
* No memory leaks are allowed.
* The static stash is freed when it becomes empty.

---

## Forbidden Functions

The following are **not allowed** in this project:

* `lseek()`
* Global variables
* Using `libft`

---

## Resources

* Linux manual: `man read`
* Static variables in C: [https://en.wikipedia.org/wiki/Static_variable](https://en.wikipedia.org/wiki/Static_variable)
* File descriptors: [https://man7.org/linux/man-pages/man2/open.2.html](https://man7.org/linux/man-pages/man2/open.2.html)

### AI Usage

AI tools were used only as a **learning aid**, to clarify concepts, validate the understanding of the subject requirements, and review edge cases. They were also used to **reduce repetitive manual work** during exploration and testing. All code logic, algorithmic choices, and implementation decisions were made by the student.

---

## Notes

This project is designed for text files. Behavior is undefined when reading binary files or when the file is modified while it is being read, as specified in the subject.

---

Once validated, this function can be added to the student’s `libft` for future projects.

