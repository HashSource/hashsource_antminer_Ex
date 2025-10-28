void __fastcall sub_256148(_BYTE *a1)
{
  _DWORD *v1; // r0
  int v2; // r0
  void *ptr; // [sp+4h] [bp-Ch] BYREF

  if ( a1 )
  {
    sub_1C42D0((char **)&ptr, a1);
    if ( *((_DWORD *)ptr + 4) == 88 )
    {
      v1 = (_DWORD *)*((_DWORD *)ptr + 8);
    }
    else
    {
      v2 = sub_14CD8C((int *)ptr);
      v1 = (_DWORD *)sub_26BC98(v2);
    }
    if ( v1 )
      sub_174F4C(v1, 0);
    if ( ptr )
      free(ptr);
  }
}
