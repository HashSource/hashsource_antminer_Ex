_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v6; // r7
  __int64 v7; // r2
  int v8; // r8
  float v9; // s16
  int v10; // r10
  int v11; // lr
  int v12; // r10
  __int64 v13; // kr00_8
  __int64 *v14; // r2
  __int64 v15; // t1
  int v17; // r5
  int v18; // r3
  int v19; // r2
  double v20; // d6
  int v21; // r5
  unsigned int v22; // r3
  bool v23; // cf
  unsigned int v24; // r3
  float v25; // s17
  int v26; // r3
  int v27; // r3
  int v28; // r1
  _DWORD *v29; // r10
  unsigned int v30; // r12
  int *v31; // r3
  __int64 v32; // r0
  int v33; // lr
  __int64 v34; // kr08_8
  float v35; // s17
  int v36; // r0
  int v37; // r0
  char v38; // r1
  int v39; // r3
  __int64 v40; // r0
  float v41; // s17
  char *v42; // r1
  int v43; // r6
  int v44; // r10
  int v45; // r1
  int v46; // r3
  int v47; // r1
  int v48; // r3
  int v49; // r1
  int v50; // r3
  int v51; // r1
  char *v52; // [sp+38h] [bp-114Ch]
  int *v53; // [sp+44h] [bp-1140h]
  int v54; // [sp+44h] [bp-1140h]
  int v55; // [sp+48h] [bp-113Ch]
  __int64 v56; // [sp+4Ch] [bp-1138h]
  _BYTE v57[4]; // [sp+5Ch] [bp-1128h] BYREF
  __int64 v58; // [sp+60h] [bp-1124h] BYREF
  __int64 v59; // [sp+68h] [bp-111Ch] BYREF
  double v60; // [sp+70h] [bp-1114h] BYREF
  _BYTE v61[8]; // [sp+7Ch] [bp-1108h] BYREF
  unsigned __int8 v62; // [sp+84h] [bp-1100h]
  _DWORD v63[7]; // [sp+88h] [bp-10FCh] BYREF
  int v64; // [sp+A4h] [bp-10E0h]
  _BYTE v65[32]; // [sp+A8h] [bp-10DCh] BYREF
  float v66; // [sp+C8h] [bp-10BCh]
  float v67; // [sp+D0h] [bp-10B4h]
  float v68; // [sp+D4h] [bp-10B0h]
  char v69[4100]; // [sp+180h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v58);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 140))(a1, &v59);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 136))(a1, &v60, v57);
  v6 = *(_DWORD *)(a1 + 240);
  v7 = v59;
  *(_QWORD *)(a2 + 48) = v58;
  *(_QWORD *)(a2 + 56) = v7;
  if ( v6 <= 16 )
  {
    v8 = 16 * v6;
    if ( !byte_197390[v6] )
    {
      clock_gettime(1, (struct timespec *)&byte_197390[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_197390[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_1975A0 + v8));
      *((_QWORD *)&unk_1976A0 + v6) = 0;
      byte_197390[v6] = 1;
    }
    if ( *(_QWORD *)(a1 + 448) )
    {
      if ( !byte_197720 )
        byte_197720 = 1;
    }
    else if ( !byte_197720 )
    {
      clock_gettime(1, (struct timespec *)&byte_197390[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_197390[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_1975A0 + v8));
      *((_QWORD *)&unk_1976A0 + v6) = 0;
      return a3;
    }
    v53 = (int *)(a1 + 448);
    clock_gettime(1, (struct timespec *)&byte_197390[v8 + 24]);
    v9 = (float)(1000LL * (*(_DWORD *)&byte_197390[v8 + 24] - *(_DWORD *)&byte_197390[v8 + 16])
               + (*(_DWORD *)&byte_197390[v8 + 28] - *(_DWORD *)&byte_197390[v8 + 20]) / 1000000)
       / 1000.0;
    v52 = (char *)&unk_197728 + 2896 * v6;
    if ( v9 >= 5.0 )
    {
      v22 = *((_DWORD *)&unk_1976A0 + 2 * v6);
      v23 = *v53 >= v22;
      v24 = *v53 - v22;
      v54 = *v53;
      LODWORD(v56) = v24;
      v55 = *(_DWORD *)(a1 + 452);
      HIDWORD(v56) = v55 - (*((_DWORD *)&unk_1976A0 + 2 * v6 + 1) + !v23);
      get_miner_working_status((int)v65);
      if ( v65[6] || v65[0] )
      {
        v25 = 0.0;
      }
      else
      {
        v37 = *(_DWORD *)(a1 + 432);
        v38 = 32 - v37;
        v39 = 1 << (v37 - 32);
        LODWORD(v40) = 1 << v37;
        HIDWORD(v40) = v39 | (1u >> v38);
        v41 = COERCE_FLOAT(sub_144C28(v40));
        v25 = v41 * (float)(COERCE_FLOAT(sub_144C28(v56)) / v9);
      }
      V_LOCK();
      LOWORD(v26) = 31324;
      HIWORD(v26) = (unsigned int)"m %d" >> 16;
      logfmt_raw(v69, 0x1000u, 0, v26, v9, v54, v55, v56, v25);
      V_UNLOCK();
      LOWORD(v27) = 31308;
      LOWORD(v28) = 31388;
      HIWORD(v27) = (unsigned int)"r_num: %d fan_num %d" >> 16;
      HIWORD(v28) = (unsigned int)"u, new %llu, %.2f H/s" >> 16;
      zlog(g_zc, v28, 193, v27, 15, 126, 20, v69);
      v29 = (_DWORD *)((char *)&unk_197728 + 2896 * v6);
      clock_gettime(1, (struct timespec *)&byte_197390[v8 + 16]);
      v30 = v29[723];
      v31 = (int *)((char *)&unk_1976A0 + 8 * v6);
      *v31 = v54;
      LODWORD(v32) = v29[722];
      v33 = v29[720] + 1;
      v31[1] = v55;
      HIDWORD(v32) = v30;
      *((float *)&unk_197728 + 724 * v6 + v29[720]) = v25;
      v34 = __PAIR64__(v30, v32) + 1;
      v29[720] = v33 % 720;
      v35 = v25 + (float)(COERCE_FLOAT(sub_144C28(v32)) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v35 / COERCE_FLOAT(sub_144C28(v34));
      *((_QWORD *)v29 + 361) = v34;
    }
    sub_63BE0((int)v52);
    *(float *)(a2 + 32) = 5.0;
    sub_63BE0((int)v52);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_63BE0((int)v52);
    v10 = *(_DWORD *)(a1 + 336);
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v10 <= 0 )
    {
      v13 = 0;
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 456) + 16;
      v12 = v11 + 48 * v10;
      v13 = 0;
      do
      {
        v14 = (__int64 *)v11;
        do
        {
          v15 = *v14++;
          v13 += v15;
        }
        while ( (__int64 *)(v11 + 32) != v14 );
        v11 += 48;
      }
      while ( v12 != v11 );
    }
    *(_QWORD *)(a2 + 80) = v13;
    clock_gettime(1, (struct timespec *)&byte_197390[v8 + 280]);
    if ( (float)((float)(1000LL * (*(_DWORD *)&byte_197390[v8 + 280] - *(_DWORD *)&byte_197390[v8 + 272])
                       + (*(_DWORD *)&byte_197390[v8 + 284] - *(_DWORD *)&byte_197390[v8 + 276]) / 1000000)
               / 1000.0) >= 900.0 )
    {
      sub_63BE0((int)v52);
      v17 = *(_DWORD *)(a2 + 200);
      if ( v17 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v17 + 104) = 1147207680;
      }
      v18 = *(_DWORD *)(a2 + 208);
      v19 = *(_DWORD *)(a2 + 212);
      v20 = v60 * 0.97;
      *(_DWORD *)(a2 + 200) = v17 + 1;
      *(_DWORD *)(a2 + 208) = v18 + 1;
      *(_DWORD *)(a2 + 212) = __CFADD__(v18, 1) + v19;
      if ( v20 < 900.0 )
      {
        v36 = *(_DWORD *)(a1 + 248);
        a3[2] |= 1u;
        set_miner_6060info_low_hashrate_err(v36, 0);
      }
      else
      {
        *a3 |= 1u;
        get_miner_working_status((int)v61);
        v21 = v62;
        if ( !v62 )
        {
          V_LOCK();
          LOWORD(v42) = 23936;
          HIWORD(v42) = (unsigned int)"p" >> 16;
          LOWORD(v43) = 31308;
          LOWORD(v44) = 31584;
          HIWORD(v43) = (unsigned int)"r_num: %d fan_num %d" >> 16;
          V_INT((int)v63, v42, *(int *)(a1 + 248));
          HIWORD(v44) = (unsigned int)"tus/update_hashrate.c" >> 16;
          logfmt_raw(v69, 0x1000u, v21, v64, v63[0], v63[1], v63[2], v63[3], v63[4], v63[5], v63[6], v64, v44, v43);
          V_UNLOCK();
          LOWORD(v45) = 31388;
          HIWORD(v45) = (unsigned int)"u, new %llu, %.2f H/s" >> 16;
          zlog(g_zc, v45, 193, v43, 15, 173, 80, v69);
          read_status_from_monitor(v65, a1);
          V_LOCK();
          LOWORD(v46) = 31612;
          HIWORD(v46) = (unsigned int)"ow hashrate happened!" >> 16;
          logfmt_raw(v69, 0x1000u, v21, v46, v66 / 1000000000.0);
          V_UNLOCK();
          LOWORD(v47) = 31388;
          HIWORD(v47) = (unsigned int)"u, new %llu, %.2f H/s" >> 16;
          zlog(g_zc, v47, 193, v43, 15, 176, 80, v69);
          V_LOCK();
          LOWORD(v48) = 31644;
          HIWORD(v48) = (unsigned int)" hashrate last_5s: %f" >> 16;
          logfmt_raw(v69, 0x1000u, v21, v48, v67 / 1000000000.0);
          V_UNLOCK();
          LOWORD(v49) = 31388;
          HIWORD(v49) = (unsigned int)"u, new %llu, %.2f H/s" >> 16;
          zlog(g_zc, v49, 193, v43, 15, 177, 80, v69);
          V_LOCK();
          LOWORD(v50) = 31680;
          HIWORD(v50) = (unsigned int)"hrate last_30min: %f" >> 16;
          logfmt_raw(v69, 0x1000u, v21, v50, v68 / 1000000000.0);
          V_UNLOCK();
          LOWORD(v51) = 31388;
          HIWORD(v51) = (unsigned int)"u, new %llu, %.2f H/s" >> 16;
          zlog(g_zc, v51, 193, v43, 15, 178, 80, v69);
          set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 248), 1);
        }
      }
      clock_gettime(1, (struct timespec *)&byte_197390[v8 + 272]);
    }
  }
  return a3;
}
