int __fastcall sub_2570B8(_DWORD **a1, _DWORD *a2, _DWORD *a3)
{
  if ( *a2 <= 3u )
    return 0;
  *a3 = *(*a1)++;
  *a2 -= 4;
  return 1;
}
