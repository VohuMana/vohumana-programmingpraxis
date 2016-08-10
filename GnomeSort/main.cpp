#include <cstdio>

// C style approach
void GnomeSort(int* array, int numArrayElements)
{
    if (nullptr == array || numArrayElements <= 1)
    {
        return;
    }
    
    int startPoint = 1;
    // Look at the previous and next pot (value)
    // If the previous is smaller than the next pot move forward
    // else swap the two and go backwards
    // If there is no pot to go back to move to the first pot
    // If there is no next flower pot the gnome is done
}

int main() 
{
    printf("Hello world!");

    return 0;
}