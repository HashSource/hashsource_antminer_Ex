int __fastcall pic1704_get_PDCx(char a1, int *a2, int *a3, int *a4)
{
  int v9; // [sp+14h] [bp-28h] BYREF
  int v10; // [sp+18h] [bp-24h]
  unsigned __int8 v11; // [sp+1Ch] [bp-20h]
  int v12; // [sp+20h] [bp-1Ch] BYREF
  __int16 v13; // [sp+24h] [bp-18h]
  int v14; // [sp+28h] [bp-14h]
  int v15; // [sp+2Ch] [bp-10h]
  int v16; // [sp+30h] [bp-Ch]

  v12 = 0;
  v13 = 0;
  v9 = 255;
  v10 = 0;
  v11 = 0;
  LOWORD(v14) = 43;
  v15 = 0;
  HIBYTE(v14) = a1;
  BYTE2(v14) = 9;
  if ( !(unsigned __int8)sub_1F3C40(v14, 0, &v12, (unsigned __int8 *)&v9) )
    return 0;
  *a2 = (unsigned __int8)v10 | (HIBYTE(v9) << 8);
  *a3 = BYTE2(v10) | (BYTE1(v10) << 8);
  v16 = HIBYTE(v10) << 8;
  *a4 = v11 | v16;
  return 1;
}
