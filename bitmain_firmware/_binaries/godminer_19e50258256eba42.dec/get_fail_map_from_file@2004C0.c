int __fastcall get_fail_map_from_file(int a1, int a2, int a3)
{
  FILE *stream; // [sp+10h] [bp-14h]
  int j; // [sp+14h] [bp-10h]
  int i; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  stream = fopen(current_file_fail_map, "r");
  if ( stream )
  {
    v11 = 0;
    while ( !feof(stream) )
    {
      if ( read_and_compare_fail_map((int)stream, a1, a2) )
      {
        if ( !read_ints_fail_map((int)stream, a3) )
        {
          puts("Error reading the repair_code.");
          fclose(stream);
          return 1;
        }
        v11 = 1;
        break;
      }
      for ( i = 0; i < 2880 && !_isoc99_fscanf(stream, "%*u"); ++i )
        ;
    }
    fclose(stream);
    if ( v11 )
    {
      puts("The following 32 unsigned integers were found:");
      for ( j = 0; j < 2880; ++j )
        printf("%u ", *(unsigned __int8 *)(a3 + j));
      putchar(10);
    }
    else
    {
      puts("No matching integers were found.");
    }
    return 0;
  }
  else
  {
    perror("Unable to open file");
    return -1;
  }
}
