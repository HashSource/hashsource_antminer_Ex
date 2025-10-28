int __fastcall sub_A07C0(const char **a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r7
  char *v8; // r0
  int v9; // r4
  int v11; // [sp+8h] [bp-Ch] BYREF
  void *ptr; // [sp+Ch] [bp-8h] BYREF

  if ( !a3 )
    return sub_15B840(a1, a2, a3);
  v6 = sub_C32D0(a3, 0);
  v7 = v6;
  if ( !v6 )
    return sub_15B840(a1, a2, a3);
  v8 = sub_A0750(a1, v6);
  if ( !v8 )
    return sub_15B840(a1, a2, a3);
  v11 = *(_DWORD *)v8;
  sub_1C42A4(&ptr, &v11, 0, v7, 0);
  v9 = sub_14CD64(ptr);
  if ( ptr )
  {
    free(ptr);
    return v9;
  }
  return v9;
}
