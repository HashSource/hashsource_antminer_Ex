int __fastcall update_fanspeed(int a1, _DWORD *a2, int a3)
{
  int *all_created_runtime; // r0
  int v7; // r3
  const char *v9; // r5
  unsigned int v10; // r9
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r11
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r0
  const char *v19; // r0
  int v20; // r3
  int v21; // r2
  _DWORD *v22; // r3
  int realtime_speed; // r6
  _DWORD *v24; // r11
  int v25; // r1
  int v26; // r2
  int v27; // r3
  _DWORD *v28; // r8
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r1
  int v35; // r2
  int v36; // r3
  char *v37; // r11
  _DWORD *v38; // r8
  int v39; // r1
  int v40; // r2
  int v41; // r3
  int v42; // r0
  const char *v43; // r2
  _DWORD *v44; // r8
  bool v45; // cc
  int v46; // r3
  int v47; // r5
  int v48; // r9
  int v49; // r10
  int fan_max_speed; // r6
  int v51; // r0
  int v52; // r3
  bool v53; // nf
  int v54; // r0
  int v55; // r0
  int v56; // r0
  __int64 v57; // r10
  const char *v58; // r9
  int v59; // r0
  _DWORD *v60; // r6
  int v61; // r1
  int v62; // r2
  int v63; // r3
  int v64; // r1
  int v65; // r2
  int v66; // r3
  int v67; // r0
  int v68; // r0
  _DWORD *v69; // r12
  char *v70; // lr
  int v71; // r1
  int v72; // r2
  int v73; // r3
  int v74; // r1
  int v75; // r2
  int v76; // r3
  int v77; // r0
  _BYTE v78[32]; // [sp+20h] [bp-11C4h] BYREF
  const char *v79; // [sp+40h] [bp-11A4h]
  const char *v80; // [sp+44h] [bp-11A0h]
  char *v81; // [sp+48h] [bp-119Ch]
  _DWORD *v82; // [sp+54h] [bp-1190h]
  char *s; // [sp+58h] [bp-118Ch]
  char *v84; // [sp+5Ch] [bp-1188h]
  const char *v85; // [sp+60h] [bp-1184h]
  char *v86; // [sp+64h] [bp-1180h]
  __int64 v87; // [sp+68h] [bp-117Ch]
  const char *v88; // [sp+70h] [bp-1174h]
  _DWORD *v89; // [sp+74h] [bp-1170h]
  int fan_num; // [sp+78h] [bp-116Ch]
  int *v91; // [sp+7Ch] [bp-1168h]
  int *v92; // [sp+80h] [bp-1164h]
  int v93; // [sp+84h] [bp-1160h]
  _DWORD *v94; // [sp+88h] [bp-115Ch]
  int v95; // [sp+8Ch] [bp-1158h]
  int v96; // [sp+90h] [bp-1154h]
  char *v97; // [sp+94h] [bp-1150h]
  int v98; // [sp+9Ch] [bp-1148h] BYREF
  char v99[32]; // [sp+A0h] [bp-1144h] BYREF
  _DWORD v100[8]; // [sp+C0h] [bp-1124h] BYREF
  char v101[32]; // [sp+E0h] [bp-1104h] BYREF
  _DWORD v102[8]; // [sp+100h] [bp-10E4h] BYREF
  char v103[32]; // [sp+120h] [bp-10C4h] BYREF
  _DWORD v104[8]; // [sp+140h] [bp-10A4h] BYREF
  char v105[32]; // [sp+160h] [bp-1084h] BYREF
  _DWORD v106[8]; // [sp+180h] [bp-1064h] BYREF
  char v107[32]; // [sp+1A0h] [bp-1044h] BYREF
  _DWORD v108[8]; // [sp+1C0h] [bp-1024h] BYREF
  _BYTE v109[4100]; // [sp+1E0h] [bp-1004h] BYREF

  v95 = a3;
  v98 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v98);
  v7 = *all_created_runtime;
  v93 = a3 + 32;
  v96 = v7;
  if ( v7 == a1 )
  {
    v97 = &fan_inited;
    if ( !fan_inited )
    {
      all_created_runtime = (int *)fan_init();
      *v97 = 1;
    }
    fan_num = platform_get_fan_num(all_created_runtime);
    if ( fan_num <= 0 )
    {
      v46 = *(_DWORD *)(v95 + 32);
      a2[23] = 0;
    }
    else
    {
      v85 = "update_fanspeed";
      v9 = 0;
      v86 = "%s";
      v88 = 0;
      v10 = 0;
      v92 = &g_fan_zc;
      v91 = &g_zc;
      s = "fanid";
      v84 = "fanspeed";
      v89 = v78;
      v94 = a2;
      v82 = 0;
      do
      {
        realtime_speed = fan_get_realtime_speed(v9);
        V_LOCK(realtime_speed);
        V_INT((int)v99, s);
        v87 = realtime_speed;
        V_INT((int)v100, v84);
        v24 = v89;
        v25 = v100[1];
        v26 = v100[2];
        v27 = v100[3];
        v28 = v89;
        v80 = v85;
        v79 = v86;
        *v89 = v100[0];
        v28[1] = v25;
        v28[2] = v26;
        v28[3] = v27;
        v28 += 4;
        v29 = v100[5];
        v30 = v100[6];
        v31 = v100[7];
        *v28 = v100[4];
        v28[1] = v29;
        v28[2] = v30;
        v28[3] = v31;
        v32 = logfmt_raw((int)v109, 0x1000u);
        V_UNLOCK(v32);
        v33 = zlog(
                *v92,
                "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/go"
                "dminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
                193,
                "update_fanspeed",
                15,
                37,
                40,
                v109);
        V_LOCK(v33);
        if ( realtime_speed == -1 )
        {
          V_INT((int)v103, s);
          V_INT((int)v104, v84);
          v34 = v104[1];
          v35 = v104[2];
          v36 = v104[3];
          v37 = (&fan_name)[(_DWORD)v9];
          v38 = v89;
          v79 = "%2d(corresponding to FAN%s on control board PCB";
          v80 = v9;
          v81 = v37;
          *v89 = v104[0];
          v38[1] = v34;
          v38[2] = v35;
          v38[3] = v36;
          v38 += 4;
          v39 = v104[5];
          v40 = v104[6];
          v41 = v104[7];
          *v38 = v104[4];
          v38[1] = v39;
          v38[2] = v40;
          v38[3] = v41;
          v42 = logfmt_raw((int)v109, 0x1000u);
          V_UNLOCK(v42);
          zlog(
            *v91,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            193,
            "update_fanspeed",
            15,
            45,
            100,
            v109);
        }
        else
        {
          V_INT((int)v101, s);
          V_INT((int)v102, v84);
          v11 = v102[1];
          v12 = v102[2];
          v13 = v102[3];
          v80 = v85;
          v79 = v86;
          *v24 = v102[0];
          v24[1] = v11;
          v24[2] = v12;
          v24[3] = v13;
          v14 = v24 + 4;
          v15 = v102[5];
          v16 = v102[6];
          v17 = v102[7];
          *v14 = v102[4];
          v14[1] = v15;
          v14[2] = v16;
          v14[3] = v17;
          v18 = logfmt_raw((int)v109, 0x1000u);
          V_UNLOCK(v18);
          zlog(
            *v91,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            193,
            "update_fanspeed",
            15,
            39,
            20,
            v109);
          v19 = v88;
          v20 = 4 * (_DWORD)v88;
          v21 = v94[24];
          *(_DWORD *)(v94[25] + 4 * (_DWORD)v88) = v9;
          *(_DWORD *)(v21 + v20) = realtime_speed;
          v88 = v19 + 1;
        }
        ++v9;
        v22 = (_DWORD *)((__PAIR64__((unsigned int)v82, v10++) + 1) >> 32);
        v82 = v22;
      }
      while ( (const char *)fan_num != v9 );
      v43 = v88;
      v44 = v94;
      v45 = (int)v88 < fan_num;
      v94[23] = v88;
      if ( !v45 || (v46 = *(_DWORD *)(v95 + 32) | 2, *(_DWORD *)(v95 + 32) = v46, v43) )
      {
        v47 = 0;
        v48 = v95;
        do
        {
          while ( 1 )
          {
            v49 = *(_DWORD *)(v44[24] + 4 * v47);
            if ( v49 )
            {
              fan_max_speed = platform_get_fan_max_speed(v47);
              if ( v49 >= fan_pwm_get() * fan_max_speed / 150 )
                break;
            }
            ++v47;
            *(_DWORD *)(v48 + 32) |= 1u;
            if ( v44[23] <= v47 )
              goto LABEL_19;
          }
          ++v47;
        }
        while ( v44[23] > v47 );
LABEL_19:
        v46 = *(_DWORD *)(v95 + 32);
      }
    }
    v51 = v46 & 3;
    if ( (v46 & 3) != 0 )
    {
      v52 = *((_DWORD *)v97 + 1) + 1;
      v53 = *((_DWORD *)v97 + 1) - 14 < 0;
      *((_DWORD *)v97 + 1) = v52;
      if ( !(v53 ^ __OFSUB__(v52, 15) | (v52 == 15)) )
      {
        V_LOCK(v51);
        v54 = logfmt_raw((int)v109, 0x1000u);
        v55 = V_UNLOCK(v54);
        if ( !*(_BYTE *)(v96 + 230) )
          v55 = zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/"
                  "godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
                  193,
                  "update_fanspeed",
                  15,
                  63,
                  20,
                  v109);
        if ( *((_DWORD *)v97 + 1) == 16 )
        {
          V_LOCK(v55);
          v91 = &g_zc;
          v56 = logfmt_raw((int)v109, 0x1000u);
          V_UNLOCK(v56);
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmin"
            "er-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c",
            193,
            "update_fanspeed",
            15,
            67,
            100,
            v109);
          v45 = fan_num <= 0;
          *(_DWORD *)(v95 + 32) |= 4u;
          if ( !v45 )
          {
            v57 = 0;
            v85 = "update_fanspeed";
            v82 = &unk_171CC8;
            v58 = 0;
            v86 = "%s";
            v92 = &g_fan_zc;
            v88 = "%2d(corresponding to FAN%s on control board PCB";
            s = "fanid";
            v84 = "fanspeed";
            LODWORD(v87) = "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/relea"
                           "se/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_fanspeed.c";
            v89 = v78;
            do
            {
              v59 = fan_get_realtime_speed(v58);
              V_LOCK(v59);
              V_INT((int)v105, s);
              v60 = v89;
              V_INT((int)v106, v84);
              v80 = v85;
              v61 = v106[1];
              v62 = v106[2];
              v63 = v106[3];
              v79 = v86;
              *v60 = v106[0];
              v60[1] = v61;
              v60[2] = v62;
              v60[3] = v63;
              v60 += 4;
              v64 = v106[5];
              v65 = v106[6];
              v66 = v106[7];
              *v60 = v106[4];
              v60[1] = v64;
              v60[2] = v65;
              v60[3] = v66;
              v67 = logfmt_raw((int)v109, 0x1000u);
              V_UNLOCK(v67);
              v68 = zlog(*v92, v87, 193, "update_fanspeed", 15, 71, 40, v109);
              V_LOCK(v68);
              V_INT((int)v107, s);
              V_INT((int)v108, v84);
              v69 = v89;
              v70 = (char *)v82[1];
              ++v82;
              v71 = v108[1];
              v72 = v108[2];
              v73 = v108[3];
              v80 = v58++;
              v81 = v70;
              v79 = v88;
              *v89 = v108[0];
              v69[1] = v71;
              v69[2] = v72;
              v69[3] = v73;
              v74 = v108[5];
              v75 = v108[6];
              v76 = v108[7];
              *v60 = v108[4];
              v60[1] = v74;
              v60[2] = v75;
              v60[3] = v76;
              v77 = logfmt_raw((int)v109, 0x1000u);
              V_UNLOCK(v77);
              zlog(*v91, v87, 193, "update_fanspeed", 15, 72, 100, v109);
              ++v57;
            }
            while ( (const char *)fan_num != v58 );
          }
        }
      }
    }
    else
    {
      *((_DWORD *)v97 + 1) = 0;
    }
  }
  return v93;
}
