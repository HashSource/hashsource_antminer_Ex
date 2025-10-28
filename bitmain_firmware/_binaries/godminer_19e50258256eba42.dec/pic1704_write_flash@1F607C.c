int __fastcall pic1704_write_flash(char a1, const void *a2, char a3, size_t a4)
{
  int v9; // [sp+14h] [bp-20h] BYREF
  char v10; // [sp+18h] [bp-1Ch]
  int v11; // [sp+1Ch] [bp-18h]
  void *v12; // [sp+20h] [bp-14h]
  unsigned __int8 v13; // [sp+27h] [bp-Dh]
  void *ptr; // [sp+28h] [bp-Ch]
  void *v15; // [sp+2Ch] [bp-8h]

  v9 = 255;
  v10 = 0;
  v15 = malloc(a4 + 8);
  ptr = malloc(a4 + 2);
  *(_BYTE *)ptr = a3;
  *((_BYTE *)ptr + 1) = a4;
  memcpy((char *)ptr + 2, a2, a4);
  LOBYTE(v11) = 51;
  v12 = ptr;
  BYTE1(v11) = a4 + 2;
  HIBYTE(v11) = a1;
  BYTE2(v11) = 5;
  v13 = sub_1F3C40(v11, (int)ptr, v15, (unsigned __int8 *)&v9);
  free(ptr);
  free(v15);
  return v13;
}
