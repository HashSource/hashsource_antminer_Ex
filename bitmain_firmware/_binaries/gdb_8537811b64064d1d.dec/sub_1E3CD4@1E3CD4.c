void **__fastcall sub_1E3CD4(void **a1)
{
  void *v2; // r0
  void *v3; // r1
  void *v4; // r2
  bool v5; // zf
  void *ptr; // [sp+0h] [bp-10h] BYREF
  void *v8; // [sp+4h] [bp-Ch] BYREF
  void *v9; // [sp+8h] [bp-8h]
  void *v10; // [sp+Ch] [bp-4h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  sub_2305B8(&ptr, &dword_4899A0, 9, 0);
  if ( ptr )
  {
    sub_1B01EC(&v8, (int)ptr);
    v2 = *a1;
    v3 = v9;
    v4 = v10;
    v5 = *a1 == 0;
    *a1 = v8;
    v8 = 0;
    a1[1] = v3;
    a1[2] = v4;
    v9 = 0;
    v10 = 0;
    if ( !v5 )
    {
      sub_339E8C(v2);
      if ( v8 )
        sub_339E8C(v8);
    }
    if ( ptr )
      free(ptr);
  }
  return a1;
}
