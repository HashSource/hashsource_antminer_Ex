int __fastcall get_special_core_reg(int a1)
{
  _DWORD *v1; // r10
  int v2; // r3
  int v3; // r11
  char *v4; // r4
  int v5; // r1
  int v6; // r6
  char *v7; // r4
  int v8; // r0
  int v9; // r8
  int v10; // r7
  char *v11; // r6
  int v12; // r2
  int v13; // r1
  int v14; // r0
  int v16; // r1
  int v17; // [sp+30h] [bp-103Ch]
  char *ptr; // [sp+38h] [bp-1034h]
  int v20; // [sp+3Ch] [bp-1030h]
  char *s; // [sp+40h] [bp-102Ch]
  int v22; // [sp+44h] [bp-1028h]
  _DWORD v23[7]; // [sp+48h] [bp-1024h] BYREF
  int v24; // [sp+64h] [bp-1008h]
  char v25[4100]; // [sp+68h] [bp-1004h] BYREF

  LOWORD(v1) = -14512;
  HIWORD(v1) = (unsigned int)&unk_16B55C >> 16;
  V_LOCK();
  LOWORD(v2) = -22412;
  HIWORD(v2) = (unsigned int)&unk_139BA4 >> 16;
  v3 = 0;
  LOWORD(v4) = -7948;
  logfmt_raw(v25, 0x1000u, 0, v2, "get_special_core_reg");
  V_UNLOCK();
  LOWORD(v5) = -25512;
  HIWORD(v5) = (unsigned int)"one" >> 16;
  LOWORD(v6) = -24108;
  zlog(*v1, v5, 154, "get_special_core_reg", 20, 8279, 20, v25);
  v20 = 0;
  ptr = (char *)malloc(0x600u);
  HIWORD(v4) = (unsigned int)&loc_12D594 >> 16;
  s = v4;
  HIWORD(v6) = (unsigned int)"c_lane_cross" >> 16;
  v22 = v6;
  do
  {
    v7 = ptr;
    v8 = sub_5C5E4(a1, v3, 255, 81, ptr);
    v17 = v8;
    if ( v8 <= 0 )
      goto LABEL_8;
    LOWORD(v9) = -24144;
    LOWORD(v10) = -25512;
    v11 = &ptr[12 * v8];
    do
    {
      V_LOCK();
      v12 = *(_DWORD *)v7;
      v13 = (unsigned __int8)v7[8];
      HIWORD(v9) = (unsigned int)"re_id" >> 16;
      v14 = (unsigned __int8)v7[4];
      v7 += 12;
      logfmt_raw(v25, 0x1000u, 0, v9, v14, v13, 81, v12);
      V_UNLOCK();
      HIWORD(v10) = (unsigned int)"one" >> 16;
      zlog(*v1, v10, 154, "get_special_core_reg", 20, 8286, 20, v25);
    }
    while ( v7 != v11 );
    if ( v17 != 16 )
    {
LABEL_8:
      V_LOCK();
      v20 = 1;
      V_INT((int)v23, s, *(int *)(a1 + 140));
      logfmt_raw(v25, 0x1000u, 0, v24, v23[0], v23[1], v23[2], v23[3], v23[4], v23[5], v23[6], v24, v22, v3, 81, v17);
      V_UNLOCK();
      LOWORD(v16) = -25512;
      HIWORD(v16) = (unsigned int)"one" >> 16;
      zlog(*v1, v16, 154, "get_special_core_reg", 20, 8291, 100, v25);
    }
    ++v3;
  }
  while ( v3 != 8 );
  free(ptr);
  return v20;
}
