int __fastcall set_misc_ctrl_dash(int a1, int a2)
{
  _DWORD s[4]; // [sp+8h] [bp-14h] BYREF

  memset(s, 0, sizeof(s));
  s[2] = 1835009;
  s[0] = a2;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
}
