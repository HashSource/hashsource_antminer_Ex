_DWORD *__fastcall sub_6E104(_DWORD *ptr)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r6
  void *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  v2 = (_DWORD *)ptr[18];
  v3 = (_DWORD *)ptr[19];
  *ptr = &off_35D47C;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (void *)v2[2];
      v2 += 3;
      if ( v4 )
        free(v4);
    }
    while ( v3 != v2 );
    v3 = (_DWORD *)ptr[18];
  }
  if ( v3 )
    sub_339E8C(v3);
  v5 = (_DWORD *)ptr[7];
  *ptr = &unk_35D404;
  if ( v5 != ptr + 9 )
    sub_339E8C(v5);
  v6 = (_DWORD *)ptr[1];
  if ( v6 != ptr + 3 )
    sub_339E8C(v6);
  sub_33AC2C(ptr);
  return ptr;
}
