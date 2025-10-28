int __fastcall pic1704_get_raw_crab_voltage(char a1, int *a2, int *a3, int *a4, int *a5)
{
  int v10; // [sp+10h] [bp-2Ch] BYREF
  int v11; // [sp+14h] [bp-28h]
  int v12; // [sp+18h] [bp-24h]
  char v13; // [sp+1Ch] [bp-20h]
  int v14; // [sp+20h] [bp-1Ch] BYREF
  __int16 v15; // [sp+24h] [bp-18h]
  int v16; // [sp+28h] [bp-14h]
  int v17; // [sp+2Ch] [bp-10h]
  int v18; // [sp+30h] [bp-Ch]

  v14 = 0;
  v15 = 0;
  v10 = 255;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  LOWORD(v16) = 40;
  v17 = 0;
  HIBYTE(v16) = a1;
  BYTE2(v16) = 13;
  if ( !(unsigned __int8)sub_1F3C40(v16, 0, &v14, (unsigned __int8 *)&v10) )
    return 0;
  *a2 = (HIBYTE(v10) << 8) | (unsigned __int8)v11;
  *a3 = (BYTE1(v11) << 8) | BYTE2(v11);
  *a4 = (HIBYTE(v11) << 8) | (unsigned __int8)v12;
  v18 = (BYTE1(v12) << 8) | BYTE2(v12);
  *a5 = v18;
  return 1;
}
