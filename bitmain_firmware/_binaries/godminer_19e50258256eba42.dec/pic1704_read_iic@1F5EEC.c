int __fastcall pic1704_read_iic(char a1, char a2, _BYTE *a3)
{
  _BYTE v6[4]; // [sp+8h] [bp-2Ch] BYREF
  _BYTE v7[7]; // [sp+Ch] [bp-28h] BYREF
  _DWORD v8[2]; // [sp+14h] [bp-20h] BYREF
  int v9; // [sp+1Ch] [bp-18h]
  _BYTE *v10; // [sp+20h] [bp-14h]
  int i; // [sp+28h] [bp-Ch]
  __int16 v13; // [sp+2Eh] [bp-6h]

  v8[0] = 0;
  *(_DWORD *)((char *)v8 + 3) = 0;
  *(_DWORD *)v7 = 255;
  *(_DWORD *)&v7[3] = 0;
  v6[0] = a2;
  v6[1] = 2;
  LOWORD(v9) = 572;
  v10 = v6;
  HIBYTE(v9) = a1;
  BYTE2(v9) = 7;
  if ( !(unsigned __int8)sub_1F3C40(v9, (int)v6, v8, v7) )
    return 0;
  v13 = 0;
  for ( i = 0; i < BYTE2(v9) - 2; ++i )
    v13 += (unsigned __int8)v7[i];
  if ( HIBYTE(v13) != (unsigned __int8)v7[BYTE2(v9) - 2] || (unsigned __int8)v13 != (unsigned __int8)v7[BYTE2(v9) - 1] )
    return 0;
  if ( v7[2] != 1 )
    return 0;
  *a3 = v7[3];
  return 1;
}
