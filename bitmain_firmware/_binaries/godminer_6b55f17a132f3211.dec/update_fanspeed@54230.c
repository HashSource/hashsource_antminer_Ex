int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int *all_created_runtime; // r0
  int v7; // r3
  int v9; // r4
  int realtime_speed; // r6
  char *v11; // r11
  int v12; // r1
  int v13; // r2
  int v14; // r3
  char *v15; // r8
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r11
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int v31; // r2
  int v32; // r2
  _DWORD *v33; // r8
  bool v34; // cc
  int v35; // r3
  int v36; // r4
  int v37; // r9
  int v38; // r10
  int fan_max_speed; // r7
  int v40; // r0
  int v41; // r3
  bool v42; // nf
  int v43; // r0
  int v44; // r0
  int v45; // r0
  char v46; // [sp+20h] [bp-10F4h] BYREF
  char *v47; // [sp+40h] [bp-10D4h]
  const char *v48; // [sp+44h] [bp-10D0h]
  const char *v49; // [sp+4Ch] [bp-10C8h]
  char *v50; // [sp+50h] [bp-10C4h]
  char *s; // [sp+54h] [bp-10C0h]
  char *v52; // [sp+58h] [bp-10BCh]
  int fan_num; // [sp+5Ch] [bp-10B8h]
  int v54; // [sp+60h] [bp-10B4h]
  int *v55; // [sp+64h] [bp-10B0h]
  char *v56; // [sp+68h] [bp-10ACh]
  int v57; // [sp+6Ch] [bp-10A8h]
  int v58; // [sp+70h] [bp-10A4h]
  int v59; // [sp+74h] [bp-10A0h]
  int v60; // [sp+78h] [bp-109Ch]
  _DWORD *v61; // [sp+7Ch] [bp-1098h]
  int v62; // [sp+80h] [bp-1094h]
  char *v63; // [sp+84h] [bp-1090h]
  int v64; // [sp+8Ch] [bp-1088h] BYREF
  char v65[32]; // [sp+90h] [bp-1084h] BYREF
  _DWORD v66[8]; // [sp+B0h] [bp-1064h] BYREF
  char v67[32]; // [sp+D0h] [bp-1044h] BYREF
  _DWORD v68[8]; // [sp+F0h] [bp-1024h] BYREF
  _BYTE v69[4100]; // [sp+110h] [bp-1004h] BYREF

  v60 = a3;
  v64 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v64);
  v7 = *all_created_runtime;
  v57 = a3 + 32;
  v62 = v7;
  if ( v7 == a1 )
  {
    v63 = &fan_inited;
    if ( !fan_inited )
    {
      all_created_runtime = (int *)fan_init();
      *v63 = 1;
    }
    fan_num = platform_get_fan_num(all_created_runtime);
    if ( fan_num <= 0 )
    {
      v35 = *(_DWORD *)(v60 + 32);
      a2[23] = 0;
    }
    else
    {
      v9 = 0;
      v49 = "update_fanspeed";
      v55 = &g_fan_zc;
      v50 = "%s";
      s = "fanid";
      v52 = "fanspeed";
      v54 = 0;
      v56 = &v46;
      v61 = a2;
      do
      {
        realtime_speed = fan_get_realtime_speed(v9);
        v58 = realtime_speed;
        v59 = realtime_speed >> 31;
        V_LOCK(realtime_speed);
        V_INT((int)v65, s);
        V_INT((int)v66, v52);
        v11 = v56;
        v12 = v66[1];
        v13 = v66[2];
        v14 = v66[3];
        v15 = v56;
        v48 = v49;
        v47 = v50;
        *(_DWORD *)v56 = v66[0];
        *((_DWORD *)v15 + 1) = v12;
        *((_DWORD *)v15 + 2) = v13;
        *((_DWORD *)v15 + 3) = v14;
        v15 += 16;
        v16 = v66[5];
        v17 = v66[6];
        v18 = v66[7];
        *(_DWORD *)v15 = v66[4];
        *((_DWORD *)v15 + 1) = v16;
        *((_DWORD *)v15 + 2) = v17;
        *((_DWORD *)v15 + 3) = v18;
        v19 = logfmt_raw((int)v69, 0x1000u);
        V_UNLOCK(v19);
        v20 = zlog(
                *v55,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godmin"
                "er-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
                189,
                "update_fanspeed",
                15,
                37,
                40,
                v69);
        if ( realtime_speed != -1 )
        {
          V_LOCK(v20);
          V_INT((int)v67, s);
          V_INT((int)v68, v52);
          v21 = v68[1];
          v22 = v68[2];
          v23 = v68[3];
          v48 = v49;
          v47 = v50;
          *(_DWORD *)v11 = v68[0];
          *((_DWORD *)v11 + 1) = v21;
          *((_DWORD *)v11 + 2) = v22;
          *((_DWORD *)v11 + 3) = v23;
          v24 = v11 + 16;
          v25 = v68[5];
          v26 = v68[6];
          v27 = v68[7];
          *v24 = v68[4];
          v24[1] = v25;
          v24[2] = v26;
          v24[3] = v27;
          v28 = logfmt_raw((int)v69, 0x1000u);
          V_UNLOCK(v28);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-o"
            "rigin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            189,
            "update_fanspeed",
            15,
            39,
            20,
            v69);
          v29 = v54;
          v30 = 4 * v54;
          v31 = v61[24];
          *(_DWORD *)(v61[25] + 4 * v54) = v9;
          *(_DWORD *)(v31 + v30) = realtime_speed;
          v54 = v29 + 1;
        }
        ++v9;
      }
      while ( fan_num > v9 );
      v32 = v54;
      v33 = v61;
      v34 = v54 < fan_num;
      v61[23] = v54;
      if ( !v34 || (v35 = *(_DWORD *)(v60 + 32) | 2, *(_DWORD *)(v60 + 32) = v35, v32) )
      {
        v36 = 0;
        v37 = v60;
        do
        {
          while ( 1 )
          {
            v38 = *(_DWORD *)(v33[24] + 4 * v36);
            if ( v38 )
            {
              fan_max_speed = platform_get_fan_max_speed(v36);
              if ( v38 >= fan_pwm_get() * fan_max_speed / 150 )
                break;
            }
            ++v36;
            *(_DWORD *)(v37 + 32) |= 1u;
            if ( v33[23] <= v36 )
              goto LABEL_18;
          }
          ++v36;
        }
        while ( v33[23] > v36 );
LABEL_18:
        v35 = *(_DWORD *)(v60 + 32);
      }
    }
    v40 = v35 & 3;
    if ( (v35 & 3) != 0 )
    {
      v41 = *((_DWORD *)v63 + 1) + 1;
      v42 = *((_DWORD *)v63 + 1) - 14 < 0;
      *((_DWORD *)v63 + 1) = v41;
      if ( !(v42 ^ __OFSUB__(v41, 15) | (v41 == 15)) )
      {
        V_LOCK(v40);
        v43 = logfmt_raw((int)v69, 0x1000u);
        v44 = V_UNLOCK(v43);
        if ( !*(_BYTE *)(v62 + 218) )
          v44 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godm"
                  "iner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
                  189,
                  "update_fanspeed",
                  15,
                  58,
                  20,
                  v69);
        V_LOCK(v44);
        v45 = logfmt_raw((int)v69, 0x1000u);
        V_UNLOCK(v45);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
          189,
          "update_fanspeed",
          15,
          59,
          100,
          v69);
        *(_DWORD *)(v60 + 32) |= 4u;
      }
    }
    else
    {
      *((_DWORD *)v63 + 1) = 0;
    }
  }
  return v57;
}
