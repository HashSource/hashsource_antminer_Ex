int __fastcall sub_2A5CB4(int a1)
{
  int v3; // r1
  int v4; // r1
  _DWORD v5[11]; // [sp+1Ch] [bp-98h] BYREF
  _BYTE v6[80]; // [sp+48h] [bp-6Ch] BYREF
  int v7; // [sp+98h] [bp-1Ch]

  if ( ((*(_DWORD *)(a1 + 40) >> 5) & 0x2000) != 0 )
    return 1;
  sub_2A89D4();
  if ( sub_2A89F0(a1, v6) == -1 )
  {
    sub_2A69D8("Reading archive file mod timestamp");
    return 1;
  }
  v3 = *(_DWORD *)(a1 + 160);
  if ( v7 <= *(_DWORD *)(v3 + 32) )
    return 1;
  *(_DWORD *)(v3 + 32) = v7 + 60;
  memset(v5, 32, 12);
  sub_2A3330((char *)v5, 0xCu, "%ld");
  v4 = *(_DWORD *)(a1 + 160);
  *(_QWORD *)(v4 + 40) = 24;
  if ( !sub_2A8A2C(a1, v4, 24, 0, 0) && sub_2A88AC(v5, 12, a1) == 12 )
    return 0;
  sub_2A69D8("Writing updated armap timestamp");
  return 1;
}
