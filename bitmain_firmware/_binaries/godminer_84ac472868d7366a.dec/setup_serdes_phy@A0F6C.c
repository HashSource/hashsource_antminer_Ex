int __fastcall setup_serdes_phy(int result)
{
  int v1; // r0
  int v2; // r10
  int v3; // r0
  _WORD *v4; // r5
  int v5; // r4
  int v6; // t1
  int v7; // r0
  __int16 *v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // t1
  char *v12; // r0
  int v13; // r0
  int v14; // r12
  unsigned int v15; // r6
  _BOOL4 v16; // r3
  int v17; // [sp+40h] [bp-50h]
  int v18; // [sp+44h] [bp-4Ch]
  char *v19; // [sp+48h] [bp-48h]
  int v20; // [sp+54h] [bp-3Ch]
  __int16 v21; // [sp+5Ah] [bp-36h] BYREF
  _DWORD v22[4]; // [sp+5Ch] [bp-34h] BYREF
  __int16 v23; // [sp+6Ch] [bp-24h] BYREF
  int v24; // [sp+70h] [bp-20h] BYREF
  _BYTE v25[128]; // [sp+90h] [bp+0h] BYREF
  _BYTE s[1024]; // [sp+110h] [bp+80h] BYREF
  _DWORD v27[1025]; // [sp+510h] [bp+480h] BYREF

  v20 = 0;
  v17 = result;
  do
  {
    V_LOCK(result);
    ++v20;
    v1 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v1);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "setup_serdes_phy",
      16,
      12224,
      60,
      v27);
    serdes_initial_seq_1_by_vendor(v17, 0, 0xFFu, 8u);
    SOC_24G_seq1_20210922_update(v17, 0, 0xFFu, 8);
    memset(v25, 0, sizeof(v25));
    result = serdes_phy_bist(v17, (unsigned __int8 *)0xFF, 8, (int)v25);
    if ( !result )
      break;
    v2 = 0;
    memset(s, 0, sizeof(s));
    v18 = 0;
    v19 = s;
    v3 = 100991489;
    v22[1] = 100991489;
    v22[2] = 235735561;
    v22[3] = 134677248;
    v23 = 3851;
    do
    {
      v4 = (_WORD *)((char *)v22 + 3);
      do
      {
        while ( 1 )
        {
          v6 = *((unsigned __int8 *)v4 + 1);
          v4 = (_WORD *)((char *)v4 + 1);
          v5 = v6;
          V_LOCK(v3);
          v7 = logfmt_raw((int)v27, 0x1000u);
          V_UNLOCK(v7);
          v3 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_eth/backend_eth.c",
                 154,
                 "check_cmn_lock_and_reset_worse_phy",
                 34,
                 603,
                 20,
                 v27);
          if ( v25[16 * v2 + v6] )
            break;
          if ( (__int16 *)((char *)&v23 + 1) == v4 )
            goto LABEL_15;
        }
        v21 = 1541;
        v22[0] = 235735561;
        v27[0] = 50462721;
        v27[1] = 117834757;
        v27[2] = 185206793;
        v27[3] = 252578829;
        if ( v5 == 1 )
        {
          v14 = 1;
        }
        else
        {
          v8 = &v21;
          v9 = 2;
          v10 = 1;
          while ( v5 != v9 )
          {
            if ( ++v10 == 8 )
            {
              sub_5C2F4(v17, v2, v5, 80, 0);
              usleep((__useconds_t)&stru_18698.st_size);
              sub_5C2F4(v17, v2, v5, 80, 0x10000);
              usleep((__useconds_t)&stru_18698.st_size);
              goto LABEL_13;
            }
            v11 = *(unsigned __int8 *)v8;
            v8 = (__int16 *)((char *)v8 + 1);
            v9 = v11;
          }
          v14 = 2 * v10 + 1;
        }
        v15 = *((unsigned __int8 *)v27 + v14);
        sub_5C2F4(v17, v2, v5, 80, 0);
        usleep((__useconds_t)&stru_18698.st_size);
        sub_5C2F4(v17, v2, v5, 80, 0x10000);
        usleep((__useconds_t)&stru_18698.st_size);
        sub_5C2F4(v17, v2, v15, 80, 0);
        usleep((__useconds_t)&stru_18698.st_size);
        sub_5C2F4(v17, v2, v15, 80, 0x10000);
        usleep((__useconds_t)&stru_18698.st_size);
        v16 = v5 != v15;
        if ( v15 > 0xF )
          v16 = 0;
        if ( v16 )
        {
          v3 = sprintf(v19, "%1x-%1x-%1x ", v2, v5, v15);
          v19 += 6;
        }
        else
        {
LABEL_13:
          v12 = v19;
          v19 += 4;
          v3 = sprintf(v12, "%1x-%1x ", v2, v5);
        }
        ++v18;
      }
      while ( (__int16 *)((char *)&v23 + 1) != v4 );
LABEL_15:
      ++v2;
    }
    while ( v2 != 8 );
    V_LOCK(v3);
    V_INT((int)&v24, "chain");
    v13 = logfmt_raw((int)v27, 0x1000u);
    V_UNLOCK(v13);
    result = zlog(
               g_zc,
               "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmine"
               "r-origin_master/backend/backend_eth/backend_eth.c",
               154,
               "check_cmn_lock_and_reset_worse_phy",
               34,
               617,
               60,
               v27);
  }
  while ( v20 != 3 );
  return result;
}
