int __fastcall sub_197DCC(int a1, char a2, int a3)
{
  _DWORD s[37]; // [sp+10h] [bp-9Ch] BYREF
  int i; // [sp+A4h] [bp-8h]

  memset(s, 0, sizeof(s));
  LOBYTE(s[1]) = 1;
  BYTE1(s[1]) = a2;
  s[0] = a3;
  for ( i = 0; i <= 127; ++i )
    *((_BYTE *)&s[4] + i + 2) = -86;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 328))(a1, s);
}
