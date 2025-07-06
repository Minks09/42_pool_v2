#include <unistd.h>
#include <stdlib.h>

// ====================== WRITE UTILS ======================

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    ft_putchar(n + '0');
}

void    print_grid(int grid)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            ft_putnbr(grid[i][j]);
            if (j != 3)
                ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}

// ====================== PARSE UTILS ======================

int    *parse_input(char *str)
{
    int    *i = malloc(16 * sizeof(int));
    int    idx = 0;
    while (*str && idx < 16)
    {
        if (*str >= '1' && *str <= '4')
        {
            i[idx++] = *str - '0';
        }
        str++;
    }
    if (idx != 16)
        return (NULL);
    return (i);
}

// ====================== VALIDATION ======================

int    count_visible(int *line)
{
    int max = 0;
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (line[i] > max)
        {
            max = line[i];
            count++;
        }
    }
    return count;
}

int    check_row(int grid, int clues, int row)
{
    int line[4];
    for (int i = 0; i < 4; i++) line[i] = grid[row][i];
    if (count_visible(line) != clues[8 + row])
        return 0;
    for (int i = 0; i < 4; i++) line[i] = grid[row][3 - i];
    if (count_visible(line) != clues[12 + row])
        return 0;
    return 1;
}

int    check_col(int **grid, int *clues, int col)
{
    int line[4];
    for (int i = 0; i < 4; i++) line[i] = grid[i][col];
    if (count_visible(line) != clues[col])
        return 0;
    for (int i = 0; i < 4; i++) line[i] = grid[3 - i][col];
    if (count_visible(line) != clues[4 + col])
        return 0;
    return 1;
}
int    is_valid(int grid, int row, int col, int num)
{
    for (int i = 0; i < 4; i++)
    {
        if (grid[row][i] == num || grid[i][col] == num)
            return 0;
    }
    return 1;
}

// ====================== SOLVER ======================

int    solve(int grid, int clues, int pos)
{
    if (pos == 16)
    {
        for (int i = 0; i < 4; i++)
            if (!check_row(grid, clues, i) || !check_col(grid, clues, i))
                return 0;
        return 1;
    }
    int row = pos / 4;
    int col = pos % 4;
    for (int num = 1; num <= 4; num++)
    {
        if (is_valid(grid, row, col, num))
        {
            grid[row][col] = num;
            if (solve(grid, clues, pos + 1))
                return 1;
            grid[row][col] = 0;
        }
    }
    return 0;
}

// ====================== MAIN ======================

int    main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Error\n", 6);
        return (1);
    }
    int clues = parse_input(argv[1]);
    if (!clues)
    {
        write(1, "Error\n", 6);
        return (1);
    }
    int *grid = malloc(4 sizeof(int ));
    for (int i = 0; i < 4; i++)
    {
        grid[i] = malloc(4 sizeof(int));
        for (int j = 0; j < 4; j++)
            grid[i][j] = 0;
    }
    if (solve(grid, clues, 0))
        print_grid(grid);
    else
        write(1, "Error\n", 6);

    for (int i = 0; i < 4; i++) free(grid[i]);
    free(grid);
    free(clues);
    return (0);
}