int __fastcall write_fail_map_to_file(int a1, int a2, int a3)
{
  FILE *stream; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  stream = fopen(current_file_fail_map, "a");
  if ( stream )
  {
    fprintf(stream, "%u %u\n", a1, a2);
    for ( i = 0; i < 2880; ++i )
    {
      fprintf(stream, "%u", *(unsigned __int8 *)(a3 + i));
      if ( i <= 2878 )
        fputc(32, stream);
    }
    fputc(10, stream);
    fclose(stream);
    return 0;
  }
  else
  {
    perror("Unable to create file");
    return 1;
  }
}
