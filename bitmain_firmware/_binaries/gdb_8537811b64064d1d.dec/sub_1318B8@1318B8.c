void __fastcall sub_1318B8(int a1, int a2, int a3)
{
  int v6; // r3
  _DWORD v7[2]; // [sp+8h] [bp-8h] BYREF

  if ( *(_DWORD *)(a1 + 16) )
    sub_11E910(a1);
  v6 = *(_BYTE *)(a1 + 10) & 4;
  if ( (*(_BYTE *)(a1 + 10) & 4) != 0 )
  {
    ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, void *, _DWORD))loc_12DAD4)(a1, 0, 0, 0, &loc_137F10, 0);
    sub_11EA14();
  }
  else
  {
    v7[0] = a2;
    v7[1] = a3;
    ((void (__fastcall *)(int, int, int, int, int (*)(int, int, int, int, int), _DWORD *))loc_12DAD4)(
      a1,
      v6,
      v6,
      v6,
      sub_13A098,
      v7);
    sub_11EA14();
  }
}
