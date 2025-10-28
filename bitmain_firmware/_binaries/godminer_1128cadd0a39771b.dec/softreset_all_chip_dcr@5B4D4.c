int __fastcall softreset_all_chip_dcr(int a1)
{
  void (__fastcall *v2)(int, _DWORD *); // r3
  _DWORD v4[2]; // [sp+0h] [bp-14h] BYREF
  int v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  v4[0] = -1414856447;
  v5 = 0;
  v2 = *(void (__fastcall **)(int, _DWORD *))(a1 + 164);
  LOBYTE(v5) = 1;
  HIWORD(v5) = 252;
  v4[1] = 0;
  v6 = 0;
  v2(a1, v4);
  sleep(7u);
  sub_5AE84(a1);
  return 0;
}
