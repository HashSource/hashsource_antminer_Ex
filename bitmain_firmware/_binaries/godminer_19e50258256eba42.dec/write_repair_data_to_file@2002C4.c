int __fastcall write_repair_data_to_file(int a1, int a2, int a3, int a4)
{
  FILE *stream; // [sp+18h] [bp-Ch]
  int i; // [sp+1Ch] [bp-8h]

  stream = fopen(current_file_repair_code, "a");
  if ( stream )
  {
    fprintf(stream, "%u %u %u\n", a1, a2, a3);
    for ( i = 0; i <= 31; ++i )
    {
      fprintf(stream, "%08X", *(_DWORD *)(a4 + 4 * i));
      if ( i <= 30 )
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
