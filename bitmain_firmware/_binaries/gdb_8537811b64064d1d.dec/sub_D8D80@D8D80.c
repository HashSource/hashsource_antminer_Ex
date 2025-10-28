int __fastcall sub_D8D80(int a1, int a2)
{
  int v2; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r1
  int v6; // r3
  int v8; // [sp+4h] [bp-4h] BYREF

  v2 = sub_D03C8(a1, a2, 21, (int)&unk_47849C);
  v3 = *(_DWORD *)(v2 + 28);
  v4 = v2;
  *(_DWORD *)(v2 + 16) = 1;
  sub_19CD78(&v8, *(_DWORD *)(v3 + 52), 0);
  v5 = *(_DWORD *)(v4 + 76);
  v6 = v8;
  v8 = 0;
  *(_DWORD *)(v4 + 76) = v6;
  if ( v5 )
  {
    ((void (__fastcall *)(int))loc_19D17C)(v4 + 76);
    if ( v8 )
      ((void (__fastcall *)(int *))loc_19D17C)(&v8);
  }
  sub_D8900(1);
  return v4;
}
