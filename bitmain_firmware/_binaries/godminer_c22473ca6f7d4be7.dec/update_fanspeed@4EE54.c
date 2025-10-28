int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int v3; // r7
  unsigned __int8 *v4; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r2
  char *v9; // r1
  char *v10; // r0
  int v11; // r4
  int realtime_speed; // r6
  char *v13; // r11
  int v14; // r1
  int v15; // r2
  int v16; // r3
  char *v17; // r9
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r1
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  _DWORD *v26; // r11
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int *v30; // r3
  int v31; // r0
  int v32; // r1
  int v33; // r0
  int v34; // r3
  int v35; // r2
  unsigned int v36; // r3
  int v37; // r2
  int v38; // r7
  bool v39; // cc
  int v40; // r3
  int v41; // r6
  int v42; // r9
  int max_speed; // r5
  int v44; // r3
  bool v45; // nf
  int result; // r0
  int *v47; // r3
  int v48; // r0
  int v49; // r1
  char v50; // [sp+20h] [bp-10ECh] BYREF
  int v51; // [sp+40h] [bp-10CCh]
  int v52; // [sp+44h] [bp-10C8h]
  unsigned int v53; // [sp+48h] [bp-10C4h]
  int v54; // [sp+4Ch] [bp-10C0h]
  int v55; // [sp+50h] [bp-10BCh]
  char *s; // [sp+54h] [bp-10B8h]
  __int64 v57; // [sp+58h] [bp-10B4h]
  char *v58; // [sp+60h] [bp-10ACh]
  int max_num; // [sp+64h] [bp-10A8h]
  int v60; // [sp+68h] [bp-10A4h]
  char *v61; // [sp+6Ch] [bp-10A0h]
  _DWORD *v62; // [sp+70h] [bp-109Ch]
  int v63; // [sp+74h] [bp-1098h]
  int v64; // [sp+78h] [bp-1094h]
  unsigned __int8 *v65; // [sp+7Ch] [bp-1090h]
  int v66; // [sp+80h] [bp-108Ch]
  int v67; // [sp+84h] [bp-1088h]
  _DWORD v68[7]; // [sp+88h] [bp-1084h] BYREF
  int v69; // [sp+A4h] [bp-1068h]
  _DWORD v70[8]; // [sp+A8h] [bp-1064h] BYREF
  _DWORD v71[7]; // [sp+C8h] [bp-1044h] BYREF
  int v72; // [sp+E4h] [bp-1028h]
  _DWORD v73[8]; // [sp+E8h] [bp-1024h] BYREF
  char v74[4100]; // [sp+108h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 136);
  v63 = a3 + 32;
  if ( v3 )
    return v63;
  LOWORD(v4) = 31100;
  HIWORD(v4) = (unsigned int)&unk_166770 >> 16;
  v64 = a3;
  v65 = v4;
  v6 = *v4;
  v67 = a1;
  if ( !v6 )
  {
    fan_init();
    *v65 = 1;
    max_num = fan_get_max_num();
    if ( max_num > 0 )
      goto LABEL_4;
LABEL_26:
    v40 = *(_DWORD *)(v64 + 32);
    a2[21] = 0;
    goto LABEL_17;
  }
  max_num = fan_get_max_num();
  if ( max_num <= 0 )
    goto LABEL_26;
