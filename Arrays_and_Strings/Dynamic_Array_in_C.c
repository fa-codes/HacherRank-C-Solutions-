#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
     // --- MEMORY ALLOCATION ---
    total_number_of_books = (int*)malloc(total_number_of_shelves * sizeof(int));
    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_books[i] = 0;
    }

    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));
    // Initialize all shelf pointers to NULL
    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = NULL;
    }

    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);

            // Increment the count of books on shelf 'x'
            total_number_of_books[x]++;

            // Reallocate memory for the books on shelf 'x'
            // We use realloc to extend the existing array of pages by one slot
            total_number_of_pages[x] = (int*)realloc(
                total_number_of_pages[x], 
                total_number_of_books[x] * sizeof(int)
            );
            
            // Store the new book's page count at the end of the shelf's array
            int book_index = total_number_of_books[x] - 1;
            total_number_of_pages[x][book_index] = y;


        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }
    

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}