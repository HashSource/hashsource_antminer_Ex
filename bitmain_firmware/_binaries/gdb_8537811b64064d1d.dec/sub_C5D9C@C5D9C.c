void __fastcall sub_C5D9C(int a1)
{
  int v2; // r4
  int v3; // r9
  void *v4; // r7
  void *v5; // r5
  int v6; // r4
  _DWORD v7[6]; // [sp+10h] [bp-54h] BYREF
  _DWORD v8[7]; // [sp+28h] [bp-3Ch] BYREF

  v2 = *(_DWORD *)(a1 + 136);
  v3 = dword_487D2C;
  v4 = sub_92E50();
  sub_19CE58(v8, off_37D524[2 * v2]);
  sub_1CAB38(v7, v8[0], v3, 0);
  v5 = (void *)v7[0];
  v6 = v7[1];
  if ( v8[0] )
    ((void (__fastcall *)(_DWORD *))loc_19D17C)(v8);
  sub_92E68((int)v4);
  v8[0] = 0;
  v8[1] = 0;
  sub_D0F34(a1, v3, v5, -858993459 * ((v6 - (int)v5) >> 3), 0, 0);
  if ( v5 )
    sub_339E8C(v5);
}
