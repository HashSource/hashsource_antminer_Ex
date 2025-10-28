int __fastcall pic1704_enable_disable_dc_dc(char a1, char a2)
{
  _BYTE v3[2]; // [sp+6h] [bp-1Eh] BYREF
  __int16 v4; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v5[2]; // [sp+Ch] [bp-18h] BYREF
  int v6; // [sp+14h] [bp-10h]
  _BYTE *v7; // [sp+18h] [bp-Ch]

  v3[1] = a1;
  v3[0] = a2;
  v5[0] = 0;
  *(_DWORD *)((char *)v5 + 3) = 0;
  v4 = 255;
  LOWORD(v6) = 277;
  v7 = v3;
  HIBYTE(v6) = a1;
  BYTE2(v6) = 2;
  return (unsigned __int8)sub_1F3C40(v6, (int)v3, v5, (unsigned __int8 *)&v4);
}
