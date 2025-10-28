int __fastcall sub_6C5E8(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r0
  int v5; // r1
  int v7; // r0

  v3 = *(_DWORD *)(a2 + 156);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = *(_DWORD *)(a2 + 144);
  if ( v3 != -1 )
    return sub_6C4A0(v4 + *(_DWORD *)(v5 + 4 * v3), 0, a3);
  v7 = sub_15AB8();
  return sub_6C614(v7);
}
