int __fastcall json_dump_file(_DWORD *a1, int a2, int a3)
{
  int v4; // r1
  FILE *v7; // r4
  int (__fastcall *v8)(char *, int, int); // r1
  int v9; // r5

  LOWORD(v4) = 4784;
  HIWORD(v4) = (unsigned int)off_1306DC >> 16;
  v7 = (FILE *)fopen64(a2, v4);
  if ( !v7 )
    return -1;
  LOWORD(v8) = 12160;
  HIWORD(v8) = (unsigned int)&loc_32FF0 >> 16;
  v9 = json_dump_callback(a1, v8, (int)v7, a3);
  if ( fclose(v7) )
    return -1;
  return v9;
}
