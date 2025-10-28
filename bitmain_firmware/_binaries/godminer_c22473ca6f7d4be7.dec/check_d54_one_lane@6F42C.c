int __fastcall check_d54_one_lane(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r3
  _DWORD *v9; // r7
  int v10; // r9
  int v11; // r1
  int v12; // r5
  int v13; // r2
  int back_1_chip; // r0
  int v15; // r3
  char *v16; // r1
  int v17; // r5
  int v18; // r1
  int v20; // r1
  int v22; // [sp+44h] [bp-1070h]
  char v23; // [sp+48h] [bp-106Ch]
  _DWORD v24[7]; // [sp+50h] [bp-1064h] BYREF
  int v25; // [sp+6Ch] [bp-1048h]
  unsigned __int8 v26; // [sp+70h] [bp-1044h] BYREF
  unsigned __int8 v27; // [sp+71h] [bp-1043h]
  int v28; // [sp+74h] [bp-1040h]
  char var1004[4112]; // [sp+B0h] [bp-1004h] BYREF

  v23 = a2;
  LOWORD(v9) = -14512;
  V_LOCK();
  LOWORD(v8) = -24436;
  HIWORD(v8) = (unsigned int)"l_lane" >> 16;
  HIWORD(v9) = (unsigned int)&unk_16B55C >> 16;
  LOWORD(v10) = -24580;
  logfmt_raw(var1004, 0x1000u, 0, v8, "check_d54_one_lane", a2, a3, a4, a5);
  V_UNLOCK();
  LOWORD(v11) = -25512;
  HIWORD(v11) = (unsigned int)"one" >> 16;
  zlog(*v9, v11, 154, "check_d54_one_lane", 18, 3430, 60, var1004);
  v12 = 21;
  v13 = a5;
  if ( a5 )
    v13 = 1;
  v22 = v13;
  do
  {
    usleep((__useconds_t)&stru_18694.st_info);
    back_1_chip = serdes_apb_read_back_1_chip(a1, v23, a3, (unsigned __int16)((_WORD)a4 << 12) | 0x36, (int)&v26);
    v15 = v22;
    if ( !back_1_chip )
      v15 = 0;
    if ( v15 )
    {
      if ( (a5 & ~v28) != 0 )
        goto LABEL_8;
    }
    else if ( a5 || (v28 & 8) != 0 )
    {
LABEL_8:
      V_LOCK();
      LOWORD(v16) = -7948;
      HIWORD(v16) = (unsigned int)&loc_12D594 >> 16;
      V_INT((int)v24, v16, *(int *)(a1 + 140));
      LOWORD(v17) = -24516;
      HIWORD(v17) = (unsigned int)"external_0811" >> 16;
      logfmt_raw(
        var1004,
        0x1000u,
        0,
        v25,
        v24[0],
        v24[1],
        v24[2],
        v24[3],
        v24[4],
        v24[5],
        v24[6],
        v25,
        v17,
        a4,
        v26,
        v27,
        v28,
        a5);
      V_UNLOCK();
      LOWORD(v18) = -25512;
      HIWORD(v18) = (unsigned int)"one" >> 16;
      zlog(*v9, v18, 154, "check_d54_one_lane", 18, 3443, 100, var1004);
      return 0;
    }
    V_LOCK();
    HIWORD(v10) = (unsigned int)"00M_one_lane" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v10, a4, v26, v27, a5);
    V_UNLOCK();
    LOWORD(v20) = -25512;
    HIWORD(v20) = (unsigned int)"one" >> 16;
    zlog(*v9, v20, 154, "check_d54_one_lane", 18, 3440, 20, var1004);
    --v12;
  }
  while ( v12 );
  return 0;
}
