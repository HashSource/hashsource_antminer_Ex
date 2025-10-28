int __fastcall sub_7F0EC(int a1, int a2, char a3, char a4)
{
  float v4; // s0
  _DWORD s[4]; // [sp+10h] [bp-24h] BYREF
  unsigned int v11[2]; // [sp+20h] [bp-14h] BYREF
  int v12; // [sp+28h] [bp-Ch]
  int i; // [sp+2Ch] [bp-8h]

  v11[0] = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[2]) = a3;
  BYTE1(s[2]) = a4;
  if ( a2 )
  {
    if ( a2 == 1 )
      HIWORD(s[2]) = 12;
  }
  else
  {
    HIWORD(s[2]) = 8;
  }
  for ( i = 100; i < 700; i += 100 )
    sub_7EA74(v11);
  sub_7EA74(v11);
  *(float *)&v11[1] = v4;
  s[0] = v11[0];
  v12 = -1;
  if ( v4 > 0.0 )
    v12 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, s);
  usleep(0x2710u);
  return v12;
}
