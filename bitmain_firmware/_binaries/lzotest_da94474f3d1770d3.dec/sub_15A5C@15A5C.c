int __fastcall sub_15A5C(int a1, const char *a2, int a3, int a4, int *a5, int *a6)
{
  int v6; // lr
  const char *v7; // r12
  char **v8; // r4
  const char *v9; // t1
  char *v11; // r8
  const char *v12; // r7
  char *v13; // r0
  FILE *v14; // r0
  unsigned int v15; // r11
  int v16; // r3
  int v17; // r1
  int v18; // r11
  const char *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r7
  int v23; // r0
  int v24; // r0
  int v25; // r6
  int v26; // r9
  FILE *stream; // [sp+8h] [bp-124h]
  unsigned int v29; // [sp+10h] [bp-11Ch]
  char v32[264]; // [sp+24h] [bp-108h] BYREF

  v6 = 21;
  dword_2A6E4 = 0;
  if ( a5 )
    *a5 = 0;
  dword_2A6D4 = 0;
  dword_2A6E8 = 0;
  dword_2A6DC = 0;
  if ( a6 )
    *a6 = 0;
  v7 = "LZO1-1";
  v8 = &off_17108;
  while ( v6 != a1 )
  {
    if ( v8 == (char **)&unk_17DF0 )
      return 7;
    v9 = v8[14];
    v8 += 14;
    v7 = v9;
    if ( !v9 )
      return 7;
    v6 = (int)v8[1];
  }
  if ( !v8[4] )
    return 7;
  if ( opt_use_safe_decompressor )
  {
    if ( opt_use_asm_fast_decompressor )
    {
      v11 = v8[11];
      if ( v11 )
      {
        v12 = " [fs]";
        goto LABEL_19;
      }
    }
    if ( opt_use_asm_decompressor )
    {
      v11 = v8[9];
      if ( v11 )
      {
        v12 = " [as]";
        goto LABEL_19;
      }
    }
    v11 = v8[7];
    if ( v11 )
    {
      v12 = " [s]";
      goto LABEL_19;
    }
  }
  if ( opt_use_asm_fast_decompressor )
  {
    v11 = v8[10];
    if ( v11 )
    {
      v12 = " [f]";
      goto LABEL_19;
    }
  }
  if ( opt_use_asm_decompressor )
  {
    v11 = v8[8];
    if ( v11 )
    {
      v12 = " [a]";
      goto LABEL_19;
    }
  }
  v11 = v8[6];
  if ( !v11 )
    return 7;
  v12 = "";
LABEL_19:
  if ( opt_dict && v8[13] )
    v12 = "";
  if ( dword_2A6B0 < (unsigned int)v8[3] )
    return 7;
  v13 = (char *)stpcpy(v32, v7);
  strcpy(v13, v12);
  fflush((FILE *)stdout);
  fflush((FILE *)stderr);
  v29 = dword_2A624;
  if ( dword_2A664 )
    free((void *)dword_2A664);
  dword_2A654 = 0;
  dword_2A664 = 0;
  dword_2A658 = 0;
  dword_2A668 = 0;
  v14 = (FILE *)fopen64(a2, "rb");
  stream = v14;
  if ( !v14 )
  {
    fflush((FILE *)stdout);
    fflush((FILE *)stderr);
    fprintf((FILE *)stderr, "%s: ", a2);
    fflush((FILE *)stderr);
    v19 = "fopen";
LABEL_49:
    perror(v19);
    fflush((FILE *)stdout);
    fflush((FILE *)stderr);
    return 2;
  }
  if ( fseek(v14, 0, 2) || ((v15 = ftell(stream), fseek(stream, 0, 0)) ? (v16 = 1) : (v16 = v15 >> 31), v16) )
  {
    fflush((FILE *)stdout);
    fflush((FILE *)stderr);
    fprintf((FILE *)stderr, "%s: ", a2);
    fflush((FILE *)stderr);
    perror("fseek");
    fflush((FILE *)stdout);
    fflush((FILE *)stderr);
    fclose(stream);
    return 2;
  }
  if ( v29 >= v15 )
    v17 = v15;
  else
    v17 = v29;
  if ( v15 != v17 )
    v17 = v29;
  sub_13E7C(&dword_2A654, v17, 0, 0);
  dword_2A658 = fread((void *)dword_2A654, 1u, dword_2A658, stream);
  v18 = ferror(stream);
  if ( v18 | fclose(stream) )
  {
    if ( dword_2A664 )
      free((void *)dword_2A664);
    dword_2A654 = 0;
    dword_2A664 = 0;
    dword_2A658 = 0;
    dword_2A668 = 0;
    fflush((FILE *)stdout);
    fflush((FILE *)stderr);
    fprintf((FILE *)stderr, "%s: ", a2);
    fflush((FILE *)stderr);
    v19 = "fclose";
    goto LABEL_49;
  }
  v20 = lzo_adler32(0, 0, 0);
  v21 = lzo_adler32(v20, dword_2A654, dword_2A658);
  if ( a5 )
    *a5 = v21;
  v22 = v21;
  v23 = lzo_crc32(0, 0);
  v24 = lzo_crc32(v23, dword_2A654);
  if ( a6 )
    *a6 = v24;
  if ( a3 < 1 )
    v25 = 1;
  else
    v25 = a3;
  if ( a4 < 1 )
    v26 = 1;
  else
    v26 = a4;
  if ( opt_verbose > 1 )
  {
    printf("File %s: %lu bytes   (0x%08lx, 0x%08lx)\n", a2, dword_2A658, v22, v24);
    printf("  compressing %lu bytes (%ld/%ld/%ld loops, %lu block-size)\n", dword_2A658, 1, v25, v26, dword_2A628);
    printf("  %s\n", v32);
  }
  return sub_14BC4((int)v8, (int (__fastcall *)(int, size_t, int, _DWORD *, int))v11, v32, a2, v25, v26);
}