LABEL_4:
  LOWORD(v7) = 21504;
  LOWORD(v8) = -23476;
  HIWORD(v7) = (unsigned int)"r_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
  HIWORD(v8) = (unsigned int)"e" >> 16;
  v54 = v7;
  LOWORD(v9) = 21520;
  LOWORD(v10) = 21528;
  v55 = v8;
  v62 = a2;
  v11 = 0;
  HIWORD(v9) = (unsigned int)"ld/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
  HIWORD(v10) = (unsigned int)"s/buildroot/tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
  v60 = 0;
  s = v9;
  v58 = v10;
  v61 = &v50;
  v66 = 0;
  v53 = 0;
  do
  {
    realtime_speed = fan_get_realtime_speed(v11);
    V_LOCK();
    V_INT((int)v68, s, __SPAIR64__(v53, v11));
    v57 = realtime_speed;
    V_INT((int)v70, v58, realtime_speed);
    v13 = v61;
    v14 = v70[1];
    v15 = v70[2];
    v16 = v70[3];
    v17 = v61;
    v52 = v54;
    v51 = v55;
    *(_DWORD *)v61 = v70[0];
    *((_DWORD *)v17 + 1) = v14;
    *((_DWORD *)v17 + 2) = v15;
    *((_DWORD *)v17 + 3) = v16;
    v17 += 16;
    v18 = v70[5];
    v19 = v70[6];
    v20 = v70[7];
    *(_DWORD *)v17 = v70[4];
    *((_DWORD *)v17 + 1) = v18;
    *((_DWORD *)v17 + 2) = v19;
    *((_DWORD *)v17 + 3) = v20;
    logfmt_raw(v74, 0x1000u, 0, v69, v68[0], v68[1], v68[2], v68[3], v68[4], v68[5], v68[6], v69);
    V_UNLOCK();
    LOWORD(v21) = 21540;
    LOWORD(v22) = 21504;
    HIWORD(v21) = (unsigned int)"tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
    HIWORD(v22) = (unsigned int)"r_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
    zlog(g_fan_zc, v21, 183, v22, 15, 34, 40, v74);
    if ( realtime_speed != -1 )
    {
      V_LOCK();
      V_INT((int)v71, s, __SPAIR64__(v53, v11));
      V_INT((int)v73, v58, v57);
      v23 = v73[1];
      v24 = v73[2];
      v25 = v73[3];
      v52 = v54;
      v51 = v55;
      *(_DWORD *)v13 = v73[0];
      *((_DWORD *)v13 + 1) = v23;
      *((_DWORD *)v13 + 2) = v24;
      *((_DWORD *)v13 + 3) = v25;
      v26 = v13 + 16;
      v27 = v73[5];
      v28 = v73[6];
      v29 = v73[7];
      *v26 = v73[4];
      v26[1] = v27;
      v26[2] = v28;
      v26[3] = v29;
      logfmt_raw(v74, 0x1000u, 0, v72, v71[0], v71[1], v71[2], v71[3], v71[4], v71[5], v71[6], v72);
      V_UNLOCK();
      LOWORD(v30) = -14512;
      HIWORD(v30) = (unsigned int)&unk_16B55C >> 16;
      v31 = *v30;
      LOWORD(v32) = 21540;
      LOWORD(v30) = 21504;
      HIWORD(v32) = (unsigned int)"tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
      HIWORD(v30) = (unsigned int)"r_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
      zlog(v31, v32, 183, v30, 15, 36, 20, v74);
      v33 = v60;
      v34 = 4 * v60;
      v35 = v62[22];
      *(_DWORD *)(v62[23] + 4 * v60) = v11;
      *(_DWORD *)(v35 + v34) = realtime_speed;
      v60 = v33 + 1;
    }
    v36 = (__PAIR64__(v53, v11++) + 1) >> 32;
    v53 = v36;
  }
  while ( max_num > v11 );
  v37 = v60;
  a2 = v62;
  v38 = v66;
  v39 = v60 < max_num;
  v62[21] = v60;
  if ( !v39 || (v40 = *(_DWORD *)(v64 + 32) | 2, *(_DWORD *)(v64 + 32) = v40, v37) )
  {
    v41 = v64;
    do
    {
      while ( 1 )
      {
        v42 = *(_DWORD *)(a2[22] + 4 * v38);
        if ( v42 )
        {
          max_speed = fan_get_max_speed();
          if ( v42 >= fan_pwm_get() * max_speed / 150 )
            break;
        }
        ++v38;
        *(_DWORD *)(v41 + 32) |= 1u;
        if ( a2[21] <= v38 )
          goto LABEL_16;
      }
      ++v38;
    }
    while ( a2[21] > v38 );
LABEL_16:
    v40 = *(_DWORD *)(v64 + 32);
  }
LABEL_17:
  if ( (v40 & 3) == 0 )
  {
    result = v63;
    *((_DWORD *)v65 + 1) = 0;
    return result;
  }
  v44 = *((_DWORD *)v65 + 1) + 1;
  v45 = *((_DWORD *)v65 + 1) - 14 < 0;
  *((_DWORD *)v65 + 1) = v44;
  if ( v45 ^ __OFSUB__(v44, 15) | (v44 == 15) )
    return v63;
  V_LOCK();
  logfmt_raw(v74, 0x1000u, 0, "fan_error_num: %d fan_num %d", *((_DWORD *)v65 + 1), a2[21]);
  V_UNLOCK();
  if ( !*(_BYTE *)(v67 + 146) )
  {
    LOWORD(v47) = -14512;
    HIWORD(v47) = (unsigned int)&unk_16B55C >> 16;
    v48 = *v47;
    LOWORD(v47) = 21504;
    LOWORD(v49) = 21540;
    HIWORD(v47) = (unsigned int)"r_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
    HIWORD(v49) = (unsigned int)"tmp/release/build/godminer-origin_master/miner_util/power_api.c" >> 16;
    zlog(v48, v49, 183, v47, 15, 55, 20, v74);
  }
  result = v63;
  *(_DWORD *)(v64 + 32) |= 4u;
  return result;
}
