#include <stdio.h>

int parent[20];
int element[20];

void makeSet(int n)
{
    int i;

    printf("Enter the elements of the set:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &element[i]);
        parent[i] = i;
    }
}

int find(int x)
{
    if(parent[x] == x)
        return x;

    return find(parent[x]);
}

void unionSet(int x, int y)
{
    int rootX = find(x);
    int rootY = find(y);

    if(rootX != rootY)
    {
        parent[rootY] = rootX;
        printf("Sets merged successfully\n");
    }
    else
    {
        printf("Already in the same set\n");
    }
}

void display(int n)
{
    int i;

    printf("\nElement\tParent\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%d\n", element[i], element[parent[i]]);
    }
}

int main()
{
    int n, choice, x, y;
    int i, indexX, indexY;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0 || n > 20)
    {
        printf("Invalid number of elements\n");
        return 0;
    }

    makeSet(n);

    do
    {
        printf("\n1. Find");
        printf("\n2. Union");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &x);

                indexX = -1;

                for(i = 0; i < n; i++)
                {
                    if(element[i] == x)
                    {
                        indexX = i;
                        break;
                    }
                }

                if(indexX == -1)
                {
                    printf("Element not found\n");
                }
                else
                {
                    printf("Representative = %d\n",
                           element[find(indexX)]);
                }

                break;

            case 2:
                printf("Enter two elements: ");
                scanf("%d%d", &x, &y);

                indexX = -1;
                indexY = -1;

                for(i = 0; i < n; i++)
                {
                    if(element[i] == x)
                        indexX = i;

                    if(element[i] == y)
                        indexY = i;
                }

                if(indexX == -1 || indexY == -1)
                {
                    printf("Element not found\n");
                }
                else
                {
                    unionSet(indexX, indexY);
                }

                break;

            case 3:
                display(n);
                break;

            case 4:
                printf("Exiting....\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 4);

    return 0;
}

