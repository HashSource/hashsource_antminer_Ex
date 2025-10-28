int __fastcall sub_1070C8(int a1, char a2, __int16 a3, int a4)
{
  _DWORD s[4]; // [sp+14h] [bp-18h] BYREF
  int v10; // [sp+24h] [bp-8h]

  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = 1;
  HIWORD(s[2]) = a3;
  LOBYTE(s[3]) = a2;
  s[0] = a4;
  v10 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 300))(a1, s);
  usleep(0x4E20u);
  return v10;
}
