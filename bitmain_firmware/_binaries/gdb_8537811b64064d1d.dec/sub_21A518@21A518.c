char *__fastcall sub_21A518(char *a1, int *a2)
{
  int v4; // r4
  void *v5; // r0
  void *ptr[2]; // [sp+0h] [bp-18h] BYREF
  _BYTE v8[16]; // [sp+8h] [bp-10h] BYREF

  v4 = sub_1008E4(a1);
  if ( v4 )
  {
    v5 = (void *)a2[6];
    a2[6] = v4;
    if ( v5 )
      free(v5);
    return (char *)v4;
  }
  sub_FFE70((int)ptr, a1);
  if ( ptr[1] )
  {
    sub_33C530(a2, ptr);
    v4 = *a2;
    if ( ptr[0] != v8 )
      sub_339E8C(ptr[0]);
    return (char *)v4;
  }
  if ( ptr[0] != v8 )
    sub_339E8C(ptr[0]);
  return a1;
}
