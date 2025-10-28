int *__fastcall sub_24FC30(int *a1)
{
  int v2; // r4
  void *v3; // r0

  v2 = *a1;
  if ( *a1 )
  {
    v3 = *(void **)(v2 + 12);
    if ( v3 )
      sub_339E8C(v3);
    if ( *(_DWORD *)v2 )
      sub_339E8C(*(void **)v2);
    sub_33AC2C((void *)v2);
  }
  return a1;
}
