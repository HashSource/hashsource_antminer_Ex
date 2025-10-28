int __fastcall sub_E92F8(int a1)
{
  _DWORD s[4]; // [sp+8h] [bp-14h] BYREF

  memset(s, 0, sizeof(s));
  s[2] = 131073;
  s[0] = 0;
  LOWORD(s[3]) = 3327;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
}
