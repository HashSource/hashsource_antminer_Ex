void __fastcall __noreturn sub_14610(const char *a1, int a2, int a3)
{
  FILE *v5; // r7
  int v7; // r5
  char **v8; // r4
  int i; // r3
  char *v10; // t1
  char *v11; // r11
  const char *v12; // r2
  int v13; // [sp+0h] [bp-24h] BYREF
  int v14; // [sp+4h] [bp-20h]
  int v15; // [sp+8h] [bp-1Ch]
  char s[20]; // [sp+10h] [bp-14h] BYREF

  v5 = (FILE *)stdout;
  fflush((FILE *)stdout);
  fflush((FILE *)stderr);
  fprintf(v5, "Usage: %s [option..] file...\n", a1);
  fputc(10, v5);
  fwrite("Options:\n", 1u, 9u, v5);
  fwrite("  -m#     compression method\n", 1u, 0x1Du, v5);
  fprintf(v5, "  -b#     set input block size (default %lu, max %lu)\n", dword_43510, dword_4350C);
  fwrite("  -n#     number of compression/decompression runs\n", 1u, 0x33u, v5);
  fwrite("  -c#     number of compression runs\n", 1u, 0x25u, v5);
  fwrite("  -d#     number of decompression runs\n", 1u, 0x27u, v5);
  fwrite("  -S      use safe decompressor (if available)\n", 1u, 0x2Fu, v5);
  fwrite("  -A      use assembler decompressor (if available)\n", 1u, 0x34u, v5);
  fwrite("  -F      use fast assembler decompressor (if available)\n", 1u, 0x39u, v5);
  fwrite("  -O      optimize compressed data (if available)\n", 1u, 0x32u, v5);
  fwrite("  -s DIR  process Calgary Corpus test suite in directory `DIR'\n", 1u, 0x3Fu, v5);
  fwrite("  -@      read list of files to compress from stdin\n", 1u, 0x34u, v5);
  fwrite("  -q      be quiet\n", 1u, 0x13u, v5);
  fwrite("  -Q      be very quiet\n", 1u, 0x18u, v5);
  fwrite("  -v      be verbose\n", 1u, 0x15u, v5);
  fwrite("  -L      display software license\n", 1u, 0x23u, v5);
  if ( a3 )
  {
    if ( !off_43528 || ((int (__fastcall *)(int *, int *))off_43528)(&dword_43518, &v13) )
    {
      dword_43520 = 1;
      v13 = 0;
      v14 = 0;
      v15 = 0;
    }
    if ( !dword_43518 )
      dword_4351C = -1;
    v7 = 0;
    fprintf(v5, "\nAll timings are recorded using pclock mode %d %s.\n", dword_4351C, dword_43524, v13, v14, v15);
    fwrite("\n\n", 1u, 2u, v5);
    fwrite("The following compression methods are available:\n", 1u, 0x31u, v5);
    fputc(10, v5);
    fwrite("  usage   name           memory          available extras\n", 1u, 0x3Au, v5);
    fwrite("  -----   ----           ------          ----------------\n", 1u, 0x3Au, v5);
    while ( 1 )
    {
LABEL_7:
      v8 = &off_2F870;
      for ( i = 21; ; i = (int)v8[1] )
      {
        if ( v7 == i )
        {
          v11 = v8[2];
          sprintf(s, "-m%d", v7);
          fprintf(v5, "  %-6s  %-13s", s, *v8);
          fprintf(v5, "%9lu", v11);
          if ( v8[7] )
          {
            fprintf(v5, "%s%s", "          ", "safe");
            v12 = ", ";
          }
          else
          {
            v12 = "          ";
          }
          if ( v8[8] )
          {
            fprintf(v5, "%s%s", v12, "asm");
            v12 = ", ";
          }
          if ( v8[9] )
          {
            fprintf(v5, "%s%s", v12, "asm+safe");
            v12 = ", ";
          }
          if ( v8[10] )
          {
            fprintf(v5, "%s%s", v12, "fastasm");
            v12 = ", ";
          }
          if ( v8[11] )
          {
            fprintf(v5, "%s%s", v12, "fastasm+safe");
            v12 = ", ";
          }
          if ( v8[5] )
            fprintf(v5, "%s%s", v12, "optimize");
          fputc(10, v5);
          if ( ++v7 != 5000 )
            goto LABEL_7;
LABEL_13:
          fflush(v5);
          exit(a2 == -1);
        }
        if ( &unk_30558 == (_UNKNOWN *)v8 )
          break;
        v10 = v8[14];
        v8 += 14;
        if ( !v10 )
          break;
      }
      if ( ++v7 == 5000 )
        goto LABEL_13;
    }
  }
  fputc(10, v5);
  fprintf(v5, "Type '%s -m' to list all available methods.\n", a1);
  goto LABEL_13;
}
