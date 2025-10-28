int __fastcall read_dag_from_sd(void *a1)
{
  size_t v3; // [sp+0h] [bp-Ch]

  if ( a1 )
  {
    v3 = fread(a1, 1u, 0x200000u, (FILE *)file_dag);
    if ( v3 )
    {
      printf("Read %zu bytes\n", v3);
      return 0;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    fclose((FILE *)file_dag);
    return 1;
  }
}
