int __fastcall sub_1F44F8(char a1, int a2)
{
  __int16 v3; // [sp+8h] [bp-2Ch] BYREF
  _BYTE v4[20]; // [sp+Ch] [bp-28h] BYREF
  __int16 v5; // [sp+20h] [bp-14h]
  int v6; // [sp+24h] [bp-10h]
  int v7; // [sp+28h] [bp-Ch]

  memset(v4, 0, sizeof(v4));
  v5 = 0;
  v3 = 255;
  LOWORD(v6) = 4098;
  v7 = a2;
  HIBYTE(v6) = a1;
  BYTE2(v6) = 2;
  return (unsigned __int8)sub_1F3C40(v6, a2, v4, (unsigned __int8 *)&v3);
}
