_DWORD *__fastcall sub_1F512C(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v2 = (void *)a1[14];
  *a1 = off_3D427C;
  if ( v2 )
    sub_339E8C(v2);
  v3 = (_DWORD *)a1[7];
  if ( v3 != a1 + 9 )
    sub_339E8C(v3);
  v4 = (_DWORD *)a1[1];
  if ( v4 != a1 + 3 )
    sub_339E8C(v4);
  nullsub_24(a1);
  return a1;
}
