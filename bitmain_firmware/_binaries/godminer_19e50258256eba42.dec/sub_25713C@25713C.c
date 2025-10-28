int __fastcall sub_25713C(const void **a1, _DWORD *a2, void *a3)
{
  if ( *a2 <= 7u )
    return 0;
  memcpy(a3, *a1, 8u);
  *a1 = (char *)*a1 + 8;
  *a2 -= 8;
  return 1;
}
