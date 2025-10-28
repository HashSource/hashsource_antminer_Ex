int __fastcall pic1704_set_voltage(char a1, unsigned __int8 a2)
{
  __int16 v3; // [sp+8h] [bp-24h] BYREF
  char v4; // [sp+Ah] [bp-22h]
  __int16 v5; // [sp+Ch] [bp-20h] BYREF
  _DWORD v6[2]; // [sp+10h] [bp-1Ch] BYREF
  char v7; // [sp+18h] [bp-14h]
  int v8; // [sp+1Ch] [bp-10h]
  __int16 *v9; // [sp+20h] [bp-Ch]

  v6[0] = 0;
  v6[1] = 0;
  v7 = 0;
  v5 = 255;
  v4 = 0;
  v3 = a2;
  LOWORD(v8) = 784;
  v9 = &v3;
  HIBYTE(v8) = a1;
  BYTE2(v8) = 2;
  return (unsigned __int8)sub_1F3C40(v8, (int)&v3, v6, (unsigned __int8 *)&v5);
}
