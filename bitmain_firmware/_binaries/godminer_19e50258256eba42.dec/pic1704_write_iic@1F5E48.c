int __fastcall pic1704_write_iic(char a1, char a2)
{
  _BYTE v3[4]; // [sp+Ch] [bp-20h] BYREF
  __int16 v4; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v5[2]; // [sp+14h] [bp-18h] BYREF
  int v6; // [sp+1Ch] [bp-10h]
  _BYTE *v7; // [sp+20h] [bp-Ch]

  v5[0] = 0;
  v5[1] = 0;
  v4 = 255;
  v3[0] = a2;
  v3[1] = 0;
  LOWORD(v6) = 571;
  v7 = v3;
  HIBYTE(v6) = a1;
  BYTE2(v6) = 2;
  return (unsigned __int8)sub_1F3C40(v6, (int)v3, v5, (unsigned __int8 *)&v4);
}
