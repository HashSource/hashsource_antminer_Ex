int __fastcall sub_FC7C4(int a1, char a2, int a3, void *a4)
{
  int v9; // [sp+20h] [bp-24h] BYREF
  _DWORD s[4]; // [sp+24h] [bp-20h] BYREF
  void *ptr; // [sp+34h] [bp-10h]

  v9 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 1;
  BYTE1(s[2]) = a2;
  s[1] = a3;
  ptr = malloc(0x94u);
  memset(ptr, 0, 0x94u);
  (*(void (__fastcall **)(int, _DWORD *, int, void *, int *))(a1 + 324))(a1, s, 1, ptr, &v9);
  if ( a4 )
    memcpy(a4, (char *)ptr + 18, 0x80u);
  free(ptr);
  return v9;
}
