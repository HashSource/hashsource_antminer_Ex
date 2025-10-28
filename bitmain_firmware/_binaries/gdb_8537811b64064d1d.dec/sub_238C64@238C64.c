_DWORD *__fastcall sub_238C64(_DWORD *ptr)
{
  _DWORD *v2; // r0

  v2 = (_DWORD *)ptr[1];
  *ptr = &off_3E9AFC;
  if ( v2 != ptr + 3 )
    sub_339E8C(v2);
  sub_33AC2C(ptr);
  return ptr;
}
