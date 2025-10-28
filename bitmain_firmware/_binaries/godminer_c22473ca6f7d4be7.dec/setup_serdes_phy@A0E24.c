int __fastcall setup_serdes_phy(int a1)
{
  _DWORD *v1; // r10
  _DWORD *v2; // r8
  int v3; // r3
  int v4; // r1
  int result; // r0
  int v6; // r10
  _WORD *v7; // r5
  int v8; // r4
  int v9; // t1
  int v10; // r1
  __int16 *v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // t1
  char *v15; // r0
  char *v16; // r1
  int v17; // r1
  int v18; // r12
  unsigned int v19; // r6
  _BOOL4 v20; // r3
  const char *v21; // r1
  int v22; // [sp+34h] [bp-5Ch]
  int v24; // [sp+44h] [bp-4Ch]
  char *v25; // [sp+48h] [bp-48h]
  int v26; // [sp+54h] [bp-3Ch]
  __int16 v27; // [sp+5Ah] [bp-36h] BYREF
  _DWORD v28[4]; // [sp+5Ch] [bp-34h] BYREF
  __int16 v29; // [sp+6Ch] [bp-24h] BYREF
  _DWORD v30[7]; // [sp+70h] [bp-20h] BYREF
  int v31; // [sp+8Ch] [bp-4h]
  _BYTE v32[128]; // [sp+90h] [bp+0h] BYREF
  _BYTE s[1024]; // [sp+110h] [bp+80h] BYREF
  _DWORD v34[1025]; // [sp+510h] [bp+480h] BYREF

  LOWORD(v1) = -14512;
  HIWORD(v1) = (unsigned int)&unk_16B55C >> 16;
  v26 = 0;
  v2 = v1;
  do
  {
    V_LOCK();
    ++v26;
    LOWORD(v3) = -21884;
    HIWORD(v3) = (unsigned int)" %02x core %02x reg %02x cnt %08x" >> 16;
    logfmt_raw((char *)v34, 0x1000u, 0, v3, "setup_serdes_phy", v26);
    V_UNLOCK();
    LOWORD(v4) = -25512;
    HIWORD(v4) = (unsigned int)"one" >> 16;
    zlog(*v2, v4, 154, "setup_serdes_phy", 16, 12224, 60, v34);
    serdes_initial_seq_1_by_vendor(a1, 0, 0xFFu, 8u);
    SOC_24G_seq1_20210922_update(a1, 0, 0xFFu, 8);
    memset(v32, 0, sizeof(v32));
    result = serdes_phy_bist(a1, (unsigned __int8 *)0xFF, 8, (int)v32);
    if ( !result )
      break;
    v6 = 0;
    memset(s, 0, sizeof(s));
    v24 = 0;
    v25 = s;
    v28[1] = 100991489;
    v28[2] = 235735561;
    v28[3] = 134677248;
    v29 = 3851;
    do
    {
      v7 = (_WORD *)((char *)v28 + 3);
      v22 = 16 * v6;
      do
      {
        while ( 1 )
        {
          v9 = *((unsigned __int8 *)v7 + 1);
          v7 = (_WORD *)((char *)v7 + 1);
          v8 = v9;
          V_LOCK();
          logfmt_raw(
            (char *)v34,
            0x1000u,
            0,
            "%s chip %x core %x cmn status %x",
            "check_cmn_lock_and_reset_worse_phy",
            v6,
            v8,
            (unsigned __int8)v32[v8 + v22]);
          V_UNLOCK();
          LOWORD(v10) = -25512;
          HIWORD(v10) = (unsigned int)"one" >> 16;
          zlog(*v2, v10, 154, "check_cmn_lock_and_reset_worse_phy", 34, 603, 20, v34);
          if ( v32[v9 + v22] )
            break;
          if ( (__int16 *)((char *)&v29 + 1) == v7 )
            goto LABEL_15;
        }
        v27 = 1541;
        v28[0] = 235735561;
        v34[0] = 50462721;
        v34[1] = 117834757;
        v34[2] = 185206793;
        v34[3] = 252578829;
        if ( v8 == 1 )
        {
          v18 = 1;
        }
        else
        {
          v11 = &v27;
          v12 = 2;
          v13 = 1;
          while ( v8 != v12 )
          {
            if ( ++v13 == 8 )
            {
              sub_5C1AC(a1, v6, v8, 80, 0);
              usleep((__useconds_t)&stru_18694.st_info);
              sub_5C1AC(a1, v6, v8, 80, 0x10000);
              usleep((__useconds_t)&stru_18694.st_info);
              goto LABEL_13;
            }
            v14 = *(unsigned __int8 *)v11;
            v11 = (__int16 *)((char *)v11 + 1);
            v12 = v14;
          }
          v18 = 2 * v13 + 1;
        }
        v19 = *((unsigned __int8 *)v34 + v18);
        sub_5C1AC(a1, v6, v8, 80, 0);
        usleep((__useconds_t)&stru_18694.st_info);
        sub_5C1AC(a1, v6, v8, 80, 0x10000);
        usleep((__useconds_t)&stru_18694.st_info);
        sub_5C1AC(a1, v6, v19, 80, 0);
        usleep((__useconds_t)&stru_18694.st_info);
        sub_5C1AC(a1, v6, v19, 80, 0x10000);
        usleep((__useconds_t)&stru_18694.st_info);
        v20 = v8 != v19;
        if ( v19 > 0xF )
          v20 = 0;
        if ( v20 )
        {
          LOWORD(v21) = -21856;
          HIWORD(v21) = (unsigned int)" %08x" >> 16;
          sprintf(v25, v21, v6, v8, v19);
          v25 += 6;
        }
        else
        {
LABEL_13:
          v15 = v25;
          v25 += 4;
          sprintf(v15, "%1x-%1x ", v6, v8);
        }
        ++v24;
      }
      while ( (__int16 *)((char *)&v29 + 1) != v7 );
LABEL_15:
      ++v6;
    }
    while ( v6 != 8 );
    V_LOCK();
    LOWORD(v16) = -7948;
    HIWORD(v16) = (unsigned int)&loc_12D594 >> 16;
    V_INT((int)v30, v16, *(int *)(a1 + 140));
    logfmt_raw(
      (char *)v34,
      0x1000u,
      0,
      v31,
      v30[0],
      v30[1],
      v30[2],
      v30[3],
      v30[4],
      v30[5],
      v30[6],
      v31,
      "%s (%d) %s",
      "check_cmn_lock_and_reset_worse_phy",
      v24,
      s);
    V_UNLOCK();
    LOWORD(v17) = -25512;
    HIWORD(v17) = (unsigned int)"one" >> 16;
    result = zlog(*v2, v17, 154, "check_cmn_lock_and_reset_worse_phy", 34, 617, 60, v34);
  }
  while ( v26 != 3 );
  return result;
}
