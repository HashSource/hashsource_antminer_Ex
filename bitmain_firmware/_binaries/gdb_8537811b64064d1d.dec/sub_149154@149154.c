int __fastcall sub_149154(int a1)
{
  void *v2; // r0
  void *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0

  v2 = *(void **)(a1 + 252);
  if ( v2 )
    sub_339E8C(v2);
  v3 = *(void **)(a1 + 240);
  if ( v3 )
    sub_339E8C(v3);
  v4 = *(_DWORD **)(a1 + 216);
  if ( v4 )
  {
    do
    {
      v5 = (_DWORD *)*v4;
      sub_339E8C(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  memset(*(void **)(a1 + 208), 0, 4 * *(_DWORD *)(a1 + 212));
  v6 = *(void **)(a1 + 208);
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  if ( v6 != (void *)(a1 + 232) )
    sub_339E8C(v6);
  v7 = *(void **)(a1 + 196);
  if ( v7 )
    sub_339E8C(v7);
  sub_148738(a1 + 164);
  v8 = *(void **)(a1 + 140);
  *(_DWORD *)(a1 + 132) = &off_39EA80;
  if ( v8 )
    sub_339E8C(v8);
  v9 = *(void **)(a1 + 120);
  *(_DWORD *)(a1 + 112) = &off_39EA80;
  if ( v9 )
    sub_339E8C(v9);
  v10 = *(void **)(a1 + 92);
  *(_DWORD *)(a1 + 84) = &off_39EA68;
  if ( v10 )
    sub_339E8C(v10);
  v11 = *(void **)(a1 + 72);
  *(_DWORD *)(a1 + 64) = &off_39EA68;
  if ( v11 )
    sub_339E8C(v11);
  v12 = *(void **)(a1 + 40);
  if ( v12 )
    sub_339E8C(v12);
  v13 = *(void **)(a1 + 28);
  if ( v13 )
    sub_339E8C(v13);
  sub_1490E4(a1);
  return a1;
}
