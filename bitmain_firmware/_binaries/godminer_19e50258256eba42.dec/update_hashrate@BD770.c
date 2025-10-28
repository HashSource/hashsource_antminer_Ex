_QWORD *__fastcall update_hashrate(int a1, int a2, _QWORD *a3)
{
  float v3; // s16
  int v4; // r1
  __int64 v5; // r0
  float v6; // s16
  float v7; // r0
  float v8; // r0
  int v10; // [sp+24h] [bp-12E8h]
  int v11; // [sp+24h] [bp-12E8h]
  int v12; // [sp+24h] [bp-12E8h]
  float v16[55]; // [sp+A8h] [bp-1264h] BYREF
  _BYTE v17[72]; // [sp+184h] [bp-1188h] BYREF
  _BYTE v18[12]; // [sp+1184h] [bp-188h] BYREF
  _BYTE v19[12]; // [sp+1190h] [bp-17Ch] BYREF
  _BYTE v20[4]; // [sp+119Ch] [bp-170h] BYREF
  double v21; // [sp+11A0h] [bp-16Ch] BYREF
  __int64 v22; // [sp+11A8h] [bp-164h] BYREF
  __int64 v23; // [sp+11B0h] [bp-15Ch] BYREF
  _DWORD v24[7]; // [sp+11B8h] [bp-154h] BYREF
  int v25; // [sp+11D4h] [bp-138h]
  _DWORD v26[7]; // [sp+11D8h] [bp-134h] BYREF
  int v27; // [sp+11F4h] [bp-118h]
  _DWORD v28[7]; // [sp+11F8h] [bp-114h] BYREF
  int v29; // [sp+1214h] [bp-F8h]
  _DWORD v30[7]; // [sp+1218h] [bp-F4h] BYREF
  int v31; // [sp+1234h] [bp-D8h]
  _DWORD v32[7]; // [sp+1238h] [bp-D4h] BYREF
  int v33; // [sp+1254h] [bp-B8h]
  struct timespec *v34; // [sp+1258h] [bp-B4h]
  int v35; // [sp+125Ch] [bp-B0h]
  _QWORD *v36; // [sp+1260h] [bp-ACh]
  int v37; // [sp+1264h] [bp-A8h]
  _QWORD *v38; // [sp+1268h] [bp-A4h]
  struct timespec *v39; // [sp+126Ch] [bp-A0h]
  struct timespec *v40; // [sp+1270h] [bp-9Ch]
  struct timespec *v41; // [sp+1274h] [bp-98h]
  struct timespec *v42; // [sp+1278h] [bp-94h]
  struct timespec *v43; // [sp+127Ch] [bp-90h]
  struct timespec *v44; // [sp+1280h] [bp-8Ch]
  struct timespec *tp; // [sp+1284h] [bp-88h]
  struct timespec *v46; // [sp+1288h] [bp-84h]
  struct timespec *v47; // [sp+128Ch] [bp-80h]
  double v48; // [sp+1290h] [bp-7Ch]
  float v49; // [sp+129Ch] [bp-70h]
  float v50; // [sp+12A0h] [bp-6Ch]
  float v51; // [sp+12A4h] [bp-68h]
  __int64 v52; // [sp+12A8h] [bp-64h]
  __int64 v53; // [sp+12B0h] [bp-5Ch]
  int v54; // [sp+12BCh] [bp-50h]
  float v55; // [sp+12C0h] [bp-4Ch]
  float v56; // [sp+12C4h] [bp-48h]
  __int64 v57; // [sp+12C8h] [bp-44h]
  int i; // [sp+12D0h] [bp-3Ch]
  int j; // [sp+12D4h] [bp-38h]
  struct timespec *v60; // [sp+12D8h] [bp-34h]
  struct timespec *v61; // [sp+12DCh] [bp-30h]
  struct timespec *v62; // [sp+12E0h] [bp-2Ch]
  int v63; // [sp+12E4h] [bp-28h]

  if ( *(_BYTE *)(a1 + 1227) )
  {
    memset(&unk_5AF338, 0, 0xB500u);
    *(_QWORD *)(a1 + 480) = 0;
    *(_QWORD *)(a1 + 488) = 0;
  }
  else
  {
    (*(void (__fastcall **)(int, __int64 *))(a1 + 148))(a1, &v23);
    (*(void (__fastcall **)(int, __int64 *))(a1 + 156))(a1, &v22);
    (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 152))(a1, &v21, v20);
    *(_QWORD *)(a2 + 48) = v23;
    *(_QWORD *)(a2 + 56) = v22;
    v63 = *(_DWORD *)(a1 + 264);
    if ( v63 <= 16 )
    {
      v62 = (struct timespec *)((char *)&unk_5AEFA8 + 16 * v63);
      v61 = (struct timespec *)((char *)&unk_5AF0A8 + 16 * v63);
      v60 = (struct timespec *)((char *)&unk_5AF1A8 + 16 * v63);
      if ( byte_5AF2A8[v63] != 1 )
      {
        tp = v62;
        clock_gettime(1, v62);
        v46 = v61;
        clock_gettime(1, v61);
        v47 = v60;
        clock_gettime(1, v60);
        qword_5AF2B8[v63] = 0;
        byte_5AF2A8[v63] = 1;
      }
      if ( *(_QWORD *)(a1 + 488) || byte_5BA838 == 1 )
      {
        if ( byte_5BA838 != 1 )
          byte_5BA838 = 1;
        v41 = v62;
        clock_gettime(1, v62 + 1);
        v55 = (float)(1000LL * (v41[1].tv_sec - v41->tv_sec) + (v41[1].tv_nsec - v41->tv_nsec) / 1000000) / 1000.0;
        v54 = (int)&unk_5AF338 + 2896 * v63;
        if ( v55 >= 5.0 )
        {
          v53 = *(_QWORD *)(a1 + 488);
          v52 = v53 - qword_5AF2B8[v63];
          v56 = 0.0;
          get_miner_working_status((int)v19);
          if ( v19[6] != 1 && v19[0] != 1 )
          {
            v3 = COERCE_FLOAT(sub_345670(v52)) / v55;
            v4 = *(_DWORD *)(a1 + 472);
            LODWORD(v5) = 1 << v4;
            HIDWORD(v5) = (1 << (v4 - 32)) | (1u >> (32 - v4));
            v56 = v3 * COERCE_FLOAT(sub_345670(v5));
          }
          V_LOCK();
          sub_BD610((int)v24, *(int *)(a1 + 272));
          logfmt_raw(
            v17,
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
            "[HashRate-%d] time_passed_sec: %.2f, nc %llu, new %llu, %.2f H/s",
            *(_DWORD *)(a1 + 272),
            v55,
            v53,
            v52,
            v56);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            136,
            20,
            v17);
          v40 = v62;
          clock_gettime(1, v62);
          *(float *)(v54 + 4 * (*(_DWORD *)(v54 + 2880))++) = v56;
          *(int *)(v54 + 2880) %= 720;
          qword_5AF2B8[v63] = v53;
          v6 = *(float *)(a2 + 44);
          v7 = COERCE_FLOAT(sub_345670(*(_QWORD *)(v54 + 2888)));
          v51 = v56 + (float)(v6 * v7);
          v8 = COERCE_FLOAT(sub_345670(*(_QWORD *)(v54 + 2888) + 1LL));
          *(float *)(a2 + 44) = v51 / v8;
          ++*(_QWORD *)(v54 + 2888);
        }
        sub_BD644(v54);
        *(float *)(a2 + 32) = 5.0;
        sub_BD644(v54);
        *(_DWORD *)(a2 + 36) = 1114636288;
        sub_BD644(v54);
        *(_DWORD *)(a2 + 40) = 1155596288;
        v57 = 0;
        for ( i = 0; i < *(_DWORD *)(a1 + 372); ++i )
        {
          for ( j = 2; j <= 5; ++j )
            v57 += *(_QWORD *)(*(_DWORD *)(a1 + 496) + 48 * i + 8 * j);
        }
        *(_QWORD *)(a2 + 80) = v57;
        v39 = v61;
        clock_gettime(1, v61 + 1);
        v50 = (float)(1000LL * (v39[1].tv_sec - v39->tv_sec) + (v39[1].tv_nsec - v39->tv_nsec) / 1000000) / 1000.0;
        if ( v50 >= 900.0 )
        {
          sub_BD644(v54);
          v49 = 900.0;
          if ( *(int *)(a2 + 200) <= 23 )
          {
            *(float *)(a2 + 4 * (*(_DWORD *)(a2 + 200) + 26)) = v49;
          }
          else
          {
            memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
            *(float *)(a2 + 196) = v49;
          }
          ++*(_DWORD *)(a2 + 200);
          ++*(_QWORD *)(a2 + 208);
          if ( v49 > v21 * 0.97 )
          {
            v36 = a3;
            v35 = 0;
            a3[1] |= 1uLL;
            set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 272), 0);
          }
          else
          {
            v38 = a3;
            v37 = 0;
            *a3 |= 1uLL;
            get_miner_working_status((int)v18);
            if ( v18[8] != 1 )
            {
              V_LOCK();
              sub_BD610((int)v26, *(int *)(a1 + 272));
              logfmt_raw(
                v17,
                0x1000u,
                0,
                v27,
                v26[0],
                v26[1],
                v26[2],
                v26[3],
                v26[4],
                v26[5],
                v26[6],
                v27,
                "%s low hashrate happened!",
                "update_hashrate");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
                190,
                "update_hashrate",
                15,
                188,
                80,
                v17);
              read_status_from_monitor(v16, a1);
              v48 = 1000000000.0;
              V_LOCK();
              sub_BD610((int)v28, *(int *)(a1 + 272));
              logfmt_raw(
                v17,
                0x1000u,
                0,
                v29,
                v28[0],
                v28[1],
                v28[2],
                v28[3],
                v28[4],
                v28[5],
                v28[6],
                v29,
                "no ratio hashrate last_5s: %f",
                v10,
                v16[8] / v48);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
                190,
                "update_hashrate",
                15,
                191,
                80,
                v17);
              V_LOCK();
              sub_BD610((int)v30, *(int *)(a1 + 272));
              logfmt_raw(
                v17,
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
                "no ratio hashrate last_30min: %f",
                v11,
                v16[10] / v48);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
                190,
                "update_hashrate",
                15,
                192,
                80,
                v17);
              V_LOCK();
              sub_BD610((int)v32, *(int *)(a1 + 272));
              logfmt_raw(
                v17,
                0x1000u,
                0,
                v33,
                v32[0],
                v32[1],
                v32[2],
                v32[3],
                v32[4],
                v32[5],
                v32[6],
                v33,
                "no ratio hashrate lifetime: %f",
                v12,
                v16[11] / v48);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
                190,
                "update_hashrate",
                15,
                193,
                80,
                v17);
              set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 272), 1);
            }
          }
          v34 = v61;
          clock_gettime(1, v61);
        }
      }
      else
      {
        v42 = v62;
        clock_gettime(1, v62);
        v43 = v61;
        clock_gettime(1, v61);
        v44 = v60;
        clock_gettime(1, v60);
        qword_5AF2B8[v63] = 0;
      }
    }
  }
  return a3;
}
