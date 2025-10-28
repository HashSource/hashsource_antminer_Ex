int __fastcall sub_1D0BF8(int a1, __int16 a2, int a3, char a4)
{
  _DWORD s[4]; // [sp+14h] [bp-18h] BYREF

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 1;
  HIWORD(s[2]) = a2;
  LOBYTE(s[3]) = a4;
  s[0] = a3;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
}
