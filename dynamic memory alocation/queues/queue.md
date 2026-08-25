# Algorithm: Queue Using Linked List

1. Start

2. Create a structure `node`

- `data`

- Structure pointer `next`

3. Create a structure pointer `first = NULL`

4. Create a structure pointer `head = NULL`

5. End


## Enqueue fn

1. Start

2. In enque function, take value `val` as argument.

3. Create a structure node pointer `newnode`.

4. Initialize `newnode` using dynamic memory allocation.

5. `newnode->data = val`

6. `newnode->next = NULL`

7. If `first == NULL`:

- `first = newnode`
- `head = newnode`

8. Else:

- `head->next = newnode`
- `head = newnode`

9. End


## IsEmpty fn

1. Start

2. Check `first`.

3. If `first == NULL` return `1`.

4. Otherwise return `0`.

5. End


## Dequeue fn

1. Start

2. Check `first`.

3. If `first == NULL`:

- Print/return `-1`

4. Initialize `data = first->data`.

5. Declare a structure node pointer `temp`.

6. Initialize `temp = first`.

7. `first = first->next`

8. Free `temp` pointer.

9. If `first == NULL`:

- `head = NULL`

10. Return `data`.

11. End


## Peek fn

1. Start

2. Check `first`.

3. If `first == NULL`:

- Print/return `-1`

4. Otherwise return `first->data`.

5. End


## Display fn

1. Start

2. Create a structure node pointer `temp`.

3. Initialize `temp = first`.

4. Check if `first == NULL`:

- Print Queue Empty.
- Return.

5. Repeat while `temp != NULL`:

- Print `temp->data`.
- `temp = temp->next`.

6. End


## Size fn

1. Start

2. Initialize `count = 0`.

3. Create a structure node pointer `temp`.

4. Initialize `temp = first`.

5. Repeat while `temp != NULL`:

- Increment `count`.
- `temp = temp->next`.

6. Return `count`.

7. End


## clear fn

1. Start

2. Declare a structure node pointer `temp`.

3. Repeat while `first != NULL`:

- `temp = first`
- `first = first->next`
- Free `temp` pointer.

4. `head = NULL`

5. End
