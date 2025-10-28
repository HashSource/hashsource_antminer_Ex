_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v6; // r7
  __int64 v7; // r2
  int v8; // r8
  __int64 v9; // r0
  float *v10; // r10
  float v11; // s16
  int v12; // r7
  int v13; // lr
  int v14; // r7
  __int64 v15; // kr00_8
  __int64 *v16; // r2
  __int64 v17; // t1
  __int64 v18; // r0
  int v20; // r4
  int v21; // r3
  int v22; // r2
  double v23; // d6
  float v24; // r0
  float v25; // s17
  int v26; // r0
  float *v27; // r0
  unsigned int v28; // r12
  unsigned __int64 v29; // kr08_8
  float v30; // s17
  float v31; // s17
  int v32; // [sp+24h] [bp-1058h]
  float *v33; // [sp+28h] [bp-1054h]
  unsigned int v34; // [sp+30h] [bp-104Ch]
  unsigned int v35; // [sp+3Ch] [bp-1040h]
  unsigned int v36; // [sp+3Ch] [bp-1040h]
  unsigned __int64 v37; // [sp+40h] [bp-103Ch]
  _BYTE v38[4]; // [sp+4Ch] [bp-1030h] BYREF
  __int64 v39; // [sp+50h] [bp-102Ch] BYREF
  __int64 v40; // [sp+58h] [bp-1024h] BYREF
  double v41; // [sp+60h] [bp-101Ch] BYREF
  _BYTE v42[12]; // [sp+6Ch] [bp-1010h] BYREF
  _BYTE v43[4100]; // [sp+78h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v39);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 140))(a1, &v40);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 136))(a1, &v41, v38);
  v6 = *(_DWORD *)(a1 + 220);
  v7 = v40;
  *(_QWORD *)(a2 + 48) = v39;
  *(_QWORD *)(a2 + 56) = v7;
  if ( v6 <= 16 )
  {
    v8 = 16 * v6;
    if ( !byte_1796E8[v6] )
    {
      clock_gettime(1, (struct timespec *)&byte_1796E8[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_1796E8[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_1798F8 + v8));
      *((_QWORD *)&unk_1799F8 + v6) = 0;
      byte_1796E8[v6] = 1;
    }
    if ( *(_QWORD *)(a1 + 416) )
    {
      if ( !byte_179A78 )
        byte_179A78 = 1;
    }
    else if ( !byte_179A78 )
    {
      clock_gettime(1, (struct timespec *)&byte_1796E8[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_1796E8[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_1798F8 + v8));
      *((_QWORD *)&unk_1799F8 + v6) = 0;
      return a3;
    }
    clock_gettime(1, (struct timespec *)&byte_1796E8[v8 + 24]);
    v9 = 1000LL * (*(_DWORD *)&byte_1796E8[v8 + 24] - *(_DWORD *)&byte_1796E8[v8 + 16])
       + (*(_DWORD *)&byte_1796E8[v8 + 28] - *(_DWORD *)&byte_1796E8[v8 + 20]) / 1000000;
    v10 = &flt_179A80[724 * v6];
    v11 = sub_12E828(v9, HIDWORD(v9)) / 1000.0;
    if ( v11 >= 5.0 )
    {
      v34 = *(_DWORD *)(a1 + 416);
      v35 = *(_DWORD *)(a1 + 420);
      v37 = __PAIR64__(v35, v34) - *((_QWORD *)&unk_1799F8 + v6);
      v24 = COERCE_FLOAT(get_miner_working_status((int)v42));
      if ( v42[6] || v42[0] )
      {
        v25 = 0.0;
      }
      else
      {
        v31 = COERCE_FLOAT(
                ((int (__fastcall *)(int, unsigned int))sub_12E818)(
                  1 << *(_DWORD *)(a1 + 400),
                  (1 << (*(_DWORD *)(a1 + 400) - 32)) | (1u >> (32 - *(_DWORD *)(a1 + 400)))));
        v24 = sub_12E818(v37, HIDWORD(v37));
        v25 = v31 * (float)(v24 / v11);
      }
      V_LOCK(LODWORD(v24));
      v26 = logfmt_raw((int)v43, 0x1000u);
      V_UNLOCK(v26);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        193,
        "update_hashrate",
        15,
        125,
        20,
        v43);
      clock_gettime(1, (struct timespec *)&byte_1796E8[v8 + 16]);
      v27 = &flt_179A80[724 * v6];
      *((_DWORD *)&unk_1799F8 + 2 * v6) = v34;
      v28 = *((_DWORD *)v27 + 723);
      v32 = *((_DWORD *)v27 + 720);
      v33 = v27;
      *((_DWORD *)&unk_1799F8 + 2 * v6 + 1) = v35;
      v36 = *((_DWORD *)v27 + 722);
      flt_179A80[724 * v6 + v32] = v25;
      v29 = __PAIR64__(v28, v36) + 1;
      *((_DWORD *)v27 + 720) = (v32 + 1) % 720;
      v30 = v25 + (float)(sub_12E818(v36, v28) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v30 / sub_12E818(v29, HIDWORD(v29));
      *((_QWORD *)v33 + 361) = v29;
    }
    sub_5AA30((int)v10);
    *(float *)(a2 + 32) = 5.0;
    sub_5AA30((int)v10);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_5AA30((int)v10);
    v12 = *(_DWORD *)(a1 + 304);
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v12 <= 0 )
    {
      v15 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 424) + 16;
      v14 = v13 + 48 * v12;
      v15 = 0;
      do
      {
        v16 = (__int64 *)v13;
        do
        {
          v17 = *v16++;
          v15 += v17;
        }
        while ( (__int64 *)(v13 + 32) != v16 );
        v13 += 48;
      }
      while ( v14 != v13 );
    }
    *(_QWORD *)(a2 + 80) = v15;
    clock_gettime(1, (struct timespec *)&byte_1796E8[v8 + 280]);
    v18 = 1000LL * (*(_DWORD *)&byte_1796E8[v8 + 280] - *(_DWORD *)&byte_1796E8[v8 + 272])
        + (*(_DWORD *)&byte_1796E8[v8 + 284] - *(_DWORD *)&byte_1796E8[v8 + 276]) / 1000000;
    if ( (float)(sub_12E828(v18, HIDWORD(v18)) / 1000.0) >= 900.0 )
    {
      sub_5AA30((int)v10);
      v20 = *(_DWORD *)(a2 + 200);
      if ( v20 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v20 + 104) = 1147207680;
      }
      v21 = *(_DWORD *)(a2 + 208);
      v22 = *(_DWORD *)(a2 + 212);
      v23 = v41 * 0.97;
      *(_DWORD *)(a2 + 200) = v20 + 1;
      *(_DWORD *)(a2 + 208) = v21 + 1;
      *(_DWORD *)(a2 + 212) = __CFADD__(v21, 1) + v22;
      if ( v23 >= 900.0 )
        *a3 |= 1u;
      clock_gettime(1, (struct timespec *)&byte_1796E8[v8 + 272]);
    }
  }
  return a3;
}
