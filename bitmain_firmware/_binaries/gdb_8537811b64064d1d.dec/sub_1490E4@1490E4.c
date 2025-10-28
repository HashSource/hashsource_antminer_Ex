int __fastcall sub_1490E4(int a1)
{
  _DWORD **v2; // r4
  _DWORD *v3; // r5
  void *v4; // r0

  v2 = *(_DWORD ***)(a1 + 8);
  if ( v2 )
  {
    do
    {
      v3 = *v2;
      sub_1490B0((int)(v2 + 2), v2[4]);
      sub_339E8C(v2);
      v2 = (_DWORD **)v3;
    }
    while ( v3 );
  }
  memset(*(void **)a1, 0, 4 * *(_DWORD *)(a1 + 4));
  v4 = *(void **)a1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( v4 != (void *)(a1 + 24) )
    sub_339E8C(v4);
  return a1;
}
