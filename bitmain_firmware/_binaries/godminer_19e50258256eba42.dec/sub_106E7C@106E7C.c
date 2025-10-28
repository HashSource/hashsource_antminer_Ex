int __fastcall sub_106E7C(int a1, __int16 a2, int a3)
{
  _DWORD s[4]; // [sp+14h] [bp-18h] BYREF

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 1;
  HIWORD(s[2]) = a2;
  LOWORD(s[3]) = 16128;
  s[0] = a3;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
}
