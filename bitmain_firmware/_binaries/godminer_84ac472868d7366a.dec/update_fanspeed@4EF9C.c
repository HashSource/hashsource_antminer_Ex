int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v3; // r7
  int v5; // r4
  int realtime_speed; // r6
  char *v7; // r11
  int v8; // r1
  int v9; // r2
  int v10; // r3
  char *v11; // r9
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  _DWORD *v20; // r11
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0
  int v25; // r0
  int v26; // r3
  int v27; // r2
  unsigned int v28; // r3
  int v29; // r2
  _DWORD *v30; // r8
  int v31; // r7
  bool v32; // cc
  int v33; // r3
  int v34; // r6
  int v35; // r9
  int max_speed; // r5
  int v37; // r0
  int v38; // r3
  bool v39; // nf
  int result; // r0
  int v41; // r0
  char v42; // [sp+20h] [bp-10ECh] BYREF
  char *v43; // [sp+40h] [bp-10CCh]
  const char *v44; // [sp+44h] [bp-10C8h]
  unsigned int v45; // [sp+48h] [bp-10C4h]
  const char *v46; // [sp+4Ch] [bp-10C0h]
  char *v47; // [sp+50h] [bp-10BCh]
  char *s; // [sp+54h] [bp-10B8h]
  __int64 v49; // [sp+58h] [bp-10B4h]
  char *v50; // [sp+60h] [bp-10ACh]
  int max_num; // [sp+64h] [bp-10A8h]
  int v52; // [sp+68h] [bp-10A4h]
  char *v53; // [sp+6Ch] [bp-10A0h]
  _DWORD *v54; // [sp+70h] [bp-109Ch]
  int v55; // [sp+74h] [bp-1098h]
  int v56; // [sp+78h] [bp-1094h]
  char *v57; // [sp+7Ch] [bp-1090h]
  int v58; // [sp+80h] [bp-108Ch]
  int v59; // [sp+84h] [bp-1088h]
  char v60[32]; // [sp+88h] [bp-1084h] BYREF
  _DWORD v61[8]; // [sp+A8h] [bp-1064h] BYREF
  char v62[32]; // [sp+C8h] [bp-1044h] BYREF
  _DWORD v63[8]; // [sp+E8h] [bp-1024h] BYREF
  _BYTE v64[4100]; // [sp+108h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 136);
  v55 = a3 + 32;
  if ( v3 )
    return v55;
  v56 = a3;
  v57 = &fan_inited;
  v59 = a1;
  if ( !fan_inited )
  {
    fan_init();
    *v57 = 1;
    max_num = fan_get_max_num();
    if ( max_num > 0 )
      goto LABEL_4;
LABEL_26:
    v33 = *(_DWORD *)(v56 + 32);
    a2[21] = 0;
    goto LABEL_17;
  }
  max_num = fan_get_max_num();
  if ( max_num <= 0 )
    goto LABEL_26;
LABEL_4:
  v46 = "update_fanspeed";
  v47 = "%s";
  v54 = a2;
  v5 = 0;
  v52 = 0;
  s = "fanid";
  v50 = "fanspeed";
  v53 = &v42;
  v58 = 0;
  v45 = 0;
  do
  {
    realtime_speed = fan_get_realtime_speed(v5);
    V_LOCK(realtime_speed);
    V_INT((int)v60, s);
    v49 = realtime_speed;
    V_INT((int)v61, v50);
    v7 = v53;
    v8 = v61[1];
    v9 = v61[2];
    v10 = v61[3];
    v11 = v53;
    v44 = v46;
    v43 = v47;
    *(_DWORD *)v53 = v61[0];
    *((_DWORD *)v11 + 1) = v8;
    *((_DWORD *)v11 + 2) = v9;
    *((_DWORD *)v11 + 3) = v10;
    v11 += 16;
    v12 = v61[5];
    v13 = v61[6];
    v14 = v61[7];
    *(_DWORD *)v11 = v61[4];
    *((_DWORD *)v11 + 1) = v12;
    *((_DWORD *)v11 + 2) = v13;
    *((_DWORD *)v11 + 3) = v14;
    v15 = logfmt_raw((int)v64, 0x1000u);
    V_UNLOCK(v15);
    v16 = zlog(
            g_fan_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
            "rigin_master/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            183,
            "update_fanspeed",
            15,
            34,
            40,
            v64);
    if ( realtime_speed != -1 )
    {
      V_LOCK(v16);
      V_INT((int)v62, s);
      V_INT((int)v63, v50);
      v17 = v63[1];
      v18 = v63[2];
      v19 = v63[3];
      v44 = v46;
      v43 = v47;
      *(_DWORD *)v7 = v63[0];
      *((_DWORD *)v7 + 1) = v17;
      *((_DWORD *)v7 + 2) = v18;
      *((_DWORD *)v7 + 3) = v19;
      v20 = v7 + 16;
      v21 = v63[5];
      v22 = v63[6];
      v23 = v63[7];
      *v20 = v63[4];
      v20[1] = v21;
      v20[2] = v22;
      v20[3] = v23;
      v24 = logfmt_raw((int)v64, 0x1000u);
      V_UNLOCK(v24);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
        183,
        "update_fanspeed",
        15,
        36,
        20,
        v64);
      v25 = v52;
      v26 = 4 * v52;
      v27 = v54[22];
      *(_DWORD *)(v54[23] + 4 * v52) = v5;
      *(_DWORD *)(v27 + v26) = realtime_speed;
      v52 = v25 + 1;
    }
    v28 = (__PAIR64__(v45, v5++) + 1) >> 32;
    v45 = v28;
  }
  while ( max_num > v5 );
  v29 = v52;
  v30 = v54;
  v31 = v58;
  v32 = v52 < max_num;
  v54[21] = v52;
  if ( !v32 || (v33 = *(_DWORD *)(v56 + 32) | 2, *(_DWORD *)(v56 + 32) = v33, v29) )
  {
    v34 = v56;
    do
    {
      while ( 1 )
      {
        v35 = *(_DWORD *)(v30[22] + 4 * v31);
        if ( v35 )
        {
          max_speed = fan_get_max_speed();
          if ( v35 >= fan_pwm_get() * max_speed / 150 )
            break;
        }
        ++v31;
        *(_DWORD *)(v34 + 32) |= 1u;
        if ( v30[21] <= v31 )
          goto LABEL_16;
      }
      ++v31;
    }
    while ( v30[21] > v31 );
LABEL_16:
    v33 = *(_DWORD *)(v56 + 32);
  }
LABEL_17:
  v37 = v33 & 3;
  if ( (v33 & 3) == 0 )
  {
    result = v55;
    *((_DWORD *)v57 + 1) = 0;
    return result;
  }
  v38 = *((_DWORD *)v57 + 1) + 1;
  v39 = *((_DWORD *)v57 + 1) - 14 < 0;
  *((_DWORD *)v57 + 1) = v38;
  if ( v39 ^ __OFSUB__(v38, 15) | (v38 == 15) )
    return v55;
  V_LOCK(v37);
  v41 = logfmt_raw((int)v64, 0x1000u);
  V_UNLOCK(v41);
  if ( !*(_BYTE *)(v59 + 146) )
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
      183,
      "update_fanspeed",
      15,
      55,
      20,
      v64);
  result = v55;
  *(_DWORD *)(v56 + 32) |= 4u;
  return result;
}
