int __fastcall get_repair_data_from_file(int a1, int a2, int a3, int a4)
{
  FILE *stream; // [sp+14h] [bp-18h]
  int j; // [sp+18h] [bp-14h]
  int i; // [sp+1Ch] [bp-10h]
  int v13; // [sp+20h] [bp-Ch]
  int v14; // [sp+24h] [bp-8h]

  stream = fopen(current_file_repair_code, "r");
  if ( stream )
  {
    v14 = 0;
    v13 = 0;
    while ( !feof(stream) )
    {
      ++v13;
      if ( read_and_compare_repair_code((int)stream, a1, a2, a3) )
      {
        if ( !read_ints_repair_code((int)stream, a4) )
        {
          puts("reading the repair_code.");
          fclose(stream);
          return 1;
        }
        v14 = 1;
        break;
      }
      for ( i = 0; i <= 31 && !_isoc99_fscanf(stream, "%*08x"); ++i )
        ;
    }
    fclose(stream);
    if ( v14 )
    {
      puts("The following 32 unsigned integers were found:");
      for ( j = 0; j <= 31; ++j )
        printf("%u ", *(_DWORD *)(a4 + 4 * j));
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
